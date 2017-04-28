using System;
using System.Collections.Generic;
using System.Text;
using System.Reflection.Emit;
using System.Globalization;

namespace IL2CPP
{
    public class SemanticStack : IEnumerable<SemanticValue>
    {
        public int Count
        {
            get
            {
                return vals.Count;
            }
        }
        public SemanticValue[] ToArray()
        {
            return vals.ToArray();
        }
        public void Push(SemanticValue val)
        {
            vals.Push(val);
        }
        public SemanticValue Pop()
        {
            if (vals.Count <= 0)
            {
                return SemanticValue.NullValue;
            }
            return vals.Pop();
        }
        public SemanticValue Peek()
        {
            if (vals.Count <= 0)
            {
                return SemanticValue.NullValue;
            }
            return vals.Peek();
        }
        public void Clear()
        {
            vals.Clear();
        }
        public SemanticStack Clone()
        {
            SemanticStack ss = new SemanticStack();
            SemanticValue[] svs = vals.ToArray();
            for (int i = svs.Length - 1; i >= 0; i--)
            {
                ss.Push(svs[i].Clone());
            }
            return ss;
        }
        public bool Contains(SemanticValue sv)
        {
            return vals.Contains(sv);
        }
        public bool Contains(string varName)
        {
            foreach (SemanticValue val in vals)
            {
                if (val.Node.Contains(varName))
                    return true;
            }
            return false;
        }

        private Stack<SemanticValue> vals = new Stack<SemanticValue>();

        #region IEnumerable<SemanticValue> 成员

        public IEnumerator<SemanticValue> GetEnumerator()
        {
            return vals.GetEnumerator();
        }

        #endregion

        #region IEnumerable 成员

        System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
        {
            return vals.GetEnumerator();
        }

        #endregion
    }

    public class SemanticValue
    {
        public TypeInfo Type
        {
            get { return type; }
            set 
            {
                type = value;
            }
        }
        public bool IsConst
        {
            get { return isConst; }
            set 
            {
                isConst = value;
            }
        }
        public bool IsThis
        {
            get
            {
                if (isConst) return false;
                if (Type.IsEnum || Type.IsArray || Type.IsReference || Type.IsPointer || Type.IsUndefined) return false;
                DAGNode n=DAGNode.GetOriginalNode(Node);
                if (n is LeafNode && (n as LeafNode).Data=="this")
                {
                    return true;
                }
                return false;
            }
        }
        public long IntegerVal
        {
            get 
            {
                return integerVal;
            }
            set
            {
                integerVal = value;
                floatVal = (double)value;
                ConstToNode();
            }
        }
        public double FloatVal
        {
            get
            {
                return floatVal;
            }
            set
            {
                floatVal = value;
                integerVal = (long)value;
                ConstToNode();
            }
        }
        public DAGNode Node
        {
            get { return node; }
            set { node = value; }
        }

        public string ConstToString(TypeInfo ti)
        {
            return ConstUtility.ConstToString(ti, IntegerVal, FloatVal);
        }
        public SemanticValue Clone()
        {
            SemanticValue sv = new SemanticValue();
            sv.type = type;
            sv.isConst = isConst;
            sv.node = node;
            sv.integerVal = integerVal;
            sv.floatVal = floatVal;
            return sv;
        }
        private void ConstToNode()
        {
            if (!IsConst)
                return;
            node = new LeafNode();
            node.Data = ConstToString(type);
        }

        private TypeInfo type = BasicTypeInfo.ObjectInfo;
        private bool isConst = false;
        private DAGNode node = NullNode.Ref;
        private long integerVal = 0;
        private double floatVal = 0.0;
        
        public static SemanticValue NullValue
        {
            get { return SemanticValue.nullValue; }
        }
        static SemanticValue()
        {
            nullValue.Node = DAGNode.CreateLeaf("null_stack");
        }

        private static SemanticValue nullValue = new SemanticValue();
    }

    public class IlIns
    {
        public static long LabelToValue(string label)
        {
            if (label == null || label.Length <= 0)
                return -1;
            else
            {
                string s = label;
                int st = s.LastIndexOf('_');
                if (st >= 0)
                    s = s.Substring(st + 1);
                int ed = s.LastIndexOf(':');
                if (ed >= 0)
                    s = s.Substring(0, ed);
                long v = long.Parse(s, NumberStyles.AllowHexSpecifier);
                v <<= 8;
                return v;
            }
        }
        public long LabelValue
        {
            get
            {
                return labelValue;
            }
            set
            {
                labelValue = value;
            }
        }

        public string Label
        {
            get { return label; }
            set
            {
                label = value;
                labelValue = LabelToValue(label);
            }
        }
        public string Opcode
        {
            get { return opcode; }
            set { opcode = value; }
        }
        public IlOperand Operand
        {
            get { return operand; }
            set { operand = value; }
        }
        public string Value
        {
            get { return operand.Value; }
            set { operand.Value = value; }
        }

        public List<DAGNode> Csharps
        {
            get { return csharps; }
            set { csharps = value; }
        }

        public string GenerateCode()
        {
            StringBuilder sb = new StringBuilder();
            //if(csharps.Count<=0)
            //    return "";
            if (label.Length > 0)
            {
                sb.Append(label);
                if (sb.Length < 20)
                    sb.Append(IndentString.GetSpace(20 - sb.Length));
                foreach(DAGNode node in csharps)
                {
                    List<string> exps = new List<string>();
                    string s = node.Generate(exps);
                    if (node.IsComment)
                        sb.Append("/*");
                    sb.Append(string.Join("", exps.ToArray()));
                    if (node.IsStatement && node.Identifier.Length <= 0)
                        sb.Append(s + node.StatementSemicolon);
                    if (node.IsComment)
                        sb.Append("*/");
                }
                if (sb.Length < 80)
                    sb.Append(IndentString.GetSpace(80 - sb.Length));
                sb.Append("//");
                sb.Append(opcode);
                if (operand.Value.Length > 0)
                {
                    sb.Append("\t\t\t\t" + operand.Value);
                }
            }
            else if (csharps.Count > 0)
            {
                if (opcode==".try")
                {
                    sb.Append("IL_"+LabelValue.ToString("X6")+":");
                    if (sb.Length < 20)
                        sb.Append(IndentString.GetSpace(20 - sb.Length));
                }
                else
                {
                    sb.Append(IndentString.GetSpace(20));
                }
                if (csharps.Count > 0)
                {
                    foreach (DAGNode node in csharps)
                    {
                        List<string> exps = new List<string>();
                        string s = node.Generate(exps);
                        sb.Append(string.Join("", exps.ToArray()));
                        if (node.IsStatement && node.Identifier.Length <= 0)
                            sb.Append(s + node.StatementSemicolon);
                    }
                }
            }
            else
            {
                sb.Append(IndentString.GetSpace(80) + "//" + opcode);
            }
            return sb.ToString();
        }

        private long labelValue = -1;
        private string label = "";
        private string opcode = "";
        private IlOperand operand = new SimpleOperand();
        private List<DAGNode> csharps = new List<DAGNode>();
    }

    public abstract class IlOperand
    {
        public abstract string Value
        {
            get;
            set;
        }
        public override string ToString()
        {
            return Value;
        }
    }
    public class SimpleOperand : IlOperand
    {
        public override string Value
        {
            get { return operand; }
            set { operand = value; }
        }

        private string operand = "";
    }
    public class SwitchOperand : IlOperand
    {
        public override string Value
        {
            get
            {
                return "(" + string.Join(",", labels.ToArray()) + ")";
            }
            set
            { }
        }
        public List<string> Labels
        {
            get { return labels; }
        }
        
        public static SwitchOperand Temp
        {
            get { return temp; }
        }
        public static void Set(IlIns il)
        {
            il.Operand = temp;
            temp = new SwitchOperand();
        }

        private List<string> labels = new List<string>();
        private static SwitchOperand temp = new SwitchOperand();
    }
    public class FieldOperand : IlOperand
    {
        public override string Value
        {
            get
            {
                return Type.TypeDefClause + " " + typeSpec + " " + Name;
            }
            set
            { }
        }

        public TypeInfo Type
        {
            get { return type; }
            set { type = value; }
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

        public FieldInfo FieldInfo
        {
            get
            {
                if (fieldInfo == null)
                {
                    fieldInfo = Context.Ref.FindOperandField(this);
                }
                return fieldInfo;
            }
        }

        private TypeInfo type = UndefinedTypeInfo.Ref;
        private TypeInfo typeSpec = UndefinedTypeInfo.Ref;
        private string name = "";

        private FieldInfo fieldInfo = null;
    }
    public class SigOperand : IlOperand
    {
        public override string Value
        {
            get
            {
                return RetType.TypeDefClause + "(" + Params.CalcClause(args) + ")";
            }
            set
            { }
        }
        public List<string> CallConvs
        {
            get { return callConvs; }
        }
        public TypeInfo RetType
        {
            get { return retType; }
            set { retType = value; }
        }
        public List<Param> Args
        {
            get { return args; }
        }

        public bool IsStatic
        {
            get
            {
                return !IsInstance;
            }
        }
        public bool IsInstance
        {
            get
            {
                return callConvs.Contains("instance");
            }
        }

        private List<string> callConvs = new List<string>();
        private TypeInfo retType = UndefinedTypeInfo.Ref;
        private List<Param> args = new List<Param>();
    }
    public class MethodOperand : IlOperand
    {
        public override string Value
        {
            get
            {
                string tyStr = " ";
                if (typeSpec != null)
                    tyStr = " " + typeSpec.TypeClause + "::";
                return RetType.TypeDefClause + tyStr + name + "(" + Params.CalcClause(args) + ")";
            }
            set
            { }
        }

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
        public int MethodKind
        {
            get
            {
                MethodInfo mi = this.MethodInfo;
                if (mi != null)
                    return mi.MethodKind;
                else if (Name == ".cctor")
                    return MethodInfo.cctorMethod;
                else if (Name == ".ctor")
                    return MethodInfo.ctorMethod;
                //此处需要调整为先使用reflection api判断是否特殊成员再处理名称
                if (!isSpecial && MaybeSpecial)
                {
                    isSpecial=Context.Ref.IsSpecialName(this);
                }
                if (isSpecial)
                {
                    if (Name.StartsWith("get_"))
                        return MethodInfo.GetMethod;
                    else if (Name.StartsWith("set_"))
                        return MethodInfo.SetMethod;
                    else if (Name.StartsWith("add_"))
                        return MethodInfo.AddMethod;
                    else if (Name.StartsWith("remove_"))
                        return MethodInfo.RemoveMethod;
                }
                return MethodInfo.NormalMethod;
            }
        }
        public bool IsSpecialMember
        {
            get
            {
                int kind = MethodKind;
                return kind == MethodInfo.GetMethod || kind == MethodInfo.SetMethod || kind == MethodInfo.AddMethod || kind == MethodInfo.RemoveMethod;
            }
        }
        public string SpecialMemberName
        {
            get
            {
                MethodInfo mi = this.MethodInfo;
                if (mi != null)
                    return mi.SpecialMemberName;
                //此处需要调整为先使用reflection api判断是否特殊成员再处理名称
                if (!isSpecial && MaybeSpecial)
                {
                    isSpecial=Context.Ref.IsSpecialName(this);
                }
                if (isSpecial)
                {
                    if (Name.StartsWith("get_"))
                        return Name.Substring(4);
                    else if (Name.StartsWith("set_"))
                        return Name.Substring(4);
                    else if (Name.StartsWith("add_"))
                        return Name.Substring(4);
                    else if (Name.StartsWith("remove_"))
                        return Name.Substring(7);
                }
                return "";
            }
        }
        public List<TypeInfo> TypeArgs
        {
            get { return typeArgs; }
        }
        public List<Param> Args
        {
            get { return args; }
        }
        public string Sig
        {
            get { return sig; }
        }

        public bool IsStatic
        {
            get
            {
                MethodInfo mi = this.MethodInfo;
                if (mi != null)
                    return mi.IsStatic;
                return !IsInstance;
            }
        }
        public bool IsInstance
        {
            get
            {
                MethodInfo mi = this.MethodInfo;
                if (mi != null)
                    return mi.IsInstance;
                return callConvs.Contains("instance");
            }
        }
        public bool IsDispose
        {
            get
            {
                MethodInfo mi = this.MethodInfo;
                if (mi != null)
                    return mi.IsDispose;
                return (Name == "Dispose") && IsInstance && Args.Count == 0;
            }
        }
        public bool IsDisposeWithParam
        {
            get
            {
                MethodInfo mi = this.MethodInfo;
                if (mi != null)
                    return mi.IsDisposeWithParam;
                return (Name == "Dispose") && IsInstance && Args.Count == 1 && Args[0].Type.IsBoolean;
            }
        }
        public bool IsFinalize
        {
            get
            {
                MethodInfo mi = this.MethodInfo;
                if (mi != null)
                    return mi.IsFinalize;
                return (Name == "Finalize") && IsInstance && Args.Count == 0;
            }
        }

        public void CalcSig()
        {
            string tyStr = "";
            if (typeArgs != null)
            {
                string[] ss = new string[typeArgs.Count];
                int i = 0;
                foreach (TypeInfo ti in typeArgs)
                {
                    if (ti == null)
                        ss[i] = "";
                    else
                        ss[i] = ti.TypeClause;
                    i++;
                }
                tyStr = string.Join(",", ss);
            }
            string argStr = Params.CalcSig(args);
            sig = name + "_" + tyStr + "_" + argStr;
        }

        public MethodInfo MethodInfo
        {
            get
            {
                if (methodInfo == null)
                {
                    methodInfo = Context.Ref.FindOperandMethod(this);
                }
                return methodInfo;
            }
        }

        private bool MaybeSpecial
        {
            get
            {
                if (Name == ".cctor")
                    return true;
                else if (Name == ".ctor")
                    return true;
                else if (Name.StartsWith("get_"))
                    return true;
                else if (Name.StartsWith("set_"))
                    return true;
                else if (Name.StartsWith("add_"))
                    return true;
                else if (Name.StartsWith("remove_"))
                    return true;
                return false;
            }
        }

        private List<string> callConvs = new List<string>();
        private TypeInfo retType = UndefinedTypeInfo.Ref;
        private TypeInfo typeSpec = UndefinedTypeInfo.Ref;
        private string name = "";
        private List<TypeInfo> typeArgs = new List<TypeInfo>();
        private List<Param> args = new List<Param>();

        private string sig = "";
        private MethodInfo methodInfo = null;
        private bool isSpecial = false;
    }
    public class TypeSpecOperand : IlOperand
    {
        public override string Value
        {
            get { return TypeSpec.TypeClause; }
            set { }
        }
        public TypeInfo TypeSpec
        {
            get { return typeSpec; }
            set { typeSpec = value; }
        }

        public TypeSpecOperand(TypeInfo ti)
        {
            typeSpec = ti;
        }

        public ClassInfo ClassInfo
        {
            get
            {
                if (classInfo == null)
                {
                    classInfo = Context.Ref.FindOperandClass(this);
                }
                return classInfo;
            }
        }

        private TypeInfo typeSpec = UndefinedTypeInfo.Ref;
        private ClassInfo classInfo = null;
    }
}
