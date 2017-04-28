using System;
using System.Collections.Generic;
using System.Text;
using System.Reflection;
using System.Reflection.Emit;
using System.IO;
using System.Globalization;

namespace IL2CPP
{
    public class Context
    {
        private static Context context = new Context();
        public static Context Ref
        {
            get
            {
                return context;
            }
        }
        
        public ClassInfo CurClassInfo
        {
            get { return classStack.Peek(); }
        }
        public FieldInfo CurFieldInfo
        {
            get { return curFieldInfo; }
        }
        public MethodInfo CurMethodInfo
        {
            get { return curMethodInfo; }
        }
        public PropertyInfo CurPropertyInfo
        {
            get { return curPropertyInfo; }
        }
        public EventInfo CurEventInfo
        {
            get { return curEventInfo; }
        }
        public SortedList<string, string> DataDecls
        {
            get { return dataDecls; }
        }
        public SortedList<string, string> DataTLSs
        {
            get { return dataTLSs; }
        }
        public int NonameDataIndex
        {
            get { return nonameDataIndex; }
            set { nonameDataIndex = value; }
        }
        public void DefineData(string id, string val)
        {
            dataDecls[id] = val;
        }
        public void DefineDataTLS(string id, string tls)
        {
            dataTLSs[id] = tls;
        }
        public List<string> Usings
        {
            get { return usings; }
        }

        public void AddReference(AssemblyRef r)
        {
            usings.Add(r.Name);
            try
            {
                Assembly a = Assembly.Load(r.ToString());
                if (a != null)
                {
                    assemblys.Add(a);
                }
            }
            catch (Exception eee)
            {
                Console.Error.WriteLine(eee.Message);
            }
        }
        public void NewClass()
        {
            ClassInfo ci = new ClassInfo();
            if (classStack.Count > 0)
            {
                ClassInfo ci0 = classStack.Peek();
                ci0.NestedClasses.Add(ci);
                curEncloseClassOldFullName = ci0.OldFullName;
                curEncloseClassFullName = ci0.FullName;
                curEncloseClassName = ci0.ClassName;

                ci.IsNested=true;
            }
            else
            {
                curEncloseClassOldFullName = "";
                curEncloseClassFullName = "";
                curEncloseClassName = "";
            }
            classStack.Push(ci);
        }
        public void BeginClass()
        {
            //外层私有存取类改为公有，内嵌私有存取改为internal
            if (CurClassInfo.Accesses.Count == 1 && CurClassInfo.Accesses.Contains("private"))
            {
                if (classStack.Count > 1)
                {
                    CurClassInfo.Accesses[0] = "internal";
                }
                else
                {
                    CurClassInfo.Accesses[0] = "public";
                }
            }
            int doti = CurClassInfo.FullName.LastIndexOf("::");
            string n = CurClassInfo.FullName;
            if (doti >= 0)
                n = n.Substring(doti + 2);
            if (classStack.Count > 1)
            {
                n = CurClassInfo.FullName;
                //分析类名与全名并记录旧的全名
                if (curEncloseClassOldFullName.Length > 0)
                    CurClassInfo.OldFullName = curEncloseClassOldFullName + "::" + n;
                else
                    CurClassInfo.OldFullName = CurClassInfo.FullName;
                //检查换名，亦即嵌入类与封闭类同名
                if (n == curEncloseClassName)
                {
                    n += "_" + globalRenameIndex;
                    globalRenameIndex++;
                }
                else if (n.IndexOf("::") >= 0)
                {
                    //对嵌入名空间进行换名，将"::"改为"_"
                    n = n.Replace("::","_");
                }
                if (curEncloseClassFullName.Length > 0)
                {
                    CurClassInfo.FullName = curEncloseClassFullName + "::" + n;
                }
                else if (doti >= 0)
                {
                    CurClassInfo.FullName = CurClassInfo.FullName.Substring(0, doti + 1) + n;
                }
                else
                {
                    CurClassInfo.FullName = n;
                }
                //检查是否需要记录换名，即便当前类名没有替换，但假若外层类有换名，则也需要记录换名。
                if (CurClassInfo.FullName != CurClassInfo.OldFullName)
                {
                    typeRenames[CurClassInfo.OldFullName] = CurClassInfo.FullName;
                }
            }
            else
            {
                NamespaceInfo ni = NamespaceInfo.DecideNamespace(CurClassInfo.FullName);
                if (ni == NamespaceInfo.RootNamespace)
                {
                    CurClassInfo.OldFullName = CurClassInfo.FullName;
                    CurClassInfo.FullName = NamespaceInfo.RootNS + "::" + CurClassInfo.OldFullName;
                    typeRenames[CurClassInfo.OldFullName] = CurClassInfo.FullName;
                }
                else
                {
                    CurClassInfo.OldFullName = CurClassInfo.FullName;
                }
            }
            CurClassInfo.ClassName = n;

            if (CurClassInfo.BaseClass == BasicTypeInfo.System_Enum)
            {
                CurClassInfo.BaseClass = UndefinedTypeInfo.Ref;
                CurClassInfo.Type = "enum";
            }
            else if (CurClassInfo.BaseClass == BasicTypeInfo.System_ValueType)
            {
                CurClassInfo.BaseClass = UndefinedTypeInfo.Ref;
                CurClassInfo.Type = "value";
            }
            else if (CurClassInfo.BaseClass == BasicTypeInfo.System_MulticastDelegateInfo)
            {
                CurClassInfo.BaseClass = UndefinedTypeInfo.Ref;
                CurClassInfo.Type = "delegate";
            }
            else if (CurClassInfo.BaseClass == BasicTypeInfo.ObjectInfo)
            {
                CurClassInfo.BaseClass = UndefinedTypeInfo.Ref;
            }
            if(CurClassInfo.Type=="value")
            {
                valueTypes[CurClassInfo.FullName] = TypeInfo.Struct;
            }
            else if (CurClassInfo.Type == "enum")
            {
                valueTypes[CurClassInfo.FullName] = TypeInfo.Enum;
            }
            else if (CurClassInfo.Type == "delegate")
            {
                valueTypes[CurClassInfo.FullName] = TypeInfo.Delegate;
            }
            else if (CurClassInfo.Type == "interface")
            {
                CurClassInfo.PostAttrs.Remove("abstract");
                valueTypes[CurClassInfo.FullName] = TypeInfo.Interface;
            }
            else
            {
                valueTypes[CurClassInfo.FullName] = TypeInfo.Class;
            }
            foreach (TypeInfo ti in CurClassInfo.ImplIntfs)
            {
                if (ti.CliFullName == "System.IDisposable")
                {
                    CurClassInfo.ImplIntfs.Remove(ti);
                    break;
                }
            }
            classes[CurClassInfo.FullName] = CurClassInfo;
            CurClassInfo.GenericParams.AddRange(TypeParams.TempArgs);
            TypeParams.ResetTemp();
        }
        public void EndClass()
        {
            //将继承的特性/事件实现方法归纳为特性/事件
            ClassInfo ci=classStack.Peek();
            foreach (MethodInfo mi in ci.Methods.Values)
            {
                if (mi.IsSpecialMember)
                {
                    PropertyInfo pi;
                    string psig = mi.CalcProperty(out pi);
                    if (psig.Length > 0)
                    {
                        if (!ci.Properties.ContainsKey(psig))
                        {
                            ci.Properties[psig] = pi;
                        }
                        else
                        {
                            pi = ci.Properties[psig];
                        }
                        if (mi.MethodKind==MethodInfo.GetMethod)
                        {
                            pi.GetMethod = mi;
                        }
                        else if (mi.MethodKind==MethodInfo.SetMethod)
                        {
                            pi.SetMethod = mi;
                        }
                    }
                    else
                    {
                        EventInfo ei;
                        string esig = mi.CalcEvent(out ei);
                        if (esig.Length > 0)
                        {
                            if (!ci.Events.ContainsKey(esig))
                            {
                                ci.Events[esig] = ei;
                            }
                            else
                            {
                                ei = ci.Events[esig];
                            }
                            if (mi.MethodKind == MethodInfo.AddMethod)
                            {
                                ei.AddMethod = mi;
                            }
                            else if (mi.MethodKind == MethodInfo.RemoveMethod)
                            {
                                ei.RemoveMethod = mi;
                            }
                        }
                    }
                }
            }
            //完成类定义
            classStack.Pop();
            if (classStack.Count == 0)//顶层类应添加到相应的名空间中
            {
                NamespaceInfo ni = NamespaceInfo.DecideNamespace(ci.FullName);
                ni.Classes.Add(ci);
            }
            else
            {
                ci.OuterClassInfo = classStack.Peek();
            }
        }
        public void NewMethod()
        {
            curMethodInfo=new MethodInfo();
        }
        public void BeginMethod()
        {
            //私有虚函数改为protected
            if (CurMethodInfo.IsVirtual && CurMethodInfo.Accesses.Count==1 && CurMethodInfo.Accesses.Contains("private"))
            {
                CurMethodInfo.Accesses[0] = "protected";
            }
            if (classStack.Count > 0)
            {
                ClassInfo ci = classStack.Peek();
                if (ci.Type == "interface")
                {
                    CurMethodInfo.IsInterfaceMember = true;
                }
                if (CurMethodInfo.IsSpecial)
                {
                    if (CurMethodInfo.Name == ".ctor")
                    {
                        CurMethodInfo.MethodKind = MethodInfo.ctorMethod;
                    }
                    else if (CurMethodInfo.Name == ".cctor")
                    {
                        CurMethodInfo.MethodKind = MethodInfo.cctorMethod;
                    }
                    else if (CurMethodInfo.Name.StartsWith("get_"))
                    {
                        CurMethodInfo.MethodKind = MethodInfo.GetMethod;
                        CurMethodInfo.SpecialMemberName = CurMethodInfo.Name.Substring(4);
                    }
                    else if (CurMethodInfo.Name.StartsWith("set_"))
                    {
                        CurMethodInfo.MethodKind = MethodInfo.SetMethod;
                        CurMethodInfo.SpecialMemberName = CurMethodInfo.Name.Substring(4);
                    }
                    else if (CurMethodInfo.Name.StartsWith("add_"))
                    {
                        CurMethodInfo.MethodKind = MethodInfo.AddMethod;
                        CurMethodInfo.SpecialMemberName = CurMethodInfo.Name.Substring(4);
                    }
                    else if (CurMethodInfo.Name.StartsWith("remove_"))
                    {
                        CurMethodInfo.MethodKind = MethodInfo.RemoveMethod;
                        CurMethodInfo.SpecialMemberName = CurMethodInfo.Name.Substring(7);
                    }
                }
            }
            CurMethodInfo.GenericParams.AddRange(TypeParams.TempArgs);
            TypeParams.ResetTemp();
            
            CurMethodInfo.CalcSig();
        }
        public void EndMethod()
        {
            if (classStack.Count == 0)//顶层方法应添加到相应的名空间中
            {
                NamespaceInfo ni = NamespaceInfo.DecideNamespace(CurMethodInfo.Name);
                ni.Methods[CurMethodInfo.Sig] = CurMethodInfo;
            }
            else
            {
                ClassInfo ci = classStack.Peek();
                ci.Methods[CurMethodInfo.Sig] = CurMethodInfo;
                ci.MethodList.Add(CurMethodInfo);//按IL文件中的顺序添加到方法表中
                CurMethodInfo.ClassInfo = ci;
            }
            curMethodInfo = null;
        }
        public void NewField()
        {
            curFieldInfo=new FieldInfo();
        }
        public void BeginField()
        {
            if (classStack.Count > 0)
            {
                ClassInfo ci = classStack.Peek();
            }
            if (CurFieldInfo.PreAttrs.Contains("literal"))
                CurFieldInfo.PreAttrs.Remove("static");
        }
        public void EndField()
        {
            if (classStack.Count == 0)//顶层字段应添加到相应的名空间中
            {
                NamespaceInfo ni = NamespaceInfo.DecideNamespace(CurFieldInfo.Name);
                ni.Fields[CurFieldInfo.Name] = CurFieldInfo;
            }
            else
            {
                ClassInfo ci = classStack.Peek();
                ci.Fields[CurFieldInfo.Name] = CurFieldInfo;
                ci.FieldList.Add(CurFieldInfo);//按IL文件中的顺序添加到字段表中
                CurFieldInfo.ClassInfo = ci;
            }
            curFieldInfo = null;
        }
        public void NewProperty()
        {
            curPropertyInfo = new PropertyInfo();
        }
        public void BeginProperty()
        {
            ClassInfo ci = classStack.Peek();
            if (ci.Type == "interface")
            {
                CurPropertyInfo.IsInterfaceMember = true;
            }
            CurPropertyInfo.CalcSig();
        }
        public void EndProperty()
        {
            classStack.Peek().Properties[CurPropertyInfo.Sig] = CurPropertyInfo;
            if(CurPropertyInfo.GetMethod!=null)
                CurPropertyInfo.GetMethod.SpecialMemberName = CurPropertyInfo.Name;
            if (CurPropertyInfo.SetMethod != null)
                CurPropertyInfo.SetMethod.SpecialMemberName = CurPropertyInfo.Name;
            curPropertyInfo = null;
        }
        public void NewEvent()
        {
            curEventInfo=new EventInfo();
        }
        public void BeginEvent()
        {
            ClassInfo ci = classStack.Peek();
            if(ci.Type=="interface")
            {
                CurEventInfo.IsInterfaceMember = true;
            }
        }
        public void EndEvent()
        {
            classStack.Peek().Events[CurEventInfo.Name] = CurEventInfo;
            if (CurEventInfo.AddMethod != null)
                CurEventInfo.AddMethod.SpecialMemberName = CurEventInfo.Name;
            if (CurEventInfo.RemoveMethod != null)
                CurEventInfo.RemoveMethod.SpecialMemberName = CurEventInfo.Name;
            curEventInfo = null;
        }

        public Type GetType(string type)
        {
            if (type==null || type.Length <= 0)
                return null;
            return GetNestedType(type);
        }
        private Type GetNestedType(string type)
        {
            Type t = Type.GetType(type);
            if (t != null)
                return t;
            if (t == null)
            {
                foreach (Assembly a in assemblys)
                {
                    t = a.GetType(type);
                    if (t != null)
                        return t;
                }
            }
            int i = type.LastIndexOf('.');
            if (i <= 0) 
                return null;
            string outerType = type.Substring(0, i);
            string nestedType = type.Substring(i + 1);
            t = GetNestedType(outerType);
            if (t != null)
            {
                return t.GetNestedType(nestedType);
            }
            return null;
        }
        public int GetTypeValue(TypeInfo ti)
        {
            string type = ti.CliFullName;
            if (type == "void" || type == "System.Void")
                return TypeInfo.Void;
            else if (valueTypes.ContainsKey(ti.TypeClause))
                return valueTypes[ti.TypeClause];

            Type t = GetType(type);
            if (t != null)
            {
                if (t == typeof(System.Boolean))
                {
                    return TypeInfo.Boolean;
                }
                else if (t.IsPrimitive)
                {
                    return TypeInfo.Simple;
                }
                else if (t.IsValueType || t.IsEnum)
                {
                    if (t.IsEnum)
                        return TypeInfo.Enum;
                    else
                        return TypeInfo.Struct;
                }
                else
                {
                    if (t.BaseType == typeof(System.MulticastDelegate))
                        return TypeInfo.Delegate;
                    else if (t.IsInterface)
                        return TypeInfo.Interface;
                    else
                        return TypeInfo.Class;
                }
            }
            else
            {
                return TypeInfo.Class;
            }
        }
        
        public MethodInfo DecideRefedMethod(MethodOperand r,int kind)
        {
            ClassInfo ci = classStack.Peek();
            if (ci.Methods.ContainsKey(r.Sig))
            {
                MethodInfo mi = ci.Methods[r.Sig];
                mi.MethodKind = kind;
                return mi;
            }
            return null;
        }
        public MethodInfo FindOperandMethod(MethodOperand r)
        {
            if(r.TypeSpec.IsUndefined)
            {
                NamespaceInfo ni = NamespaceInfo.RootNamespace;
                if (ni.Methods.ContainsKey(r.Sig))
                    return ni.Methods[r.Sig];
            }
            else if(classes.ContainsKey(r.TypeSpec.TypeClause))
            {
                ClassInfo ci = classes[r.TypeSpec.TypeClause];
                if (ci.Methods.ContainsKey(r.Sig))
                    return ci.Methods[r.Sig];
            }
            return null;
        }
        public FieldInfo FindOperandField(FieldOperand r)
        {
            if (classes.ContainsKey(r.TypeSpec.TypeClause))
            {
                ClassInfo ci = classes[r.TypeSpec.TypeClause];
                if (ci.Fields.ContainsKey(r.Name))
                    return ci.Fields[r.Name];
            }
            else
            {
                NamespaceInfo ni = NamespaceInfo.RootNamespace;
                if (ni.Fields.ContainsKey(r.Name))
                    return ni.Fields[r.Name];
            }
            return null;
        }
        public ClassInfo FindOperandClass(TypeSpecOperand r)
        {
            return FindClass(r.TypeSpec);
        }
        public ClassInfo FindClass(TypeInfo ti)
        {
            return FindClass(ti.BasicType.TypeClause);
        }
        public ClassInfo FindClass(string cn)
        {
            if (classes.ContainsKey(cn))
                return classes[cn];
            return null;
        }

        public bool IsSpecialName(MethodOperand r)
        {
            MethodInfo mi = r.MethodInfo;
            if (mi != null)
                return mi.IsSpecial;
            if (r.TypeSpec.IsUndefined)
                return false;

            Type t = GetType(r.TypeSpec.CliFullName);
            if (t == null)
                t = typeof(object);

            int ct = 0;
            if (r.Args != null)
                ct = r.Args.Count;
            Type[] ts = new Type[ct];
            for (int i = 0; i < ct; i++)
            {
                TypeInfo type = r.Args[i].Type;
                ts[i] = GetType(type.CliFullName);
            }

            System.Reflection.MethodInfo[] mis = t.GetMethods(BindingFlags.Static | BindingFlags.Instance | BindingFlags.Public | BindingFlags.NonPublic | BindingFlags.FlattenHierarchy);
            foreach (System.Reflection.MethodInfo info in mis)
            {
                if (!info.IsSpecialName)
                    continue;
                if (info.Name != r.Name)
                    continue;
                if (info.IsGenericMethod && r.TypeArgs.Count<=0)
                    continue;
                if (!info.IsGenericMethod && r.TypeArgs.Count>0)
                    continue;
                ParameterInfo[] pis = info.GetParameters();
                if (pis.Length == 0 && ct == 0)
                    return true;
                if (pis.Length != ct)
                    continue;
                for (int i = 0; i < ct; i++)
                {
                    ParameterInfo pi = pis[i];
                    if (pi.ParameterType != ts[i])
                        break;
                    if (i == ct - 1)
                        return true;
                }
            }
            return false;
        }
        public bool IsOverride(MethodInfo mi)
        {
            if (!mi.IsVirtual || mi.Name==".ctor" || mi.Name==".cctor")
                return false;
            ClassInfo ci=mi.ClassInfo;
            if(ci==null)
                return false;
            if (ci.BaseClass.IsUndefined)
            {
                return IsMember("", mi);
            }
            else if (classes.ContainsKey(ci.BaseClass.TypeClause))
            {
                ClassInfo ci2 = classes[ci.BaseClass.TypeClause];
                return IsMember(ci2, mi);
            }
            else
            {
                return IsMember(ci.BaseClass.CliFullName, mi);
            }
        }
        private bool IsMember(ClassInfo ci, MethodInfo mi)
        {
            if (ci.Methods.ContainsKey(mi.Sig))
                return true;
            if (ci.BaseClass.IsUndefined)
            {
                return IsMember("", mi);
            }
            else if (classes.ContainsKey(ci.BaseClass.TypeClause))
            {
                ClassInfo ci2 = classes[ci.BaseClass.TypeClause];
                return IsMember(ci2, mi);
            }
            else
            {
                return IsMember(ci.BaseClass.CliFullName, mi);
            }
        }
        private bool IsMember(string super, MethodInfo mi)
        {
            Type t = GetType(super);
            if (t == null)
                t = typeof(object);

            int ct=0;
            if(mi.Args!=null)
                ct=mi.Args.Count;
            Type[] ts=new Type[ct];
            for(int i=0;i<ct;i++)
            {
                TypeInfo type=mi.Args[i].Type;
                ts[i] = GetType(type.CliFullName);
            }

            System.Reflection.MethodInfo[] mis = t.GetMethods(BindingFlags.Instance | BindingFlags.Public | BindingFlags.NonPublic | BindingFlags.FlattenHierarchy);
            foreach (System.Reflection.MethodInfo info in mis)
            {
                if (info.Name != mi.Name)
                    continue;
                if (info.IsGenericMethod && mi.GenericParams.Count==0)
                    continue;
                if (!info.IsGenericMethod && mi.GenericParams.Count!=0)
                    continue;
                ParameterInfo[] pis = info.GetParameters();
                if (pis.Length == 0 && ct==0)
                    return true;
                if (pis.Length != ct)
                    continue;
                for (int i = 0; i < ct; i++)
                {
                    ParameterInfo pi = pis[i];
                    if (pi.ParameterType != ts[i])
                        break;
                    if (i == ct - 1)
                        return true;
                }
            }
            return false;
        }
        
        public bool InRenames(string name)
        {
            if (name.EndsWith("[]"))
                return typeRenames.ContainsKey(name.Substring(0, name.Length - 2));
            else
                return typeRenames.ContainsKey(name);
        }
        public string Rename(string name)
        {
            string sn = name;
            string postfix = "";
            if (sn.EndsWith("[]"))
            {
                sn = name.Substring(0, name.Length - 2);
                postfix = "[]";
            }
            if (typeRenames.ContainsKey(sn))
                return typeRenames[sn]+postfix;
            return name;
        }

        public void PushSequence()
        {
            StringBuilder sb = new StringBuilder();
            sequenceBuilderStack.Push(sb);
        }
        public void AddSequenceItem(string d, string delit)
        {
            StringBuilder sb = sequenceBuilderStack.Peek();
            if (sb.Length > 0)
                sb.Append(delit);
            sb.Append(d);
        }
        public string PopSequence()
        {
            StringBuilder sb = sequenceBuilderStack.Pop();
            string s = sb.ToString();
            sb.Length = 0;
            return s;
        }
        
        public bool IsBytes
        {
            get { return isBytes; }
        }
        public void StartBytes()
        {
            isBytes = true;
        }
        public void EndBytes()
        {
            isBytes = false;
        }

        public static string BuildRepeatSequence(string item, int count, string delit)
        {
            StringBuilder sb = new StringBuilder();
            for (int i = 0; i < count; i++)
            {
                if (sb.Length > 0)
                    sb.Append(delit);
                sb.Append(item);
            }
            return sb.ToString();
        }
        public static string BytesToArray(string hexBytes)
        {
            string[] ss = hexBytes.Split(',');
            return "gcnew array<System::Byte>{0x"+string.Join(",0x", ss)+"}";
        }
        public static string BytesToString(string hexBytes)
        {
            StringBuilder sb = new StringBuilder();
            sb.Append("L\"");
            string[] ss = hexBytes.Split(',');
            for (int i = 0; i < ss.Length; i+=2)
            {
                sb.Append("\\x");
                sb.Append(ss[i + 1]);
                sb.Append(ss[i]);
            }
            sb.Append('"');
            return sb.ToString();
        }

        public static List<string> CreateStringList(params string[] items)
        {
            List<string> list = new List<string>();
            ListAddStrings(list, items);
            return list;
        }
        public static void ListAddStrings(object listObj, params string[] items)
        {
            List<string> list = listObj as List<string>;
            if (list == null)
                return;
            foreach (string item in items)
            {
                if (!list.Contains(item))
                {
                    list.Add(item);
                }
            }
        }
        public static void ListAddList(object listObj1, object listObj2)
        {
            List<string> list1 = listObj1 as List<string>;
            List<string> list2 = listObj2 as List<string>;
            list1.AddRange(list2);
        }
        
        private Context()
        {
        }

        public void Generate(string path)
        {
            if (!Directory.Exists(path))
                Directory.CreateDirectory(path);
            else
                EmptyDirectory(path);

            TypeInfo.TuneAllTypeInfos();
            NamespaceInfo.TuneAll();
            NamespaceInfo.BuildDependence();
            NamespaceInfo.DecompileAll();

            StringBuilder sb=new StringBuilder();
            sb.AppendLine("#pragma once");
            sb.AppendLine("#pragma warning (disable:4102 4240 4461 4489 4490 4677)");
            sb.AppendLine();
            foreach (string us in usings)
            {
                if (us == "mscorlib") continue;
                sb.AppendLine("#using \"" + us.Replace("::",".") + ".dll\"");
            }
            sb.AppendLine();
            string[] preUsings=new string[]{
                    "System::Security",
                    "System::Security::Permissions",
                    "System::Runtime::InteropServices",
                    "System::Runtime::CompilerServices",
                    "System",
                    "System::Collections::Generic",
                    "System::Text",
                    "System::IO"
                };
            foreach (string us in preUsings)
            {
                sb.AppendLine("using namespace " + us + ";");
            }
            foreach(string us in usings)
            {
                if (us == "mscorlib") continue;
                if (Array.IndexOf(preUsings, us) >= 0)
                    continue;
                sb.AppendLine("using namespace " + us + ";");
            }
            sb.AppendLine();
            StreamWriter sw = new StreamWriter(Path.Combine(path, NamespaceInfo.DeclFileName), false, Encoding.Default);
            sw.WriteLine(sb.ToString());
            StreamWriter sw2 = new StreamWriter(Path.Combine(path, NamespaceInfo.DefFileName), false, Encoding.Default);
            sw2.WriteLine("#pragma once");
            sw2.WriteLine();
            NamespaceInfo.Generate(path, sw, sw2);
            sw2.Close();
            sw.WriteLine("#include \"" + NamespaceInfo.DefFileName + "\"");
            sw.Close();
        }
        private static void EmptyDirectory(string dir)
        {
            if (!Directory.Exists(dir))
            {
                return;
            }
            string[] files = Directory.GetFiles(dir);
            foreach (string file in files)
            {
                string destFile = Path.Combine(dir, Path.GetFileName(file));
                File.Delete(destFile);
            }
            string[] dirs = Directory.GetDirectories(dir);
            foreach (string _dir in dirs)
            {
                DeleteDirectory(_dir);
            }
        }
        private static void DeleteDirectory(string dir)
        {
            if (!Directory.Exists(dir))
            {
                return;
            }
            string[] files = Directory.GetFiles(dir);
            foreach (string file in files)
            {
                string destFile = Path.Combine(dir, Path.GetFileName(file));
                File.Delete(destFile);
            }
            string[] dirs = Directory.GetDirectories(dir);
            foreach (string _dir in dirs)
            {
                DeleteDirectory(_dir);
            }
            Directory.Delete(dir);
        }
        
        private FieldInfo curFieldInfo = null;
        private PropertyInfo curPropertyInfo = null;
        private EventInfo curEventInfo = null;
        private MethodInfo curMethodInfo = null;
        
        private Stack<StringBuilder> sequenceBuilderStack=new Stack<StringBuilder>();

        private string curEncloseClassOldFullName = "";
        private string curEncloseClassFullName = "";
        private string curEncloseClassName = "";
        private Stack<ClassInfo> classStack=new Stack<ClassInfo>();
        private SortedList<string, string> dataDecls = new SortedList<string, string>();
        private SortedList<string, string> dataTLSs = new SortedList<string, string>();
        private int nonameDataIndex = 0;
        
        private SortedList<string,ClassInfo> classes=new SortedList<string, ClassInfo>();
        private SortedList<string,int> valueTypes=new SortedList<string, int>();
        private SortedList<string, string> typeRenames = new SortedList<string, string>();
        private int globalRenameIndex = 0;
        
        private List<string> usings=new List<string>();
        private List<Assembly> assemblys = new List<Assembly>();

        private bool isBytes = false;
    }
    public class MethodOverrideInfo
    {
        public List<string> CallConvs
        {
            get { return callConvs; }
        }
        public TypeInfo RetType
        {
            get { return retType; }
            set { retType = value; }
        }
        public TypeInfo TypeSpec
        {
            get { return typeSpec; }
            set { typeSpec = value; }
        }
        public string Name
        {
            get { return name; }
            set { name = value; }
        }
        public string GenArity
        {
            get { return genArity; }
            set { genArity = value; }
        }
        public List<Param> Args
        {
            get { return args; }
        }

        public override string ToString()
        {
            StringBuilder sb = new StringBuilder();
            string prestr = "";
            if (callConvs.Count > 0)
            {
                sb.Append(prestr);
                sb.Append(string.Join(" ", callConvs.ToArray()));
                prestr = " ";
            }
            if (!retType.IsUndefined)
            {
                sb.Append(prestr);
                sb.Append(retType.TypeDefClause);
                prestr = " ";
            }
            if (!typeSpec.IsUndefined)
            {
                sb.Append(prestr);
                sb.Append(typeSpec.TypeDefClause);
                prestr = "::";
            }
            if (name.Length > 0)
            {
                sb.Append(prestr);
                sb.Append(name);
                prestr = "";
            }
            if (genArity.Length > 0)
            {
                sb.Append(prestr);
                sb.Append("<["+genArity+"]>");
                prestr = "";
            }
            if (args.Count > 0)
            {
                sb.Append("(");
                prestr = "";
                foreach (Param p in args)
                {
                    sb.Append(prestr);
                    sb.Append(p.CalcClause());
                    prestr = ",";
                }
                sb.Append(")");
            }
            return sb.ToString();
        }

        private List<string> callConvs = new List<string>();
        private TypeInfo retType = UndefinedTypeInfo.Ref;
        private TypeInfo typeSpec = UndefinedTypeInfo.Ref;
        private string name = "";
        private string genArity = "";
        private List<Param> args = new List<Param>();
    }
    public class ClassOverrideInfo
    {
        public MethodOverrideInfo OverridedMethod
        {
            get { return overridedMethod; }
        }
        public MethodOverrideInfo OverrideMethod
        {
            get { return overrideMethod; }
        }

        public override string ToString()
        {
            return overridedMethod.ToString() + " with " + overrideMethod.ToString();
        }

        private MethodOverrideInfo overridedMethod = new MethodOverrideInfo();
        private MethodOverrideInfo overrideMethod = new MethodOverrideInfo();
    }
    public class CustomAttribute
    {
        public object OwnerType
        {
            get { return ownerType; }
            set { ownerType = value; }
        }
        public MethodOperand CustomType
        {
            get { return customType; }
            set { customType = value; }
        }
        public string AttrValue
        {
            get { return attrValue; }
            set 
            { 
                attrValue = value;
                string[] byteStrs = attrValue.Split(',');
                bytes = new byte[byteStrs.Length];
                for (int i = 0; i < bytes.Length; i++)
                {
                    bytes[i] = byte.Parse(byteStrs[i], NumberStyles.AllowHexSpecifier);
                }
            }
        }

        public override string ToString()
        {
            string s = "";
            if(ownerType!=null)
                s += "/*{" + ownerType.ToString() + "}*/";
            string valStr = "";
            try
            {
                valStr = DecodeValue();
            }
            catch (Exception eee)
            {
                valStr = eee.Message;
            }
            s += "[" + TranslateName(customType.TypeSpec.TypeClause) + "(" + valStr + ")]";
            return s;
        }

        private string TranslateName(string name)
        {
            if (name.EndsWith("Attribute"))
                return name.Substring(0, name.Length - 9);
            return name;
        }

        private string DecodeValue()
        {
            int index=0;
            ushort prolog=BitConverter.ToUInt16(bytes, index);
            index+=2;
            List<string> args = new List<string>();
            foreach (Param p in CustomType.Args)
            {
                args.Add(DecodeFixedArg(p.Type, ref index, true));
            }
            ushort numNamed = BitConverter.ToUInt16(bytes, index);
            index += 2;
            for (int i = 0; i < numNamed; i++)
            {
                args.Add(DecodeNamedArg(ref index));
            }
            return string.Join(",", args.ToArray());
        }
        private string DecodeFixedArg(TypeInfo ti, ref int index)
        {
            return DecodeFixedArg(ti, ref index, false);
        }
        private string DecodeFixedArg(TypeInfo ti,ref int index,bool isParams)
        {
            if (ti.IsArray)
            {
                uint numElem = BitConverter.ToUInt32(bytes, index);
                index += 4;
                if (numElem == 0xFFFFFFFF)
                {
                    return "nullptr";
                }
                else
                {
                    List<string> args = new List<string>();
                    for (int i = 0; i < numElem; i++)
                    {
                        string arg = DecodeFixedArg(ti.UnderlyingType, ref index);
                        args.Add(arg);
                    }
                    if (!isParams)
                        return "gcnew " + ti.TypeClause + "{" + string.Join(",", args.ToArray()) + "}";
                    else
                        return string.Join(",", args.ToArray());
                }
            }
            else if (ti == BasicTypeInfo.StringInfo)
            {
                string str = DecodeUTF8String(ref index);
                if (str == null)
                    return "nullptr";
                else
                    return "\"" + str + "\"";
            }
            else if (ti == BasicTypeInfo.System_Type)
            {
                string str = DecodeUTF8String(ref index);
                int comma = str.IndexOf(',');
                if (comma > 0)
                    str = str.Substring(0, comma);
                return str.Replace(".", "::") + "::typeid";
            }
            else if (ti == BasicTypeInfo.ObjectInfo)
            {
                TypeInfo ti2=DecodeFieldOrPropertyType(ref index);
                return DecodeBasicType(ti2, ref index);
            }
            else
            {
                return DecodeBasicType(ti, ref index);
            }
        }
        private string DecodeNamedArg(ref int index)
        {
            byte forp = bytes[index];
            index++;
            TypeInfo ti = null;
            byte flag=bytes[index];
            if (flag == 0x51)
            {
                ti = BasicTypeInfo.ObjectInfo;
                index++;
            }
            else if (flag == 0x55)
            {
                index++;
                string enumType = DecodeUTF8String(ref index);
                ti = BasicTypeInfo.Create(enumType.Replace(".", "::"));
            }
            else if (flag == 0x1d)
            {
                index++;
                ti = DecodeFieldOrPropertyType(ref index);
                ti = ArrayTypeInfo.Create(ti, 1);
            }
            else
            {
                ti = DecodeFieldOrPropertyType(ref index);
            }
            string name = DecodeUTF8String(ref index);
            string val = DecodeFixedArg(ti, ref index);
            return name + "=" + val;
        }
        private TypeInfo DecodeFieldOrPropertyType(ref int index)
        {
            byte t = bytes[index];
            index++;
            switch (t)
            {
                case ELEMENT_TYPE_BOOLEAN:
                    return BasicTypeInfo.BooleanInfo;
                case ELEMENT_TYPE_CHAR:
                    return BasicTypeInfo.CharInfo;
                case ELEMENT_TYPE_I1:
                    return BasicTypeInfo.SByteInfo;
                case ELEMENT_TYPE_U1:
                    return BasicTypeInfo.ByteInfo;
                case ELEMENT_TYPE_I2:
                    return BasicTypeInfo.Int16Info;
                case ELEMENT_TYPE_U2:
                    return BasicTypeInfo.UInt16Info;
                case ELEMENT_TYPE_I4:
                    return BasicTypeInfo.Int32Info;
                case ELEMENT_TYPE_U4:
                    return BasicTypeInfo.UInt32Info;
                case ELEMENT_TYPE_I8:
                    return BasicTypeInfo.Int64Info;
                case ELEMENT_TYPE_U8:
                    return BasicTypeInfo.UInt64Info;
                case ELEMENT_TYPE_R4:
                    return BasicTypeInfo.SingleInfo;
                case ELEMENT_TYPE_R8:
                    return BasicTypeInfo.DoubleInfo;
                case ELEMENT_TYPE_STRING:
                    return BasicTypeInfo.StringInfo;
            }
            return UndefinedTypeInfo.Ref;
        }
        private string DecodeBasicType(TypeInfo ti, ref int index)
        {
            if (ti == BasicTypeInfo.BooleanInfo)
            {
                byte b = bytes[index];
                index++;
                if (b == 0)
                    return "false";
                else
                    return "true";
            }
            else if (ti == BasicTypeInfo.CharInfo)
            {
                ushort v = BitConverter.ToUInt16(bytes, index);
                index += 2;
                return "(char)" + v;
            }
            else if (ti == BasicTypeInfo.SByteInfo)
            {
                sbyte v = (sbyte)bytes[index];
                index++;
                return v.ToString();
            }
            else if (ti == BasicTypeInfo.ByteInfo)
            {
                byte v = bytes[index];
                index++;
                return v.ToString();
            }
            else if (ti == BasicTypeInfo.Int16Info)
            {
                short v = BitConverter.ToInt16(bytes, index);
                index += 2;
                return v.ToString();
            }
            else if (ti == BasicTypeInfo.UInt16Info)
            {
                ushort v = BitConverter.ToUInt16(bytes, index);
                index += 2;
                return v.ToString();
            }
            else if (ti == BasicTypeInfo.Int32Info)
            {
                int v = BitConverter.ToInt32(bytes, index);
                index += 4;
                return v.ToString();
            }
            else if (ti == BasicTypeInfo.UInt32Info)
            {
                uint v = BitConverter.ToUInt32(bytes, index);
                index += 4;
                return v.ToString();
            }
            else if (ti == BasicTypeInfo.Int64Info)
            {
                long v = BitConverter.ToInt64(bytes, index);
                index += 8;
                return v.ToString();
            }
            else if (ti == BasicTypeInfo.UInt64Info)
            {
                ulong v = BitConverter.ToUInt64(bytes, index);
                index += 8;
                return v.ToString();
            }
            else if (ti == BasicTypeInfo.SingleInfo)
            {
                float v = BitConverter.ToSingle(bytes, index);
                index += 4;
                return v.ToString();
            }
            else if (ti == BasicTypeInfo.DoubleInfo)
            {
                double v = BitConverter.ToDouble(bytes, index);
                index += 8;
                return v.ToString();
            }
            else
            {
                int v = BitConverter.ToInt32(bytes, index);
                index += 4;
                return "("+ti.TypeClause+")"+v.ToString();
            }
        }
        private string DecodeUTF8String(ref int index)
        {
            int len = 0;
            byte b1 = bytes[index];
            if ((b1 & 0x80) == 0)
            {
                byte tlen = (byte)(b1 & 0x7F);
                len = (sbyte)tlen;
                index++;
                if (len == 0)
                    return "";
            }
            else if((b1 & 0xC0) == 0x80)
            {
                short tlen = (short)(BitConverter.ToInt16(bytes, index) & 0x3FFF);
                len = tlen;
                index += 2;
            }
            else if ((b1 & 0xE0) == 0xC0)
            {
                int tlen = BitConverter.ToInt32(bytes, index) & 0x1FFFFFFF;
                len = tlen;
                index += 2;
            }
            else
            {
                index++;
                return null;
            }
            string str = System.Text.Encoding.UTF8.GetString(bytes, index, len);
            index += len;
            return str;
        }

        private object ownerType = null;
        private MethodOperand customType = null;
        private string attrValue = "";
        private byte[] bytes = null;

        private const byte ELEMENT_TYPE_BOOLEAN = 0x02;
        private const byte ELEMENT_TYPE_CHAR = 0x03;
        private const byte ELEMENT_TYPE_I1 = 0x04;
        private const byte ELEMENT_TYPE_U1 = 0x05;
        private const byte ELEMENT_TYPE_I2 = 0x06;
        private const byte ELEMENT_TYPE_U2 = 0x07;
        private const byte ELEMENT_TYPE_I4 = 0x08;
        private const byte ELEMENT_TYPE_U4 = 0x09;
        private const byte ELEMENT_TYPE_I8 = 0x0a;
        private const byte ELEMENT_TYPE_U8 = 0x0b;
        private const byte ELEMENT_TYPE_R4 = 0x0c;
        private const byte ELEMENT_TYPE_R8 = 0x0d;
        private const byte ELEMENT_TYPE_STRING = 0x0e;
    }
    public class PermissionSetAttribute
    {
        public string SecurityAction
        {
            get { return securityAction; }
            set { securityAction = value; }
        }
        public string AttrValue
        {
            get { return attrValue; }
            set { attrValue = value; }
        }
        public override string ToString()
        {
            return SecurityAction + " = " + AttrValue;
        }

        private string securityAction = "";
        private string attrValue = "";
    }
    public class AssemblyRef
    {
        public static AssemblyRef Temp
        {
            get { return AssemblyRef.temp; }
        }
        public static void ResetTemp()
        {
            temp = new AssemblyRef();
        }

        public string Name
        {
            get { return name; }
            set { name = value; }
        }
        public string Ver
        {
            get { return ver; }
            set { ver = value; }
        }
        public string Culture
        {
            get { return culture; }
            set { culture = value; }
        }
        public string PublicKeyToken
        {
            get { return publicKeyToken; }
            set 
            {
                string s = value.Replace("0x","");
                s = s.Replace(",", "");
                s = s.ToLower();
                publicKeyToken = s; 
            }
        }

        public override string ToString()
        {
            return Name.Replace("::", ".") + ",Version=" + ver + ",Culture=" + culture + ",PublicKeyToken=" + publicKeyToken;
        }

        private string name = "";
        private string ver = "*.*.*.*";
        private string culture = "\"\"";
        private string publicKeyToken = "null";

        private static AssemblyRef temp = new AssemblyRef();
    }
    public class TypeParams
    {
        public static TypeParam TempParam
        {
            get { return tempParam; }
        }
        public static void Add()
        {
            tempArgs.Add(tempParam);
            tempParam = new TypeParam();
        }
        public static List<TypeParam> TempArgs
        {
            get { return tempArgs; }
        }
        public static void ResetTemp()
        {
            tempParam = new TypeParam();
            tempArgs.Clear();
        }

        public static string CalcCluase(List<TypeParam> args)
        {
            StringBuilder sb = new StringBuilder();
            string prestr = "";
            foreach (TypeParam tp in args)
            {
                sb.Append(prestr);
                sb.Append(tp.Id);
                prestr = ",";
            }
            return sb.ToString();
        }

        private static TypeParam tempParam = new TypeParam();
        private static List<TypeParam> tempArgs = new List<TypeParam>();
    }
    public class TypeParam
    {
        public string Id
        {
            get { return id; }
            set { id = value; }
        }
        public List<string> ConstraintAttrs
        {
            get { return constraintAttrs; }
        }
        public List<TypeInfo> ConstraintTypes
        {
            get { return constraintTypes; }
        }

        public string CalcConstraint()
        {
            string types = "";
            string prestr = "";
            foreach (TypeInfo ti in ConstraintTypes)
            {
                types += prestr + ti.TypeClause;
                prestr = ",";
            }
            types = "where " + Id + " : " + types;
            if (ConstraintAttrs.Count > 0)
                return types + "," + string.Join(",", ConstraintAttrs.ToArray());
            else
                return types;
        }

        private string id = "";
        private List<string> constraintAttrs = new List<string>();
        private List<TypeInfo> constraintTypes = new List<TypeInfo>();
    }
    public class Params
    {
        public List<Param> Args
        {
            get { return args; }
        }

        public void Add(Param p)
        {
            args.Add(p);
        }

        public static string CalcSig(List<Param> args)
        {
            StringBuilder sb=new StringBuilder();
            string prestr = "";
            foreach(Param p in args)
            {
                sb.Append(prestr);
                sb.Append(p.CalcSig());
                prestr = ",";
            }
            return sb.ToString();
        }        
        public static string CalcClause(List<Param> args)
        {
            return CalcClause(args, true);
        }
        public static string CalcClause(List<Param> args,bool incId)
        {
            StringBuilder sb = new StringBuilder();
            string prestr = "";
            foreach (Param p in args)
            {
                sb.Append(prestr);
                sb.Append(p.CalcClause(incId));
                prestr = ",";
            }
            return sb.ToString();
        }

        private List<Param> args=new List<Param>();
    }
    public class Param
    {
        public List<string> Attrs
        {
            get { return attrs; }
        }
        public TypeInfo Type
        {
            get { return type; }
            set { type = value;}
        }
        public NativeTypeInfo MarshalAs
        {
            get { return marshalAs; }
            set { marshalAs = value; }
        }
        public string Id
        {
            get { return id; }
            set { id = value; }
        }

        public string CalcSig()
        {
            string s = "";
            if (!type.IsUndefined)
                s += type.TypeClause + " ";
            return s.Trim();
        }
        public string CalcClause()
        {
            return CalcClause(true);
        }        
        public string CalcClause(bool incId)
        {
            string s = "";
            if (MarshalAs != NativeTypeInfo.Null || Attrs.Count>0)
            {
                string prestr = "";
                s += "[";
                if (Attrs.Count > 0)
                {
                    s += string.Join(",", Attrs.ToArray());
                    prestr = ",";
                }
                if (MarshalAs != NativeTypeInfo.Null)
                {
                    s += prestr + MarshalAs.ToString();
                }
                s += "]";
            }
            if (!type.IsUndefined)
            {
                s += Type.TypeDefClause + " ";
            }
            if (incId && id.Length > 0)
                s += id;
            return s.Trim();
        }

        private List<string> attrs = new List<string>();
        private TypeInfo type = UndefinedTypeInfo.Ref;
        private NativeTypeInfo marshalAs = NativeTypeInfo.Null;
        private string id = "";
    }
    public class NamespaceInfo
    {
        public string Name
        {
            get { return name; }
            set { name = value; }
        }
        public List<ClassInfo> Classes
        {
            get { return classes; }
        }
        public SortedList<string,MethodInfo> Methods
        {
            get { return methods; }
        }
        public SortedList<string, FieldInfo> Fields
        {
            get { return fields; }
        }
        public SortedList<string, NamespaceInfo> NestedNamespaces
        {
            get { return nestedNamespaces; }
        }

        public void Tune()
        {
            foreach (FieldInfo fi in fields.Values)
            {
                fi.Tune();
            }
            foreach (MethodInfo mi in methods.Values)
            {
                mi.Tune();
            }
            foreach (ClassInfo ci in classes)
            {
                ci.Tune();
            }
            foreach (NamespaceInfo ni in nestedNamespaces.Values)
            {
                ni.Tune();
            }
        }
        public void BuildClassDependence()
        {
            foreach (ClassInfo ci in classes)
            {
                ci.BuildClassDependence();
            }
            foreach (NamespaceInfo ni in nestedNamespaces.Values)
            {
                ni.BuildClassDependence();
            }
        }
        public void BuildEduceDependence()
        {
            foreach (FieldInfo fi in fields.Values)
            {
                fi.BuildEduceDependence();
            }
            foreach (MethodInfo mi in methods.Values)
            {
                mi.BuildEduceDependence();
            }
            foreach (ClassInfo ci in classes)
            {
                ci.BuildEduceDependence();
            }
            foreach (NamespaceInfo ni in nestedNamespaces.Values)
            {
                ni.BuildEduceDependence();
            }
        }
        public void Decompile()
        {
            foreach (MethodInfo mi in methods.Values)
            {
                mi.Decompile();
            }
            foreach (ClassInfo ci in classes)
            {
                ci.Decompile();
            }
            foreach (NamespaceInfo ni in nestedNamespaces.Values)
            {
                ni.Decompile();
            }
        }
        
        public static void TuneAll()
        {
            RootNamespace.Tune();
        }
        public static void BuildDependence()
        {
            RootNamespace.BuildClassDependence();
            RootNamespace.BuildEduceDependence();
        }
        public static void DecompileAll()
        {
            RootNamespace.Decompile();
        }

        public static DependenceGraph TopLevelDependence
        {
            get { return NamespaceInfo.topLevelDependence; }
        }
        public static void SetDependence(ClassInfo ci1, ClassInfo ci2, bool cyclicCheck)
        {
            if (ci1 == ci2)
                return;
            NamespaceInfo ni1, ni2;
            ClassInfo[] p1 = ParseClassInfo(ci1, out ni1);
            ClassInfo[] p2 = ParseClassInfo(ci2, out ni2);
            if (ni1 != ni2 || p1[0]!=p2[0])
            {
                //不同名空间或顶层类不同的依赖关系设置顶层依赖
                DependenceGraphNode n1 = NamespaceInfo.TopLevelDependence.NewNode(p1[0].FullName);
                DependenceGraphNode n2 = NamespaceInfo.TopLevelDependence.NewNode(p2[0].FullName);
                if (cyclicCheck && NamespaceInfo.TopLevelDependence.IsDependent(n2,n1))
                {
                    NamespaceInfo.TopLevelDependence.CyclicDependences.Add(new KeyValuePair<string, string>(n1.ID, n2.ID));
                    return;
                }
                n1.AddNext(n2);
            }
            else
            {
                int n = p1.Length;
                if (n > p2.Length)
                    n = p2.Length;
                for (int i = 1; i < n; i++)
                {
                    if (p1[i] != p2[i])
                    {
                        DependenceGraph graph = p1[i - 1].NestedDependence;
                        DependenceGraphNode n1 = graph.NewNode(p1[i].FullName);
                        DependenceGraphNode n2 = graph.NewNode(p2[i].FullName);
                        if (cyclicCheck && graph.IsDependent(n2, n1))
                        {
                            graph.CyclicDependences.Add(new KeyValuePair<string, string>(n1.ID, n2.ID));
                            return;
                        }
                        n1.AddNext(n2);
                        break;
                    }
                }
            }
        }
        public static ClassInfo[] ParseClassInfo(ClassInfo ci, out NamespaceInfo ni)
        {
            Stack<ClassInfo> cis = new Stack<ClassInfo>();
            ClassInfo p = ci;
            string cn = p.FullName;
            do
            {
                cis.Push(p);
                p = p.OuterClassInfo;
                if (p != null)
                {
                    cn = p.FullName;
                }
            } while (p != null) ;
            ni=DecideNamespace(cn);
            return cis.ToArray();
        }
        public static string ParseCyclicDependenceInfo(KeyValuePair<string, string> info)
        {
            ClassInfo ci1 = Context.Ref.FindClass(info.Key);
            ClassInfo ci2 = Context.Ref.FindClass(info.Value);
            if (ci1.OuterClassInfo == ci2.OuterClassInfo)
                return info.Key + "<->" + info.Value + ",normal xref,no conflict.";
            else
                return info.Key + "<->" + info.Value + ",should solve conflict by template!";
        }
        public static string RootNS
        {
            get { return rootNS; }
            set { rootNS = value; }
        }
        public static string DeclFileName
        {
            get { return NamespaceInfo.declFileName; }
            set { NamespaceInfo.declFileName = value; }
        }
        public static string DefFileName
        {
            get { return NamespaceInfo.defFileName; }
            set { NamespaceInfo.defFileName = value; }
        }
        public static NamespaceInfo RootNamespace
        {
            get { return rootNamespace; }
        }
        public static NamespaceInfo DecideNamespace(string fullName)
        {
            string[] names = fullName.Split(new string[] { "::" }, StringSplitOptions.RemoveEmptyEntries);
            int i = 0;
            if (names[0] == RootNS)
                i = 1;
            NamespaceInfo ni = RootNamespace;
            for (; i < names.Length - 1; i++)
            {
                string name = names[i];
                if (name.Length <= 0)
                    break;
                if (ni.NestedNamespaces.ContainsKey(name))
                {
                    ni = ni.NestedNamespaces[name];
                }
                else
                {
                    NamespaceInfo ni2 = new NamespaceInfo();
                    ni2.Name = name;
                    ni.NestedNamespaces[name] = ni2;
                    ni = ni2;
                }
            }
            return ni;
        }
        public static void Generate(string path, StreamWriter declWriter, StreamWriter defWriter)
        {
            RootNamespace.GenerateDecl(path, "", declWriter);
            GenerateDefInc(path, defWriter);
            RootNamespace.GenerateDef(path, "");
            RootNamespace.GenerateImpl(path, "");
        }
        private static void GenerateDefInc(string path, StreamWriter defWriter)
        {
            RootNamespace.GenerateEnumInc(path, defWriter);
            TopLevelDependence.Reset();
            for (; TopLevelDependence.CurNode != null; TopLevelDependence.Next())
            {
                DependenceGraphNode node = TopLevelDependence.CurNode;
                ClassInfo ci = Context.Ref.FindClass(node.ID);
                if (ci==null || ci.Type == "enum") continue;
                defWriter.WriteLine("#include \"" + node.ID.Replace("::", ".") + ".h\"");
            }
            defWriter.WriteLine("#include \"__Module__.h\"");

            if (TopLevelDependence.CyclicDependences.Count > 0)
            {
                defWriter.WriteLine("//----------------------------------------------------------------------------------------------");
                foreach (KeyValuePair<string,string> info in TopLevelDependence.CyclicDependences)
                {
                    defWriter.WriteLine("//\t" + ParseCyclicDependenceInfo(info));
                }
                defWriter.WriteLine("//----------------------------------------------------------------------------------------------");
            }
        }
        private void GenerateEnumInc(string path, StreamWriter defWriter)
        {
            foreach (ClassInfo ci in classes)
            {
                if (ci.Type != "enum") continue;
                defWriter.WriteLine("#include \"" + ci.FullName.Replace("::", ".") + ".h\"");
            }
            foreach (NamespaceInfo ni in nestedNamespaces.Values)
            {
                ni.GenerateEnumInc(path, defWriter);
            }
        }
        private void GenerateDecl(string path, string lastNS, StreamWriter declWriter)
        {
            if (name.Length <= 0)
            {
                List<ClassInfo> classList = new List<ClassInfo>();
                foreach (ClassInfo ci in classes)
                {
                    if (ci.Type == "enum" || ci.Type == "delegate") continue;
                    classList.Add(ci);
                }
                WriteDecl(declWriter, RootNS, classList);

                foreach (NamespaceInfo ni in nestedNamespaces.Values)
                {
                    ni.GenerateDecl(path, "", declWriter);
                }
            }
            else
            {
                string ns = name;
                if (lastNS.Length > 0)
                    ns = lastNS + "::" + ns;

                List<ClassInfo> classList = new List<ClassInfo>();
                foreach (ClassInfo ci in classes)
                {
                    if (ci.Type == "enum" || ci.Type == "delegate") continue;
                    classList.Add(ci);
                }
                WriteDecl(declWriter, ns, classList);

                foreach (NamespaceInfo ni in nestedNamespaces.Values)
                {
                    ni.GenerateDecl(path, ns, declWriter);
                }
            }
        }
        private void GenerateDef(string path, string lastNS)
        {
            if (name.Length <= 0)
            {
                StringBuilder defSb = new StringBuilder();

                defSb.AppendLine(UtilityCodeDef);
                foreach (FieldInfo fi in fields.Values)
                {
                    defSb.Append(fi.GenerateDef(0));
                }
                foreach (MethodInfo mi in methods.Values)
                {
                    defSb.Append(mi.GenerateDef(0));
                }

                WriteDef(path, "__Module__.h", defSb.ToString(), "");
                defSb.Length = 0;

                foreach (ClassInfo ci in classes)
                {
                    defSb.Append(ci.GenerateDef(1));
                    WriteDef(path, BuildFileName(RootNS, ci.ClassName, ".h"), defSb.ToString(), RootNS);
                    defSb.Length = 0;
                }

                foreach (NamespaceInfo ni in nestedNamespaces.Values)
                {
                    ni.GenerateDef(path, "");
                }
            }
            else
            {
                string ns = name;
                if (lastNS.Length > 0)
                    ns = lastNS + "::" + ns;

                List<ClassInfo> classList = new List<ClassInfo>();
                StringBuilder defSb = new StringBuilder();
                StringBuilder implSb = new StringBuilder();

                foreach (FieldInfo fi in fields.Values)
                {
                    defSb.Append(fi.GenerateDef(1));
                }
                foreach (MethodInfo mi in methods.Values)
                {
                    defSb.Append(mi.GenerateDef(1));
                }
                if (defSb.Length > 0)
                {
                    WriteDef(path, BuildFileName(ns, "", ".h"), defSb.ToString(), ns);
                    defSb.Length = 0;
                }

                foreach (ClassInfo ci in classes)
                {
                    defSb.Append(ci.GenerateDef(1));
                    WriteDef(path, BuildFileName(ns, ci.ClassName, ".h"), defSb.ToString(), ns);
                    defSb.Length = 0;
                }

                foreach (NamespaceInfo ni in nestedNamespaces.Values)
                {
                    ni.GenerateDef(path, ns);
                }
            }
        }
        private void GenerateImpl(string path, string lastNS)
        {
            if (name.Length <= 0)
            {
                StringBuilder implSb = new StringBuilder();

                implSb.AppendLine(UtilityCodeImpl);
                foreach (MethodInfo mi in methods.Values)
                {
                    implSb.Append(mi.GenerateImpl());
                }

                WriteImpl(path, "__Module__.cpp", implSb.ToString());
                implSb.Length = 0;

                foreach (ClassInfo ci in classes)
                {
                    implSb.Append(ci.GenerateImpl());
                    WriteImpl(path, BuildFileName(RootNS, ci.ClassName, ".cpp"), implSb.ToString());
                    implSb.Length = 0;
                }

                foreach (NamespaceInfo ni in nestedNamespaces.Values)
                {
                    ni.GenerateImpl(path, "");
                }
            }
            else
            {
                string ns = name;
                if (lastNS.Length > 0)
                    ns = lastNS + "::" + ns;

                StringBuilder implSb = new StringBuilder();

                foreach (MethodInfo mi in methods.Values)
                {
                    implSb.Append(mi.GenerateImpl());
                }
                if (implSb.Length > 0)
                {
                    WriteImpl(path, BuildFileName(ns, "", ".cpp"), implSb.ToString());
                    implSb.Length = 0;
                }

                foreach (ClassInfo ci in classes)
                {
                    implSb.Append(ci.GenerateImpl());
                    WriteImpl(path, BuildFileName(ns, ci.ClassName, ".cpp"), implSb.ToString());
                    implSb.Length = 0;
                }

                foreach (NamespaceInfo ni in nestedNamespaces.Values)
                {
                    ni.GenerateImpl(path, ns);
                }
            }
        }

        private string BuildFileName(string ns, string cn, string ext)
        {
            string fn = "";
            if (ns.Length > 0)
                fn = ns.Replace("::", ".");
            if (cn.Length > 0)
                fn += "." + cn;
            return fn + ext;
        }
        private void WriteDecl(StreamWriter declWriter, string ns, List<ClassInfo> classList)
        {
            if (ns.Length <= 0)
            {
                return;
            }
            string[] nss = ns.Split(new string[] { "::" }, StringSplitOptions.RemoveEmptyEntries);
            foreach(string s in nss)
            {
                declWriter.WriteLine("namespace " + s);
                declWriter.WriteLine("{");
            }
            foreach (ClassInfo ci in classList)
            {
                declWriter.WriteLine(ci.Type + " class " + ci.ClassName + ";");
            }
            foreach (string s in nss)
            {
                declWriter.WriteLine("}");
            }
        }
        private void WriteDef(string path, string filename, string content, string ns)
        {
            string file = Path.Combine(path, filename);
            if (File.Exists(file))
            {
                File.Delete(file);
            }
            StreamWriter sw = new StreamWriter(file, false, Encoding.Default);
            sw.WriteLine("#pragma once");
            sw.WriteLine();
            string[] nss = ns.Split(new string[] { "::" }, StringSplitOptions.RemoveEmptyEntries);
            foreach(string s in nss)
            {
                sw.WriteLine("namespace " + s);
                sw.WriteLine("{");
            }
            sw.Write(content);
            foreach (string s in nss)
            {
                sw.WriteLine("}");
            }
            sw.Close();
        }
        private void WriteImpl(string path, string filename, string content)
        {
            string file = Path.Combine(path, filename);
            if (File.Exists(file))
            {
                File.Delete(file);
            }
            StreamWriter sw = new StreamWriter(file, false, Encoding.Default);
            sw.WriteLine("#include \"" + DeclFileName + "\"");
            sw.WriteLine();
            sw.Write(content);
            sw.Close();
        }
        private static string UtilityCodeDef
        {
            get
            {
                return @"
void BytesToBytes(array<System::Byte>^ bs, array<System::Byte>^ ds);
void BytesToChars(array<System::Byte>^ bs, array<System::Char>^ ds);
void BytesToInt32s(array<System::Byte>^ bs,array<System::Int32>^ ds);
void BytesToInt64s(array<System::Byte>^ bs,array<System::Int64>^ ds);
void BytesToSingles(array<System::Byte>^ bs,array<System::Single>^ ds);
void BytesToDoubles(array<System::Byte>^ bs,array<System::Double>^ ds);";
            }
        }
        private static string UtilityCodeImpl
        {
            get
            {
                return @"                    
void BytesToBytes(array<System::Byte>^ bs, array<System::Byte>^ ds)
{
    Array::Copy(bs, ds, ds->Length);
}
void BytesToChars(array<System::Byte>^ bs, array<System::Char>^ ds)
{
    for (int i = 0; i < ds->Length; i++)
    {
        ds[i] = BitConverter::ToChar(bs, i * 2);
    }
}
void BytesToInt32s(array<System::Byte>^ bs,array<System::Int32>^ ds)
{
    for (int i = 0; i < ds->Length; i++)
    {
        ds[i] = BitConverter::ToInt32(bs, i * 4);
    }
}
void BytesToInt64s(array<System::Byte>^ bs,array<System::Int64>^ ds)
{
    for (int i = 0; i < ds->Length; i++)
    {
        ds[i] = BitConverter::ToInt64(bs, i * 8);
    }
}
void BytesToSingles(array<System::Byte>^ bs,array<System::Single>^ ds)
{
    for (int i = 0; i < ds->Length; i++)
    {
        ds[i] = BitConverter::ToSingle(bs, i * 4);
    }
}
void BytesToDoubles(array<System::Byte>^ bs,array<System::Double>^ ds)
{
    for (int i = 0; i < ds->Length; i++)
    {
        ds[i] = BitConverter::ToDouble(bs, i * 8);
    }
}";
            }
        }
        
        private string name = "";
        private List<ClassInfo> classes = new List<ClassInfo>();
        private SortedList<string, FieldInfo> fields = new SortedList<string, FieldInfo>();
        private SortedList<string, MethodInfo> methods = new SortedList<string, MethodInfo>();
        private SortedList<string, NamespaceInfo> nestedNamespaces = new SortedList<string, NamespaceInfo>();

        private static DependenceGraph topLevelDependence = new DependenceGraph();

        private static NamespaceInfo rootNamespace = new NamespaceInfo();
        private static string rootNS = "Root";
        private static string declFileName = "global_xref.h";
        private static string defFileName = "full_def.h";
    }
    public class ClassInfo
    {
        public string Type
        {
            get { return type; }
            set { type = value; }
        }
        public string LastParamTypeDirective
        {
            get { return lastParamTypeDirective; }
            set { lastParamTypeDirective = value; }
        }
        public List<CustomAttribute> CustomAttrs
        {
            get { return customAttrs; }
            set { customAttrs = value; }
        }
        public List<PermissionSetAttribute> PermissionSetAttrs
        {
            get { return permissionSetAttrs; }
        }
        public void AddPermission(object p)
        {
            if(p is PermissionSetAttribute)
                permissionSetAttrs.Add(p as PermissionSetAttribute);
        }
        public List<string> Accesses
        {
            get { return accesses; }
        }
        public List<string> PreAttrs
        {
            get { return preAttrs; }
        }
        public List<string> PostAttrs
        {
            get { return postAttrs; }
        }
        public string FullName
        {
            get { return fullName; }
            set { fullName = value; }
        }
        public string ClassName
        {
            get { return className; }
            set { className = value; }
        }
        public string OldFullName
        {
            get { return oldFullName; }
            set { oldFullName = value; }
        }
        public ClassInfo OuterClassInfo
        {
            get { return outerClassInfo; }
            set { outerClassInfo = value; }
        }
        public List<TypeParam> GenericParams
        {
            get { return genericParams; }
        }
        public TypeInfo BaseClass
        {
            get { return baseClass; }
            set { baseClass = value; }
        }
        public List<TypeInfo> ImplIntfs
        {
            get { return implIntfs; }
        }
        public string LayoutKind
        {
            get { return layoutKind; }
            set { layoutKind = value; }
        }
        public List<string> LayoutAttrs
        {
            get { return layoutAttrs; }
        }
        public List<ClassOverrideInfo> OverrideAttrs
        {
            get { return overrideAttrs; }
        }
        public bool IsSpecial
        {
            get { return isSpecial; }
            set { isSpecial = value; }
        }
        public bool IsRTSpecial
        {
            get { return isRTSpecial; }
            set { isRTSpecial = value; }
        }
        public bool IsImport
        {
            get { return isImport; }
            set { isImport = value; }
        }
        public bool IsSerializable
        {
            get { return isSerializable; }
            set { isSerializable = value; }
        }
        public bool IsNested
        {
          get { return isNested; }
          set { isNested = value; }
        }
        public SortedList<string, FieldInfo> Fields
        {
            get { return fields; }
        }
        public SortedList<string, PropertyInfo> Properties
        {
            get { return properties; }
        }
        public SortedList<string, EventInfo> Events
        {
            get { return events; }
        }
        public SortedList<string, MethodInfo> Methods
        {
            get { return methods; }
        }
        public List<ClassInfo> NestedClasses
        {
            get { return nestedClasses; }
        }
        public DependenceGraph NestedDependence
        {
            get { return nestedDependence; }
        }

        public List<FieldInfo> FieldList
        {
            get { return fieldList; }
        }
        public List<MethodInfo> MethodList
        {
            get { return methodList; }
        }

        public void Tune()
        {
            //确保类记录在依赖图中
            if (OuterClassInfo == null)
            {
                NamespaceInfo.TopLevelDependence.NewNode(FullName);
            }
            else
            {
                OuterClassInfo.NestedDependence.NewNode(FullName);
            }
            //递归调用嵌入元素
            foreach (FieldInfo fi in fields.Values)
            {
                fi.Tune();
            }
            foreach (MethodInfo mi in methods.Values)
            {
                mi.Tune();
            }
            foreach (PropertyInfo pi in properties.Values)
            {
                pi.Tune();
            }
            foreach (EventInfo ei in events.Values)
            {
                ei.Tune();
            }
            foreach (ClassInfo ci in nestedClasses)
            {
                ci.Tune();
            }
        }
        public void BuildClassDependence()
        {
            //构造当前类倒致的继承依赖关系
            ClassInfo ci0 = Context.Ref.FindClass(BaseClass);
            if (ci0 != null)
            {
                NamespaceInfo.SetDependence(this, ci0, false);
            }
            foreach (TypeInfo ti in ImplIntfs)
            {
                ci0 = Context.Ref.FindClass(ti);
                if (ci0 != null)
                    NamespaceInfo.SetDependence(this, ci0, false);
            }
            //调子类构造继承依赖关系
            foreach (ClassInfo ci in nestedClasses)
            {
                ci.BuildClassDependence();
            }
        }
        public void BuildEduceDependence()
        {
            //递归调用嵌入元素
            foreach (FieldInfo fi in fields.Values)
            {
                fi.BuildEduceDependence();
            }
            foreach (MethodInfo mi in methods.Values)
            {
                mi.BuildEduceDependence();
            }
            foreach (PropertyInfo pi in properties.Values)
            {
                pi.BuildEduceDependence();
            }
            foreach (EventInfo ei in events.Values)
            {
                ei.BuildEduceDependence();
            }
            foreach (ClassInfo ci in nestedClasses)
            {
                ci.BuildEduceDependence();
            }
        }
        public void Decompile()
        {
            foreach (MethodInfo mi in methods.Values)
            {
                mi.Decompile();
            }
            foreach (ClassInfo ci in nestedClasses)
            {
                ci.Decompile();
            }
        }

        public string TranslateName(string _name)
        {
            return _name;
        }
        
        public string GenerateDef(int indent)
        {
            string istr = IndentString.GetIndent(indent);
            string astr = istr;
            if (isNested && indent > 0)
                astr = IndentString.GetIndent(indent - 1);
            string accessStr = string.Join(" ", Accesses.ToArray());
            if (isNested)
                accessStr += ":";
            else
                accessStr += " ";
            if (Type == "enum")
            {
                StringBuilder sb = new StringBuilder();
                int doti = FullName.LastIndexOf("::");
                string n = FullName;
                if (doti >= 0)
                    n = FullName.Substring(doti + 2);
                sb.AppendLine(astr + accessStr);
                string header = istr + (Type + " class " + n).Trim();
                sb.AppendLine(header);
                sb.AppendLine(istr + "{");
                string prestr = "";
                //字段在枚举定义中按IL文件中的顺序出现
                foreach (FieldInfo fi in fieldList)
                {
                    if (fi.Name == "value__") continue;
                    sb.Append(istr + "\t" + prestr + fi.Name);
                    if (fi.Init.Length > 0)
                        sb.Append("=" + fi.Init);
                    else if (fi.At.Length > 0)
                        sb.Append("=" + fi.At);
                    sb.AppendLine("");
                    prestr = ",";
                }
                
                sb.AppendLine(istr + "};");
                return sb.ToString();
            }
            else if (Type == "delegate")
            {
                StringBuilder sb = new StringBuilder();
                foreach (MethodInfo mi in methods.Values)
                {
                    if (mi.Name == "Invoke")
                    {
                        string arg = "";
                        if (mi.Args!=null && mi.Args.Count > 0)
                        {
                            arg = Params.CalcClause(mi.Args);
                        }

                        sb.AppendLine(astr + accessStr);
                        if (GenericParams != null && GenericParams.Count > 0)
                        {
                            sb.AppendLine(istr + "generic<" + TypeParams.CalcCluase(GenericParams) + ">");
                            foreach (TypeParam tp in GenericParams)
                            {
                                sb.AppendLine(istr + "\t" + tp.CalcConstraint());
                            }
                        }
                        sb.AppendLine(istr + "delegate " + mi.RetType.TypeDefClause + " " + ClassName + "(" + arg + ")" + ";");
                        break;
                    }
                }
                return sb.ToString();
            }
            else
            {
                string preAttrStr = "";
                if (PreAttrs.Count > 0)
                    preAttrStr = string.Join(" ", PreAttrs.ToArray()) + " ";
                string postAttrStr = "";
                if (PostAttrs.Count > 0)
                {
                    postAttrStr = string.Join(" ", PostAttrs.ToArray()) + " ";
                }

                string post = "";
                string prestr = " : ";
                if (!BaseClass.IsUndefined)
                {
                    post += prestr + BaseClass.TypeClause;
                    prestr = " , ";
                }
                if (ImplIntfs.Count > 0)
                {
                    foreach (TypeInfo ti in implIntfs)
                    {
                        post += prestr + ti.TypeClause;
                        prestr = " , ";
                    }
                }
                int doti = FullName.LastIndexOf("::");
                string n = FullName;
                if (doti >= 0)
                    n = FullName.Substring(doti + 2);
                StringBuilder sb = new StringBuilder();
                if (isNested && accessStr.Length>0)
                {
                    sb.AppendLine(astr + accessStr);
                    accessStr = "";
                }
                foreach (PermissionSetAttribute psa in PermissionSetAttrs)
                {
                    sb.AppendLine(istr + "//" + psa.ToString());
                }
                foreach (CustomAttribute ca in customAttrs)
                {
                    sb.AppendLine(istr + ca.ToString());
                }
                if (isImport)
                {
                    sb.AppendLine(istr + "[ComImport]");
                }
                if (isSerializable)
                {
                    sb.AppendLine(istr + "[Serializable]");
                }
                if (Type != "interface" && layoutKind.Length > 0)
                {
                    string layoutStr = layoutKind;
                    if (layoutAttrs.Count > 0)
                    {
                        layoutStr += " , " + string.Join(",", layoutAttrs.ToArray());
                    }
                    else if (layoutKind == "LayoutKind::Sequential")
                    {
                        layoutStr = "";
                    }
                    if (layoutStr.Length > 0)
                        sb.AppendLine(istr + "[StructLayout(" + layoutStr + ")]");
                }
                string header = istr + (preAttrStr + Type + " class " + n + " " + postAttrStr + post).Trim();
                if (accessStr.Length > 0)
                {
                    sb.AppendLine(istr + accessStr);
                }
                if (GenericParams != null && GenericParams.Count > 0)
                {
                    sb.AppendLine(istr + "generic<" + TypeParams.CalcCluase(GenericParams) + ">");
                    foreach(TypeParam tp in GenericParams)
                    {
                        sb.AppendLine(istr+"\t"+tp.CalcConstraint());
                    }
                }
                sb.AppendLine(header);
                sb.AppendLine(istr + "{");
                foreach (ClassOverrideInfo info in overrideAttrs)
                {
                    sb.AppendLine(istr + "\t//" + info);
                }
                foreach (ClassInfo ci in nestedClasses)
                {
                    if (ci.Type == "enum" || ci.Type == "delegate") continue;
                    sb.AppendLine(istr + "\t" + ci.Type + " class " + ci.ClassName + ";");
                }
                foreach (ClassInfo ci in nestedClasses)
                {
                    if (ci.Type != "enum") continue;
                    sb.Append(ci.GenerateDef(indent + 1));
                }
                NestedDependence.Reset();
                for (; NestedDependence.CurNode != null; NestedDependence.Next())
                {
                    DependenceGraphNode node = NestedDependence.CurNode;
                    ClassInfo ci=Context.Ref.FindClass(node.ID);
                    if (ci != null)
                    {
                        if(ci.Type!="enum")
                            sb.Append(ci.GenerateDef(indent + 1));
                    }
                    else
                    {
                        //error
                    }
                }
                //字段在类定义中出现的顺序不是按名称顺序而是按IL文件中的顺序
                foreach (FieldInfo fi in fieldList)
                {
                    sb.Append(fi.GenerateDef(indent + 1));
                }
                //方法在类定义中出现的顺序不是按名称顺序而是按IL文件中的顺序
                foreach (MethodInfo mi in methodList)
                {
                    if (mi.IsSpecialMember) continue;
                    sb.Append(mi.GenerateDef(indent + 1));
                }
                foreach (PropertyInfo pi in properties.Values)
                {
                    sb.Append(pi.GenerateDef(indent + 1));
                }
                foreach (EventInfo ei in events.Values)
                {
                    sb.Append(ei.GenerateDef(indent + 1));
                }
                if (NestedDependence.CyclicDependences.Count > 0)
                {
                    sb.AppendLine(istr + "\t//----------------------------------------------------------------------------------------------");
                    foreach(KeyValuePair<string,string> info in NestedDependence.CyclicDependences)
                    {
                        sb.AppendLine(istr + "\t//\t" + NamespaceInfo.ParseCyclicDependenceInfo(info));
                    }
                    sb.AppendLine(istr + "\t//----------------------------------------------------------------------------------------------");
                }
                sb.AppendLine(istr + "};");
                return sb.ToString();
            }
        }
        public string GenerateImpl()
        {
            if (Type == "enum" || Type == "delegate")
                return "";
            StringBuilder sb = new StringBuilder();
            foreach (MethodInfo mi in methods.Values)
            {
                if (mi.IsSpecialMember) continue;
                sb.Append(mi.GenerateImpl());
            }
            foreach (PropertyInfo pi in properties.Values)
            {
                sb.Append(pi.GenerateImpl());
            }
            foreach (EventInfo ei in events.Values)
            {
                sb.Append(ei.GenerateImpl());
            }
            foreach (ClassInfo ci in nestedClasses)
            {
                sb.Append(ci.GenerateImpl());
            }
            return sb.ToString();
        }

        private string type = "ref";
        private string lastParamTypeDirective = "";
        private List<CustomAttribute> customAttrs = new List<CustomAttribute>();
        private List<PermissionSetAttribute> permissionSetAttrs = new List<PermissionSetAttribute>();
        private List<string> accesses = new List<string>();
        private List<string> preAttrs = new List<string>();
        private List<string> postAttrs = new List<string>();
        private string fullName = "";
        private string className = "";
        private string oldFullName = "";
        private List<TypeParam> genericParams = new List<TypeParam>();
        private TypeInfo baseClass = UndefinedTypeInfo.Ref;
        private List<TypeInfo> implIntfs = new List<TypeInfo>();
        private string layoutKind = "LayoutKind::Sequential";
        private List<string> layoutAttrs = new List<string>();
        private List<ClassOverrideInfo> overrideAttrs = new List<ClassOverrideInfo>();
        private bool isSpecial = false;
        private bool isRTSpecial = false;
        private bool isImport = false;
        private bool isSerializable = false;
        private bool isNested = false;

        private SortedList<string, PropertyInfo> properties = new SortedList<string, PropertyInfo>();
        private SortedList<string, EventInfo> events = new SortedList<string, EventInfo>();
        private SortedList<string, FieldInfo> fields = new SortedList<string, FieldInfo>();
        private SortedList<string, MethodInfo> methods = new SortedList<string, MethodInfo>();

        private List<FieldInfo> fieldList = new List<FieldInfo>();//按IL文件中方法出现的顺序保存的方法，用于保持类/结构成员布局
        private List<MethodInfo> methodList = new List<MethodInfo>();//按IL文件中方法出现的顺序保存的方法，用于保持虚函数顺序
        
        private List<ClassInfo> nestedClasses=new List<ClassInfo>();
        private DependenceGraph nestedDependence = new DependenceGraph();

        private ClassInfo outerClassInfo = null;
    }
    public class FieldInfo
    {
        public TypeInfo Type
        {
            get { return type; }
            set { type = value; }
        }
        public NativeTypeInfo MarshalAs
        {
            get { return marshalAs; }
            set { marshalAs = value; }
        }
        public string Name
        {
            get { return name; }
            set { name = value; }
        }
        public ClassInfo ClassInfo
        {
            get { return classInfo; }
            set { classInfo = value; }
        }
        public List<string> Accesses
        {
            get { return accesses; }
        }
        public List<string> PreAttrs
        {
            get { return preAttrs; }
        }
        public List<string> PostAttrs
        {
            get { return postAttrs; }
        }
        public bool IsSpecial
        {
            get { return isSpecial; }
            set { isSpecial = value; }
        }
        public bool IsRTSpecial
        {
            get { return isRTSpecial; }
            set { isRTSpecial = value; }
        }
        public bool IsNotSerialized
        {
            get { return isNotSerialized; }
            set { isNotSerialized = value; }
        }
        public string At
        {
            get { return at; }
            set { at = value; }
        }
        public string Init
        {
            get { return init; }
            set { init = value; }
        }

        public void Tune()
        {
        }
        public void BuildEduceDependence()
        {
            if (ClassInfo == null)
                return;
            ClassInfo ci = Context.Ref.FindClass(Type);
            if (ci != null)
                NamespaceInfo.SetDependence(ClassInfo, ci, true);
        }

        public static string TranslateName(string _name)
        {
            return _name;
        }
        
        public string GenerateDef(int indent)
        {
            string istr = IndentString.GetIndent(indent);
            StringBuilder sb = new StringBuilder();
            if (ClassInfo != null)
            {
                string astr=istr;
                if (indent > 0)
                    astr = IndentString.GetIndent(indent - 1);
                sb.AppendLine(astr + string.Join(" ", Accesses.ToArray()) + ":");
            }
            if (MarshalAs != NativeTypeInfo.Null)
            {
                sb.AppendLine(istr + "[" + MarshalAs.ToString() + "]");
            }
            if (isNotSerialized)
                sb.AppendLine(istr + "[NotSerialized]");
            string s = istr + (string.Join(" ", PreAttrs.ToArray()) + " " + Type.TypeDefClause + " " + Name + " " + string.Join(" ", PostAttrs.ToArray())).Trim();
            if (Init.Length > 0)
                s += "=" + Init + ";";
            else
                s += ";";
            sb.AppendLine(s);
            return sb.ToString();
        }

        private TypeInfo type = UndefinedTypeInfo.Ref;
        private NativeTypeInfo marshalAs = NativeTypeInfo.Null;
        private string name = "";
        private List<string> accesses = new List<string>();
        private List<string> preAttrs = new List<string>();
        private List<string> postAttrs = new List<string>();
        private bool isSpecial = false;
        private bool isRTSpecial = false;
        private bool isNotSerialized = false;
        private string at = "";
        private string init = "";

        private ClassInfo classInfo = null;
    }
    public class PropertyInfo
    {
        public List<string> CallConvs
        {
            get { return callConvs; }
        }
        public TypeInfo Type
        {
            get { return type; }
            set { type = value; }
        }
        public string Name
        {
            get { return name; }
            set { name = value; }
        }
        public List<CustomAttribute> CustomAttrs
        {
            get { return customAttrs; }
            set { customAttrs = value; }
        }
        public List<string> Accesses
        {
            get { return accesses; }
        }
        public List<string> PreAttrs
        {
            get { return preAttrs; }
        }
        public List<Param> Args
        {
            get { return args; }
        }
        public bool IsSpecial
        {
            get { return isSpecial; }
            set { isSpecial = value; }
        }
        public bool IsRTSpecial
        {
            get { return isRTSpecial; }
            set { isRTSpecial = value; }
        }        
        public string Init
        {
            get { return init; }
            set { init = value; }
        }
        public MethodInfo GetMethod
        {
            get { return getMethod; }
            set
            {
                getMethod = value;
                if (getMethod != null)
                    getMethod.IsSpecial = true;
            }
        }
        public MethodInfo SetMethod
        {
            get { return setMethod; }
            set
            {
                setMethod = value;
                if (setMethod != null)
                    setMethod.IsSpecial = true;
            }
        }
        public bool IsInterfaceMember
        {
            get { return isInterfaceMember; }
            set { isInterfaceMember = value; }
        }

        public string Sig
        {
            get { return sig; }
        }
        public void CalcSig()
        {
            string argStr = Params.CalcSig(args);
            sig = name + "_" + argStr;
        }

        public void Tune()
        {
        }
        public void BuildEduceDependence()
        {
        }

        public static string TranslateName(string _name)
        {
            string tname = _name;
            int i = _name.LastIndexOf("::");
            if (i > 0)
                tname = _name.Substring(i + 2);
            if (tname == "Item")
                return "default";
            return tname;
        }
                
        public string GenerateDef(int indent)
        {
            string preAttrStr = "";            
            if (!IsInterfaceMember && PreAttrs.Count>0)
                preAttrStr = string.Join(" ", PreAttrs.ToArray()) + " ";
            string argStr = "";
            if (args !=null && args.Count>0)
            {
                argStr = " [" + Params.CalcClause(args, false) + "]";
            }
            string n = TranslateName(name);
            if (getMethod != null && getMethod.Name == "get_Item" || setMethod != null && setMethod.Name == "set_Item")
                n = "default";
            string istr = IndentString.GetIndent(indent);
            StringBuilder sb=new StringBuilder();
            if (Accesses.Count > 0)
            {
                string astr = istr;
                if (indent > 0)
                    astr = IndentString.GetIndent(indent - 1);
                sb.AppendLine(astr + string.Join(" ", Accesses.ToArray()) + ":");
            }
            foreach (CustomAttribute ca in customAttrs)
            {
                sb.AppendLine(istr + ca.ToString());
            }
            sb.AppendLine(istr + ("property " + preAttrStr + Type.TypeDefClause + " " + n + argStr).Trim());
            sb.AppendLine(istr + "{");            
            if (GetMethod != null)
            {
                sb.Append(GetMethod.GenerateDef(indent + 1, "get"));
            }
            if (SetMethod != null)
            {
                sb.Append(SetMethod.GenerateDef(indent + 1, "set"));
            }
            sb.AppendLine(istr + "}");
            return sb.ToString();
        }
        public string GenerateImpl()
        {
            StringBuilder sb = new StringBuilder();
            if (!IsInterfaceMember)
            {
                string n = TranslateName(name);
                if (getMethod != null && getMethod.Name == "get_Item" || setMethod != null && setMethod.Name == "set_Item")
                    n = "default";
                if (GetMethod != null)
                {
                    sb.Append(GetMethod.GenerateImpl(n + "::get"));
                }
                if (SetMethod != null)
                {
                    sb.Append(SetMethod.GenerateImpl(n + "::set"));
                }
            }
            return sb.ToString();
        }

        private List<string> callConvs = new List<string>();
        private TypeInfo type = UndefinedTypeInfo.Ref;
        private string name = "";
        private List<CustomAttribute> customAttrs = new List<CustomAttribute>();
        private List<string> accesses = new List<string>();
        private List<string> preAttrs = new List<string>();
        private List<Param> args = new List<Param>();
        private bool isSpecial = false;
        private bool isRTSpecial = false;
        private string init = "";
        private MethodInfo getMethod = null;
        private MethodInfo setMethod = null;
        private bool isInterfaceMember = false;

        private string sig = "";
    }
    public class EventInfo
    {
        public TypeInfo Type
        {
            get { return type; }
            set { type = value; }
        }
        public string Name
        {
            get { return name; }
            set { name = value; }
        }
        public List<CustomAttribute> CustomAttrs
        {
            get { return customAttrs; }
            set { customAttrs = value; }
        }
        public List<string> Accesses
        {
            get { return accesses; }
        }
        public List<string> PreAttrs
        {
            get { return preAttrs; }
        }
        public bool IsSpecial
        {
            get { return isSpecial; }
            set { isSpecial = value; }
        }
        public bool IsRTSpecial
        {
            get { return isRTSpecial; }
            set { isRTSpecial = value; }
        }        
        public MethodInfo AddMethod
        {
            get { return addMethod; }
            set
            {
                addMethod = value;
                if (addMethod != null)
                    addMethod.IsSpecial = true;
            }
        }
        public MethodInfo RemoveMethod
        {
            get { return removeMethod; }
            set
            {
                removeMethod = value;
                if (removeMethod != null)
                    removeMethod.IsSpecial = true;
            }
        }
        public MethodInfo RaiseMethod
        {
            get { return raiseMethod; }
            set { raiseMethod = value; }
        }
        public bool IsInterfaceMember
        {
            get { return isInterfaceMember; }
            set { isInterfaceMember = value; }
        }
        
        public void Tune()
        {
        }
        public void BuildEduceDependence()
        {
        }

        public static string TranslateName(string _name)
        {
            return _name;
        }
        
        public string GenerateDef(int indent)
        {
            string preAttrStr = "";
            if (!IsInterfaceMember && PreAttrs.Count > 0)
                preAttrStr = string.Join(" ", PreAttrs.ToArray()) + " ";
            string istr = IndentString.GetIndent(indent);
            StringBuilder sb = new StringBuilder();
            if (Accesses.Count > 0)
            {
                string astr = istr;
                if (indent > 0)
                    astr = IndentString.GetIndent(indent - 1);
                sb.AppendLine(astr + string.Join(" ", Accesses.ToArray()) + ":");
            }
            foreach (CustomAttribute ca in customAttrs)
            {
                sb.AppendLine(istr + ca.ToString());
            }
            string s = (preAttrStr + "event " + type + "^ " + name).Trim();
            if (IsInterfaceMember) 
            {
                sb.AppendLine(istr + s + ";");
            }
            else if(AddMethod != null || RemoveMethod != null)
            {
                sb.AppendLine(istr + s);
                sb.AppendLine(istr + "{");
                if (AddMethod != null)
                {
                    sb.Append(AddMethod.GenerateDef(indent + 1, "add"));
                }
                if (RemoveMethod != null)
                {
                    sb.Append(RemoveMethod.GenerateDef(indent + 1, "remove"));
                }
                sb.AppendLine(istr + "}");
            }
            return sb.ToString();
        }
        public string GenerateImpl()
        {
            StringBuilder sb = new StringBuilder();
            if (!IsInterfaceMember)
            {
                if (AddMethod != null)
                {
                    sb.Append(AddMethod.GenerateImpl(name + "::add"));
                }
                if (RemoveMethod != null)
                {
                    sb.Append(RemoveMethod.GenerateImpl(name + "::remove"));
                }
            }
            return sb.ToString();
        }

        private TypeInfo type = UndefinedTypeInfo.Ref;
        private string name = "";
        private List<CustomAttribute> customAttrs = new List<CustomAttribute>();
        private List<string> accesses = new List<string>();
        private List<string> preAttrs = new List<string>();
        private bool isSpecial = false;
        private bool isRTSpecial = false;
        private MethodInfo addMethod = null;
        private MethodInfo removeMethod = null;
        private MethodInfo raiseMethod = null;
        private bool isInterfaceMember = false;
    }
    public class MethodInfo
    {
        public const int cctorMethod = -2;
        public const int ctorMethod = -1;
        public const int NormalMethod = 0;
        public const int GetMethod = 1;
        public const int SetMethod = 2;
        public const int AddMethod = 3;
        public const int RemoveMethod = 4;
        public const int RaiseMethod = 5;
        
        public List<string> CallConvs
        {
            get { return callConvs; }
        }
        public List<string> RetAttrs
        {
            get { return retAttrs; }
        }
        public TypeInfo RetType
        {
            get { return retType; }
            set { retType = value; }
        }
        public NativeTypeInfo MarshalAs
        {
            get { return marshalAs; }
            set { marshalAs = value; }
        }
        public string Name
        {
            get { return name; }
            set { name = value; }
        }
        public string LastParamTypeDirective
        {
            get { return lastParamTypeDirective; }
            set { lastParamTypeDirective = value; }
        }
        public string LastParamDirective
        {
            get { return lastParamDirective; }
            set { lastParamDirective = value; }
        }
        public void SetParamValue(string nameOrIx, string value)
        {
            if (value.Length > 0)
                paramInits[nameOrIx] = value;
        }
        public List<CustomAttribute> CustomAttrs
        {
            get { return customAttrs; }
            set { customAttrs = value; }
        }
        public List<PermissionSetAttribute> PermissionSetAttrs
        {
            get { return permissionSetAttrs; }
        }
        public void AddPermission(object p)
        {
            if (p is PermissionSetAttribute)
                permissionSetAttrs.Add(p as PermissionSetAttribute);
        }
        public List<string> Accesses
        {
            get { return accesses; }
        }
        public List<string> PreAttrs
        {
            get { return preAttrs; }
        }
        public List<string> PostAttrs
        {
            get { return postAttrs; }
        }
        public List<string> ImplOptions
        {
            get { return implOptions; }
        }
        public string ImplCodeType
        {
            get { return implCodeType; }
            set { implCodeType = value; }
        }
        public List<TypeParam> GenericParams
        {
            get { return genericParams; }
        }
        public List<Param> Args
        {
            get { return args; }
        }
        public bool IsSpecial
        {
            get { return isSpecial; }
            set { isSpecial = value; }
        }
        public bool IsRTSpecial
        {
            get { return isRTSpecial; }
            set { isRTSpecial = value; }
        }
        public bool IsPreserveSig
        {
            get { return isPreserveSig; }
            set { isPreserveSig = value; }
        }
        public MethodBody Body
        {
            get { return body; }
        }
        public int MethodKind
        {
            get { return methodKind; }
            set { methodKind = value; }
        }
        public bool IsInterfaceMember
        {
            get { return isInterfaceMember; }
            set { isInterfaceMember = value; }
        }
        public bool IsSpecialMember
        {
            get 
            {
                return MethodKind == GetMethod || MethodKind == SetMethod || MethodKind == AddMethod || MethodKind == RemoveMethod; 
            }
        }
        public string SpecialMemberName
        {
            get { return specialMemberName; }
            set { specialMemberName = value; }
        }
        public bool IsEntryPoint
        {
            get { return isEntryPoint; }
            set { isEntryPoint = value; }
        }
        public List<MethodOverrideInfo> OverrideAttrs
        {
            get { return overrideAttrs; }
        }
        public string PinvokeDll
        {
            get { return pinvokeDll; }
            set { pinvokeDll = value; }
        }
        public List<string> PinvokeAttrs
        {
            get { return pinvokeAttrs; }
            set { pinvokeAttrs = value; }
        }
        public List<DAGNode> InitializationList
        {
            get { return initializationList; }
        }
        public bool IsNativeOrRuntime
        {
            get
            {
                return ImplCodeType == "MethodCodeType=MethodCodeType::Native" || ImplCodeType == "MethodCodeType=MethodCodeType::Runtime";
            }
        }
        public bool IsAbstract
        {
            get
            {
                return postAttrs.Contains("abstract");
            }
        }
        public bool IsSealed
        {
            get
            {
                return postAttrs.Contains("sealed");
            }
        }
        public bool IsOverride
        {
            get
            {
                return postAttrs.Contains("override");
            }
        }
        public bool IsExplicitOverride
        {
            get
            {
                return overrideAttrs.Count > 0;
            }
        }
        public bool IsNew
        {
            get
            {
                return postAttrs.Contains("new");
            }
        }
        public bool IsVirtual
        {
            get
            {
                return PreAttrs.Contains("virtual");
            }
        }        
        public bool IsStatic
        {
            get 
            {
                return PreAttrs.Contains("static");
            }
        }
        public bool IsInstance
        {
            get
            {
                return CallConvs.Contains("instance");
            }
        }
        public bool IsDispose
        {
            get
            {
                return (Name == "Dispose" || ExistsOverride("Dispose")) && IsInstance && Args.Count == 0;
            }
        }
        public bool IsDisposeWithParam
        {
            get
            {
                return (Name == "Dispose" || ExistsOverride("Dispose")) && IsInstance && Args.Count == 1 && Args[0].Type.IsBoolean;
            }
        }
        public bool IsFinalize
        {
            get
            {
                return (Name == "Finalize" || ExistsOverride("Finalize")) && IsInstance && Args.Count == 0;
            }
        }
        
        public TypeInfo GetArgType(string argName)
        {
            foreach(Param p in args)
            {
                if(p.Id==argName)
                    return p.Type;
            }
            return UndefinedTypeInfo.Ref;
        }        
        public ClassInfo ClassInfo
        {
            get { return classInfo; }
            set { classInfo = value; }
        }
        public string Sig
        {
            get { return sig; }
        }
        public void CalcSig()
        {
            string[] ss = new string[GenericParams.Count];
            for (int i = 0; i < ss.Length; i++)
            {
                ss[i] = GenericParams[i].Id;
            }
            string tyStr = string.Join(",", ss);
            string argStr = Params.CalcSig(args);
            sig = name + "_" + tyStr + "_" + argStr;
        }
        public string CalcSig(string _name)
        {
            string[] ss = new string[GenericParams.Count];
            for (int i = 0; i < ss.Length; i++)
            {
                ss[i] = GenericParams[i].Id;
            }
            string tyStr = string.Join(",", ss);
            string argStr = Params.CalcSig(args);
            return _name + "_" + tyStr + "_" + argStr;
        }                
        public string CalcProperty(out PropertyInfo pi)
        {
            pi = null;
            if (MethodKind==GetMethod)
            {
                string pname = SpecialMemberName;
                TypeInfo ptype = retType;

                pi = new PropertyInfo();
                pi.Type = ptype;
                pi.Name = pname;
                pi.Args.AddRange(args);
                pi.Accesses.AddRange(Accesses);
                pi.PreAttrs.AddRange(PreAttrs);
                pi.IsInterfaceMember = isInterfaceMember;
                pi.CalcSig();

                return pi.Sig;
            }
            else if (MethodKind == SetMethod)
            {
                string pname = SpecialMemberName;
                TypeInfo ptype = args[args.Count - 1].Type;

                pi = new PropertyInfo();
                pi.Type = ptype;
                pi.Name = pname;
                for (int i = 0; i < args.Count - 1; i++)
                {
                    pi.Args.Add(args[i]);
                }
                pi.Accesses.AddRange(Accesses);
                pi.PreAttrs.AddRange(PreAttrs);
                pi.IsInterfaceMember = isInterfaceMember;
                pi.CalcSig();

                return pi.Sig;
            }
            else
                return "";
        }
        public string CalcEvent(out EventInfo ei)
        {
            ei = null;
            if (MethodKind == AddMethod || MethodKind == RemoveMethod)
            {
                string ename = SpecialMemberName;
                ei = new EventInfo();
                ei.Type = args[0].Type;
                ei.Name = ename;
                ei.Accesses.AddRange(Accesses);
                ei.PreAttrs.AddRange(PreAttrs);
                ei.IsInterfaceMember = isInterfaceMember;
                return ename;
            }
            else
                return "";
        }

        public void Tune()
        {
            if (!IsAbstract && !IsOverride)
            {
                if (Context.Ref.IsOverride(this))
                    PostAttrs.Add("override");
            }
        }
        public void BuildEduceDependence()
        {
            if (ClassInfo == null)
                return;
            ClassInfo ci = Context.Ref.FindClass(RetType);
            if (ci != null)
            {
                NamespaceInfo.SetDependence(ClassInfo, ci, true);
            }
            foreach (Param p in Args)
            {
                ci = Context.Ref.FindClass(p.Type);
                if (ci != null)
                    NamespaceInfo.SetDependence(ClassInfo, ci, true);
            }
        }
        public void Decompile()
        {
            body.Decompile();
        }

        public bool ExistsOverride(string s)
        {
            foreach (MethodOverrideInfo info in overrideAttrs)
            {
                if (info.Name == s)
                    return true;
            }
            return false;
        }

        public static string TranslateName(string _name)
        {
            string tname = _name;
            int i = _name.LastIndexOf("::");
            if (i > 0)
                tname = _name.Substring(i + 2);
            string oname = tname;
            if (tname.StartsWith("get_"))
            {
                oname = PropertyInfo.TranslateName(tname.Substring(4)) + "::get";
            }
            else if (tname.StartsWith("set_"))
            {
                oname = PropertyInfo.TranslateName(tname.Substring(4)) + "::set";
            }
            else if (tname.StartsWith("add_"))
            {
                oname = EventInfo.TranslateName(tname.Substring(4)) + "::add";
            }
            else if (tname.StartsWith("remove_"))
            {
                oname = EventInfo.TranslateName(tname.Substring(7)) + "::remove";
            }
            return oname;
        }

        public string GenerateDef(int indent)
        {
            return GenerateDef(indent, "", false);
        }
        public string GenerateDef(int indent, string specialName)
        {
            return GenerateDef(indent, specialName, false);
        }
        public string GenerateDef(int indent,string specialName,bool incImpl)
        {
            if (IsDisposeWithParam)
                return "";
            string preAttrStr = "";
            if (PreAttrs.Count > 0)
            {
                preAttrStr = string.Join(" ", PreAttrs.ToArray()) + " ";
            }
            if (ClassInfo == null)
            {
                preAttrStr = preAttrStr.Replace("static ", "");
            }
            string postAttrStr = "";
            if (PostAttrs.Count > 0)
            {
                postAttrStr = string.Join(" ", PostAttrs.ToArray()) + " ";
            }
            string arg = "";
            if (Args!=null && Args.Count > 0)
            {
                arg = Params.CalcClause(Args);
            }
            string istr = IndentString.GetIndent(indent);
            string n = TranslateName(name);
            string r = RetType.TypeDefClause + " ";
            if (specialName.Length > 0)
            {
                n = specialName;
            }
            else if (MethodKind==ctorMethod || MethodKind==cctorMethod)
            {
                n = ClassInfo.ClassName;
                r = "";
            }
            else if (IsDispose)
            {
                preAttrStr = ""; 
                postAttrStr = "";
                n = "~" + ClassInfo.ClassName;
                r = "";
                if (ClassInfo.Type == "value")
                    return "";
            }
            else if (IsFinalize)
            {
                preAttrStr = "";
                postAttrStr = "";
                n = "!" + ClassInfo.ClassName;
                r = "";
            }
            else if (isEntryPoint)
            {
                n = "Main";
            }
            string overrideStr = "";
            if (OverrideAttrs.Count > 0 && !IsDispose && !IsFinalize)
            {
                overrideStr = "";
                string prestr = "";
                foreach(MethodOverrideInfo info in OverrideAttrs)
                {
                    //非特性/事件重载或接口成员重载使用明确重载说明语法
                    if (!IsSpecialMember || info.TypeSpec.IsInterface)
                    {
                        string oname = TranslateName(info.Name);
                        overrideStr += prestr + info.TypeSpec.TypeClause + "::" + oname;
                        prestr = " , ";
                    }
                }
                if (overrideStr.Length > 0)
                {
                    overrideStr = " = " + overrideStr;
                }
            }
            string s = istr + (preAttrStr + r + n + "(" + arg + ") " + postAttrStr + overrideStr).Trim();
            StringBuilder sb = new StringBuilder();
            if(ClassInfo!=null && !IsSpecialMember && Accesses.Count>0)
            {
                string astr = istr;
                if (indent > 0)
                    astr = IndentString.GetIndent(indent - 1);
                sb.AppendLine(astr + string.Join(" ", Accesses.ToArray()) + ":");
            }
            foreach (PermissionSetAttribute psa in PermissionSetAttrs)
            {
                sb.AppendLine(istr + "//" + psa.ToString());
            }
            foreach (CustomAttribute ca in customAttrs)
            {
                sb.AppendLine(istr + ca.ToString());
            }
            if (PinvokeDll.Length > 0)
            {
                string pstr = PinvokeDll;
                if (PinvokeAttrs.Count > 0)
                {
                    pstr += "," + string.Join(",", PinvokeAttrs.ToArray());
                }
                sb.AppendLine(istr + "[DllImport(" + pstr + ")]");
            }
            if (IsPreserveSig)
            {
                sb.AppendLine(istr + "[PreserveSig]");
            }
            if (MarshalAs != NativeTypeInfo.Null || RetAttrs.Count>0)
            {
                string prestr = "";
                sb.Append(istr + "[returnvalue:");
                if (RetAttrs.Count > 0)
                {
                    sb.Append(string.Join(",", RetAttrs.ToArray()));
                    prestr = ",";
                }
                if (MarshalAs != NativeTypeInfo.Null)
                {
                    sb.Append(prestr);
                    sb.Append(MarshalAs.ToString());
                }
                sb.AppendLine("]");
            }
            if (ImplOptions.Count > 0 || ImplCodeType.Length>0)
            {
                string prestr = "";
                sb.Append(istr + "[MethodImpl(");
                if (ImplOptions.Count > 0)
                {
                    sb.Append(string.Join("|", ImplOptions.ToArray()));
                    prestr = ",";
                }
                if (ImplCodeType.Length > 0)
                {
                    sb.Append(prestr);
                    sb.Append(ImplCodeType);
                }
                sb.AppendLine(")]");
            }
            if (GenericParams != null && GenericParams.Count > 0)
            {
                sb.AppendLine(istr + "generic<" + TypeParams.CalcCluase(GenericParams) + ">");
                foreach (TypeParam tp in GenericParams)
                {
                    sb.AppendLine(istr + "\t" + tp.CalcConstraint());
                }
            }
            sb.Append(s);
            if (!incImpl || IsInterfaceMember || PinvokeDll.Length > 0)
                sb.AppendLine(";");
            else
                sb.AppendLine();
            foreach (MethodOverrideInfo info in overrideAttrs)
            {
                sb.AppendLine(istr + "//" + info + " by " + Name);
            }
            if (IsEntryPoint)
                sb.AppendLine(istr + "//EntryPoint");
            if (incImpl && !(IsInterfaceMember || PinvokeDll.Length > 0))
            {
                sb.AppendLine(istr + "{");
                sb.AppendLine(body.GenerateCode(indent + 1));
                sb.AppendLine(istr + "}");
            }
            return sb.ToString();
        }

        public string GenerateImpl()
        {
            return GenerateImpl("");
        }
        public string GenerateImpl(string specialName)
        {
            if (IsInterfaceMember || PinvokeDll.Length > 0 || IsAbstract || IsNativeOrRuntime)
                return "";
            if (IsDisposeWithParam)
                return "";
            string arg = "";
            if (Args != null && Args.Count > 0)
            {
                arg = Params.CalcClause(Args);
            }
            string modifier = "";
            string t = "";
            if (classInfo != null)
            {
                t = classInfo.FullName + "::";
                modifier = "inline ";
            }
            string n = TranslateName(name);
            string r = RetType.TypeDefClause+" ";
            if (specialName.Length > 0)
            {
                n = specialName;
            }
            else if (name == ".ctor")
            {
                n = ClassInfo.ClassName;
                r = "";
            }
            else if (name == ".cctor")
            {
                n = ClassInfo.ClassName;
                r = "";
                modifier += "static ";
            }
            else if (IsDispose)
            {
                n = "~" + ClassInfo.ClassName;
                r = "";
                if (ClassInfo.Type == "value")
                    return "";
            }
            else if (IsFinalize)
            {
                n = "!" + ClassInfo.ClassName;
                r = "";
            }
            else if (isEntryPoint)
            {
                n = "Main";
            }
            string s = modifier + r + t + n + "(" + arg + ")";
            StringBuilder sb = new StringBuilder();
            foreach (CustomAttribute ca in customAttrs)
            {
                sb.AppendLine("//" + ca.ToString());
            }
            if (GenericParams != null && GenericParams.Count > 0)
            {
                sb.AppendLine("generic<" + TypeParams.CalcCluase(GenericParams) + ">");
                foreach (TypeParam tp in GenericParams)
                {
                    sb.AppendLine("\t" + tp.CalcConstraint());
                }
            }
            sb.Append(s);
            if (InitializationList.Count > 0)
            {
                string prestr = ":";
                foreach (DAGNode node in InitializationList)
                {
                    List<string> exps = new List<string>();
                    string exp=node.Generate(exps);
                    sb.Append(prestr + exp);
                    prestr = ",";
                }
            }
            sb.AppendLine();
            foreach (MethodOverrideInfo info in overrideAttrs)
            {
                sb.AppendLine("//" + info + " by " + Name);
            }
            if (IsEntryPoint)
                sb.AppendLine("//EntryPoint");
            sb.AppendLine("{");
            sb.AppendLine(body.GenerateCode(1));
            sb.AppendLine("}");
            return sb.ToString();
        }

        public MethodInfo()
        {
            body.OwnerMethod = this;
        }

        private List<string> callConvs = new List<string>();
        private List<string> retAttrs = new List<string>();
        private TypeInfo retType = BasicTypeInfo.VoidInfo;
        private NativeTypeInfo marshalAs = NativeTypeInfo.Null;
        private string name = "";
        private string lastParamTypeDirective = "";
        private string lastParamDirective = "";
        private SortedList<string, string> paramInits = new SortedList<string, string>();
        private List<CustomAttribute> customAttrs = new List<CustomAttribute>();
        private List<PermissionSetAttribute> permissionSetAttrs = new List<PermissionSetAttribute>();
        private List<string> accesses = new List<string>();
        private List<string> preAttrs = new List<string>();
        private List<string> postAttrs = new List<string>();
        private List<string> implOptions = new List<string>();
        private string implCodeType = "";
        private List<TypeParam> genericParams = new List<TypeParam>();
        private List<Param> args = new List<Param>();
        private bool isSpecial = false;
        private bool isRTSpecial = false;
        private bool isPreserveSig = false;
        private MethodBody body = new MethodBody();
        private bool isInterfaceMember = false;
        private int methodKind = NormalMethod;
        private bool isEntryPoint = false;

        private string specialMemberName = "";
        private List<MethodOverrideInfo> overrideAttrs = new List<MethodOverrideInfo>();
        private string pinvokeDll = "";
        private List<string> pinvokeAttrs = new List<string>();

        private List<DAGNode> initializationList = new List<DAGNode>();
        private ClassInfo classInfo = null;

        private string sig = "";
    }
    internal static class IndentString
    {
        public static string GetIndent(int indent)
        {
            if (indent > 0 && indent < 512)
                return indentString.Substring(0, indent);
            else
                return "";
        }
        public static string GetSpace(int n)
        {
            if (n > 0 && n < 256)
                return spaceString.Substring(0, n);
            else
                return "";
        }

        private static string indentString = "\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t";
        private static string spaceString = "                                                                                                                                                                                                                                                                ";
    }

    public static class ConstUtility
    {
        public static long ParseLong(string s)
        {
            if (s.Length > 2 && s[0] == '0' && s[1] == 'x')
            {
                try
                {
                    long v = long.Parse(s.Substring(2), NumberStyles.AllowHexSpecifier);
                    return v;
                }
                catch (Exception)
                {
                    return -1;
                }
            }
            else
            {
                try
                {
                    long v = long.Parse(s, NumberStyles.AllowLeadingSign);
                    return v;
                }
                catch (Exception)
                {
                    return -1;
                }
            }
        }
        public static double ParseDouble(string s)
        {
            try
            {
                double d =
                    double.Parse(s,
                                 NumberStyles.AllowExponent | NumberStyles.AllowDecimalPoint |
                                 NumberStyles.AllowLeadingSign);
                return d;
            }
            catch (Exception)
            {
                return -1;
            }
        }
        public static string ConstToString(TypeInfo ti, long intVal, double floatVal)
        {
            if (ti.IsRef && intVal == 0)
            {
                return "nullptr";
            }
            else if (ti.IsBoolean)
            {
                if (intVal == 0)
                    return "false";
                else
                    return "true";
            }
            else if (ti == BasicTypeInfo.SByteInfo)
            {
                return ((sbyte)intVal).ToString();
            }
            else if (ti == BasicTypeInfo.Int16Info)
            {
                return ((short)intVal).ToString();
            }
            else if (ti == BasicTypeInfo.Int32Info)
            {
                return ((int)intVal).ToString();
            }
            else if (ti == BasicTypeInfo.Int64Info)
            {
                return ((long)intVal).ToString();
            }
            else if (ti == BasicTypeInfo.ByteInfo)
            {
                return ((byte)intVal).ToString();
            }
            else if (ti == BasicTypeInfo.UInt16Info)
            {
                return ((ushort)intVal).ToString();
            }
            else if (ti == BasicTypeInfo.UInt32Info)
            {
                return ((uint)intVal).ToString();
            }
            else if (ti == BasicTypeInfo.UInt64Info)
            {
                return ((ulong)intVal).ToString();
            }
            else if (ti == BasicTypeInfo.CharInfo)
            {
                return "(" + BasicTypeInfo.CharInfo.TypeDefClause + ")" + ((ushort)intVal).ToString();
            }
            else if (ti == BasicTypeInfo.SingleInfo)
            {
                return ((float)floatVal).ToString();
            }
            else if (ti == BasicTypeInfo.DoubleInfo)
            {
                return ((double)floatVal).ToString();
            }
            else if (ti == BasicTypeInfo.DecimalInfo)
            {
                return ((decimal)floatVal).ToString();
            }
            else
            {
                return ((int)intVal).ToString();
            }
        }
    }
}