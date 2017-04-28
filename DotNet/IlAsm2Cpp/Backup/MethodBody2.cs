using System;
using System.Collections.Generic;
using System.Text;
using System.Reflection.Emit;
using System.Globalization;

namespace IL2CPP
{
    public partial class MethodBody
    {
        /// <summary>
        /// 反编译异常块指令
        /// </summary>
        /// <param name="op"></param>
        /// <param name="il"></param>
        private void EvaluateEH(IlOpcode op, IlIns il, bool isDecompile)
        {
            switch (op)
            {
                case IlOpcode.TRY:
                    {
                        DAGNode node = DAGNode.CreateLeaf(true, "try{");
                        node.StatementSemicolon = "";
                        il.Csharps.Add(node);
                    }
                    break;
                case IlOpcode.FINALLY:
                    {
                        DAGNode node = DAGNode.CreateLeaf(true, "finally{");
                        node.StatementSemicolon = "";
                        il.Csharps.Add(node);
                    }
                    break;
                case IlOpcode.FILTER:
                    {
                        DAGNode node = DAGNode.CreateLeaf(true, "filter{");
                        node.StatementSemicolon = "";
                        il.Csharps.Add(node);
                    }
                    break;
                case IlOpcode.FAULT:
                    {
                        DAGNode node = DAGNode.CreateLeaf(true, "fault{");
                        node.StatementSemicolon = "";
                        il.Csharps.Add(node);
                    }
                    break;
                case IlOpcode.CATCH:
                    {
                        SemanticValue sv = new SemanticValue();
                        sv.Type = (il.Operand as TypeSpecOperand).TypeSpec;
                        sv.Node = DAGNode.CreateLeaf("Ex_"+il.LabelValue.ToString("X6"));
                        semanticStack.Push(sv);

                        DAGNode node = DAGNode.CreateBinary(true, "catch", DAGNode.CreateLeaf((il.Operand as TypeSpecOperand).TypeSpec.TypeDefClause), DAGNode.CreateLeaf("Ex_" + il.LabelValue.ToString("X6")));
                        node.StatementSemicolon = "";
                        il.Csharps.Add(node);
                    }
                    break;
                case IlOpcode.ENDTRY:
                case IlOpcode.ENDCATCH:
                case IlOpcode.ENDFINALLY:
                case IlOpcode.ENDFILTER:
                case IlOpcode.ENDFAULT:
                    {
                        DAGNode node = DAGNode.CreateLeaf(true, ";}");
                        node.StatementSemicolon = "";
                        il.Csharps.Add(node);
                    }
                    break;
            }
        }
        /// <summary>
        /// 反编译一条IL指令
        /// </summary>
        /// <param name="op"></param>
        /// <param name="il"></param>
        /// <returns>
        /// -2 --- 假的条件判断（条件永远为假，等同于空指令）
        /// -1 --- 假的条件判断（条件永远为真，等同于无条件跳转）
        ///  0 --- 正常指令流
        ///  1 --- 无条件跳转
        ///  2 --- 条件跳转
        ///  3 --- switch语句
        ///  4 --- 结束语句，return，break，throw，rethrow，leave，endfilter，endfinally等
        /// </returns>
        private int EvaluateIl(OpCode op, IlIns il, bool isDecompile)
        {
            switch ((IlOpcode)(ushort)op.Value)
            {
                case IlOpcode.Ldarg:
                case IlOpcode.Ldarg_S:
                    {
                        TypeInfo type = OwnerMethod.GetArgType(il.Value);
                        DAGNode node = GetVarReference(il.Value);
                        DAGNode anode = DAGNode.CreateNodeRef(node);
                        SemanticValue sv = new SemanticValue();
                        sv.Type = type;
                        sv.Node = anode;
                        semanticStack.Push(sv);

                        il.Csharps.Add(node);
                    }
                    break;
                case IlOpcode.Ldarg_0:
                case IlOpcode.Ldarg_1:
                case IlOpcode.Ldarg_2:
                case IlOpcode.Ldarg_3:
                    {
                        int stIx = OpCodes.Ldarg_1.Value;
                        if (OwnerMethod.IsStatic)
                        {
                            stIx = OpCodes.Ldarg_0.Value;
                        }
                        else if (op.Value == OpCodes.Ldarg_0.Value)
                        {
                            SemanticValue sv0 = new SemanticValue();
                            sv0.Type = BasicTypeInfo.Create(OwnerMethod.ClassInfo.FullName);
                            sv0.Node = DAGNode.CreateLeaf("this");
                            semanticStack.Push(sv0);
                            break;
                        }
                        TypeInfo type = OwnerMethod.Args[op.Value - stIx].Type;
                        string id = OwnerMethod.Args[op.Value - stIx].Id;
                        DAGNode node = GetVarReference(id);
                        DAGNode anode = DAGNode.CreateNodeRef(node);
                        SemanticValue sv = new SemanticValue();
                        sv.Type = type;
                        sv.Node = anode;
                        semanticStack.Push(sv);

                        il.Csharps.Add(node);
                    }
                    break;
                case IlOpcode.Ldarga:
                case IlOpcode.Ldarga_S:
                    {
                        TypeInfo type = OwnerMethod.GetArgType(il.Value);
                        SemanticValue sv = new SemanticValue();
                        sv.Type = type;
                        DAGNode node = DAGNode.CreateLeaf(il.Value);
                        sv.Node = node;

                        semanticStack.Push(sv);
                    }
                    break;
                case IlOpcode.Ldc_I4_0:
                case IlOpcode.Ldc_I4_1:
                case IlOpcode.Ldc_I4_2:
                case IlOpcode.Ldc_I4_3:
                case IlOpcode.Ldc_I4_4:
                case IlOpcode.Ldc_I4_5:
                case IlOpcode.Ldc_I4_6:
                case IlOpcode.Ldc_I4_7:
                case IlOpcode.Ldc_I4_8:
                case IlOpcode.Ldc_I4_M1:
                    {
                        SemanticValue sv = new SemanticValue();
                        sv.Type = BasicTypeInfo.Int32Info;
                        sv.IsConst = true;
                        sv.IntegerVal = op.Value - OpCodes.Ldc_I4_0.Value;
                        semanticStack.Push(sv);
                    }
                    break;
                case IlOpcode.Ldc_I4:
                case IlOpcode.Ldc_I4_S:
                    {
                        SemanticValue sv = new SemanticValue();
                        long v = ConstUtility.ParseLong(il.Value);
                        sv.Type = BasicTypeInfo.Int32Info;
                        sv.IsConst = true;
                        sv.IntegerVal = v;
                        semanticStack.Push(sv);
                    }
                    break;
                case IlOpcode.Ldc_I8:
                    {
                        SemanticValue sv = new SemanticValue();
                        long v = ConstUtility.ParseLong(il.Value);
                        sv.Type = BasicTypeInfo.Int64Info;
                        sv.IsConst = true;
                        sv.IntegerVal = v;
                        semanticStack.Push(sv);
                    }
                    break;
                case IlOpcode.Ldc_R4:
                    {
                        SemanticValue sv = new SemanticValue();
                        double v = ConstUtility.ParseDouble(il.Value);
                        sv.Type = BasicTypeInfo.SingleInfo;
                        sv.IsConst = true;
                        sv.FloatVal = v;
                        semanticStack.Push(sv);
                    }
                    break;
                case IlOpcode.Ldc_R8:
                    {
                        SemanticValue sv = new SemanticValue();
                        double v = ConstUtility.ParseDouble(il.Value);
                        sv.Type = BasicTypeInfo.DoubleInfo;
                        sv.IsConst = true;
                        sv.FloatVal = v;
                        semanticStack.Push(sv);
                    }
                    break;
                case IlOpcode.Ldelema:
                    {
                        SemanticValue index = semanticStack.Pop();
                        SemanticValue obj = semanticStack.Pop();
                        SemanticValue sv = new SemanticValue();
                        TypeInfo type = obj.Type;
                        if (type.IsArray)
                            type = type.UnderlyingType;
                        DAGNode ixnode = index.Node;
                        if (index.Type.IsCastSimple)
                            ixnode = BuildCastExpression(BasicTypeInfo.Int32Info, index);
                        sv.Type = type;
                        DAGNode node = DAGNode.CreateBinary("[]", obj.Node, ixnode);
                        sv.Node = node;
                        semanticStack.Push(sv);
                    }
                    break;
                case IlOpcode.Ldelem:
                case IlOpcode.Ldelem_I:
                case IlOpcode.Ldelem_I1:
                case IlOpcode.Ldelem_I2:
                case IlOpcode.Ldelem_I4:
                case IlOpcode.Ldelem_I8:
                case IlOpcode.Ldelem_R4:
                case IlOpcode.Ldelem_R8:
                case IlOpcode.Ldelem_Ref:
                case IlOpcode.Ldelem_U1:
                case IlOpcode.Ldelem_U2:
                case IlOpcode.Ldelem_U4:
                    {
                        SemanticValue index = semanticStack.Pop();
                        SemanticValue obj = semanticStack.Pop();
                        SemanticValue sv = new SemanticValue();
                        TypeInfo type = obj.Type;
                        if (type.IsArray)
                            type = type.UnderlyingType;
                        DAGNode ixnode = index.Node;
                        if (index.Type.IsCastSimple || !index.Type.IsSimple)
                            ixnode = BuildCastExpression(BasicTypeInfo.Int32Info, index);
                        sv.Type = type;
                        sv.Node = DAGNode.CreateBinary("[]", obj.Node, ixnode);
                        semanticStack.Push(sv);
                    }
                    break;
                case IlOpcode.Ldflda:
                    {
                        FieldOperand val = il.Operand as FieldOperand;
                        SemanticValue obj = semanticStack.Pop();
                        SemanticValue sv = new SemanticValue();
                        sv.Type = val.Type;

                        string opstr = ".";
                        if (obj.Type.IsRef || obj.IsThis)
                            opstr = "->";

                        DAGNode node = DAGNode.CreateBinary(opstr, obj.Node, DAGNode.CreateLeaf(val.Name));
                        sv.Node = node;
                        semanticStack.Push(sv);
                    }
                    break;
                case IlOpcode.Ldfld:
                    {
                        FieldOperand val = il.Operand as FieldOperand;
                        SemanticValue obj = semanticStack.Pop();
                        SemanticValue sv = new SemanticValue();
                        sv.Type = val.Type;
                        string tvar = NewAlias(val.Type);
                        sv.Node = DAGNode.CreateLeaf(tvar);
                        semanticStack.Push(sv);

                        string opstr = ".";
                        if (obj.Type.IsRef || obj.IsThis)
                            opstr = "->";

                        DAGNode node = DAGNode.CreateBinary(opstr, obj.Node, DAGNode.CreateLeaf(val.Name));
                        node.SetID(tvar, val.Type);
                        il.Csharps.Add(node);
                    }
                    break;
                case IlOpcode.Ldftn:
                    {
                        MethodOperand val = il.Operand as MethodOperand;
                        SemanticValue sv = new SemanticValue();
                        sv.Type = BasicTypeInfo.IntPtrInfo;
                        sv.Node = DAGNode.CreateLeaf(val);
                        semanticStack.Push(sv);
                    }
                    break;
                case IlOpcode.Ldind_I:
                case IlOpcode.Ldind_I1:
                case IlOpcode.Ldind_I2:
                case IlOpcode.Ldind_I4:
                case IlOpcode.Ldind_I8:
                case IlOpcode.Ldind_R4:
                case IlOpcode.Ldind_R8:
                case IlOpcode.Ldind_U1:
                case IlOpcode.Ldind_U2:
                case IlOpcode.Ldind_U4:
                    {
                        SemanticValue addr = semanticStack.Pop();
                        SemanticValue sv = new SemanticValue();
                        sv.Type = BasicTypeInfo.Int32Info;
                        sv.Node = addr.Node;
                        semanticStack.Push(sv);
                    }
                    break;
                case IlOpcode.Ldlen:
                    {
                        SemanticValue arr = semanticStack.Pop();
                        SemanticValue sv = new SemanticValue();
                        sv.Type = BasicTypeInfo.Int32Info;
                        string tvar = NewAlias(sv.Type);
                        sv.Node = DAGNode.CreateLeaf(tvar);
                        semanticStack.Push(sv);

                        DAGNode node = DAGNode.CreateBinary("->", arr.Node, DAGNode.CreateLeaf("Length"));
                        node.SetID(tvar, sv.Type);
                        il.Csharps.Add(node);
                    }
                    break;
                case IlOpcode.Ldloc:
                case IlOpcode.Ldloc_S:
                    {
                        TypeInfo type = GetLocalType(il.Value);
                        DAGNode node = GetVarReference(il.Value);
                        DAGNode anode = DAGNode.CreateNodeRef(node);
                        SemanticValue sv = new SemanticValue();
                        sv.Type = type;
                        sv.Node = anode;
                        semanticStack.Push(sv);

                        il.Csharps.Add(node);
                    }
                    break;
                case IlOpcode.Ldloc_0:
                case IlOpcode.Ldloc_1:
                case IlOpcode.Ldloc_2:
                case IlOpcode.Ldloc_3:
                    {
                        int ix = op.Value - OpCodes.Ldloc_0.Value;
                        string localName = locals[ix].Id;
                        TypeInfo type = GetLocalType(localName);
                        DAGNode node = GetVarReference(localName);
                        DAGNode anode = DAGNode.CreateNodeRef(node);
                        SemanticValue sv = new SemanticValue();
                        sv.Type = type;
                        sv.Node = anode;
                        semanticStack.Push(sv);

                        il.Csharps.Add(node);
                    }
                    break;
                case IlOpcode.Ldloca:
                case IlOpcode.Ldloca_S:
                    {
                        TypeInfo type = GetLocalType(il.Value);
                        SemanticValue sv = new SemanticValue();
                        sv.Type = type;
                        sv.Node = DAGNode.CreateLeaf(il.Value);
                        semanticStack.Push(sv);
                    }
                    break;
                case IlOpcode.Ldnull:
                    {
                        SemanticValue sv = new SemanticValue();
                        sv.Type = BasicTypeInfo.ObjectInfo;
                        sv.IsConst = true;
                        sv.IntegerVal = 0;
                        semanticStack.Push(sv);
                    }
                    break;
                case IlOpcode.Ldobj:
                    {
                        SemanticValue obj = semanticStack.Pop();
                        SemanticValue sv = new SemanticValue();
                        sv.Type = obj.Type;
                        sv.Node = obj.Node;
                        semanticStack.Push(sv);
                    }
                    break;
                case IlOpcode.Ldsfld:
                    {
                        FieldOperand val = il.Operand as FieldOperand;
                        SemanticValue sv = new SemanticValue();
                        sv.Type = val.Type;
                        string tvar = NewAlias(val.Type);
                        sv.Node = DAGNode.CreateLeaf(tvar);
                        semanticStack.Push(sv);

                        DAGNode node = DAGNode.CreateBinary("::", DAGNode.CreateLeaf(val.TypeSpec.TypeClause), DAGNode.CreateLeaf(val.Name));
                        node.SetID(tvar, val.Type);
                        il.Csharps.Add(node);
                    }
                    break;
                case IlOpcode.Ldsflda:
                    {
                        FieldOperand val = il.Operand as FieldOperand;
                        SemanticValue sv = new SemanticValue();
                        sv.Type = val.Type;
                        DAGNode node = DAGNode.CreateBinary("::", DAGNode.CreateLeaf(val.TypeSpec.TypeClause), DAGNode.CreateLeaf(val.Name));
                        sv.Node = node;
                        semanticStack.Push(sv);
                    }
                    break;
                case IlOpcode.Ldstr:
                    {
                        SemanticValue sv = new SemanticValue();
                        sv.Type = BasicTypeInfo.StringInfo;
                        sv.Node = DAGNode.CreateLeaf(il.Value);
                        semanticStack.Push(sv);
                    }
                    break;
                case IlOpcode.Ldtoken:
                    {
                        SemanticValue sv = new SemanticValue();
                        sv.Type = BasicTypeInfo.Int32Info;
                        if (il.Operand is TypeSpecOperand)
                        {
                            TypeSpecOperand val = il.Operand as TypeSpecOperand;
                            sv.Node = DAGNode.CreateLeaf(val);
                        }
                        else if (il.Operand is FieldOperand)
                        {
                            FieldOperand val = il.Operand as FieldOperand;
                            sv.Node = DAGNode.CreateLeaf(val);
                        }
                        else if (il.Operand is MethodOperand)
                        {
                            MethodOperand val = il.Operand as MethodOperand;
                            sv.Node = DAGNode.CreateLeaf(val);
                        }
                        semanticStack.Push(sv);
                    }
                    break;
                case IlOpcode.Ldvirtftn:
                    {
                        MethodOperand val = il.Operand as MethodOperand;
                        SemanticValue obj = semanticStack.Pop();
                        SemanticValue sv = new SemanticValue();
                        sv.Type = BasicTypeInfo.ObjectInfo;
                        sv.Node = DAGNode.CreateLeaf(val);
                        semanticStack.Push(sv);
                    }
                    break;
                case IlOpcode.Starg:
                case IlOpcode.Starg_S:
                    {
                        SemanticValue v = semanticStack.Pop();

                        TypeInfo type = OwnerMethod.GetArgType(il.Value);
                        DAGNode node = BuildCastExpression(type, v);
                        if (node.Identifier.Length <= 0)
                        {
                            node.SetID(il.Value, type);
                        }
                        else
                        {
                            node = DAGNode.CreateNodeRef(node);
                            node.SetID(il.Value, type);
                        }
                        il.Csharps.Add(node);
                        VarChanged(il.Value, type, node);
                    }
                    break;
                case IlOpcode.Stelem:
                case IlOpcode.Stelem_I:
                case IlOpcode.Stelem_I1:
                case IlOpcode.Stelem_I2:
                case IlOpcode.Stelem_I4:
                case IlOpcode.Stelem_I8:
                case IlOpcode.Stelem_R4:
                case IlOpcode.Stelem_R8:
                case IlOpcode.Stelem_Ref:
                    {
                        SemanticValue v = semanticStack.Pop();
                        SemanticValue index = semanticStack.Pop();
                        SemanticValue arr = semanticStack.Pop();

                        TypeInfo type = arr.Type;
                        if (type.IsArray)
                            type = type.UnderlyingType;
                        DAGNode ixnode = index.Node;
                        if (index.Type.IsCastSimple)
                            ixnode = BuildCastExpression(BasicTypeInfo.Int32Info, index);
                        DAGNode node = BuildCastExpression(type, v);
                        il.Csharps.Add(DAGNode.CreateTernary(true, "[]", arr.Node, ixnode, node));
                    }
                    break;
                case IlOpcode.Stfld:
                    {
                        FieldOperand val = il.Operand as FieldOperand;
                        SemanticValue v = semanticStack.Pop();
                        SemanticValue obj = semanticStack.Pop();

                        string opstr = ".";
                        if (obj.Type.IsRef || obj.IsThis)
                            opstr = "->";

                        TypeInfo type = val.Type;
                        DAGNode node = BuildCastExpression(type, v);
                        il.Csharps.Add(DAGNode.CreateTernary(true, opstr, obj.Node, DAGNode.CreateLeaf(val.Name), node));
                    }
                    break;
                case IlOpcode.Stind_I:
                case IlOpcode.Stind_I1:
                case IlOpcode.Stind_I2:
                case IlOpcode.Stind_I4:
                case IlOpcode.Stind_I8:
                case IlOpcode.Stind_R4:
                case IlOpcode.Stind_R8:
                case IlOpcode.Stind_Ref:
                    {
                        SemanticValue v = semanticStack.Pop();
                        SemanticValue addr = semanticStack.Pop();
                        il.Csharps.Add(DAGNode.CreateBinary(true, "=", addr.Node, v.Node));
                    }
                    break;
                case IlOpcode.Stloc:
                case IlOpcode.Stloc_S:
                    {
                        SemanticValue v = semanticStack.Pop();

                        TypeInfo type = GetLocalType(il.Value);
                        DAGNode node = BuildCastExpression(type, v);
                        if (node.Identifier.Length <= 0)
                        {
                            node.SetID(il.Value, type);
                        }
                        else
                        {
                            node = DAGNode.CreateNodeRef(node);
                            node.SetID(il.Value, type);
                        }
                        il.Csharps.Add(node);
                        VarChanged(il.Value, type, node);
                    }
                    break;
                case IlOpcode.Stloc_0:
                case IlOpcode.Stloc_1:
                case IlOpcode.Stloc_2:
                case IlOpcode.Stloc_3:
                    {
                        SemanticValue v = semanticStack.Pop();
                        int ix = op.Value - OpCodes.Stloc_0.Value;
                        string localName = locals[ix].Id;

                        TypeInfo type = GetLocalType(localName);
                        DAGNode node = BuildCastExpression(type, v);
                        if (node.Identifier.Length <= 0)
                        {
                            node.SetID(localName, type);
                        }
                        else
                        {
                            node = DAGNode.CreateNodeRef(node);
                            node.SetID(localName, type);
                        }
                        il.Csharps.Add(node);
                        VarChanged(localName, type, node);
                    }
                    break;
                case IlOpcode.Stobj:
                    {
                        SemanticValue v = semanticStack.Pop();
                        SemanticValue addr = semanticStack.Pop();
                        il.Csharps.Add(DAGNode.CreateBinary(true, "=", addr.Node, v.Node));
                    }
                    break;
                case IlOpcode.Stsfld:
                    {
                        FieldOperand val = il.Operand as FieldOperand;
                        SemanticValue v = semanticStack.Pop();

                        TypeInfo type = val.Type;
                        DAGNode node = BuildCastExpression(type, v);
                        il.Csharps.Add(DAGNode.CreateTernary(true, "::", DAGNode.CreateLeaf(val.TypeSpec.TypeClause), DAGNode.CreateLeaf(val.Name), node));
                    }
                    break;
                case IlOpcode.Nop:
                    {
                    }
                    break;
                case IlOpcode.Break:
                    {
                        return 4;
                    }
                case IlOpcode.Dup:
                    {
                        SemanticValue v = semanticStack.Peek();
                        semanticStack.Push(v);
                    }
                    break;
                case IlOpcode.Pop:
                    {
                        SemanticValue v = semanticStack.Pop();
                        il.Csharps.Add(v.Node);
                    }
                    break;
                case IlOpcode.Jmp:
                    {
                    }
                    break;
                case IlOpcode.Call:
                case IlOpcode.Callvirt:
                    {
                        EvaluateCall(il);
                    }
                    break;
                case IlOpcode.Calli:
                    {
                        EvaluateIndCall(il);
                    }
                    break;
                case IlOpcode.Newobj:
                    {
                        EvaluateNewObj(il);
                    }
                    break;
                case IlOpcode.Newarr:
                    {
                        EvaluateNewArr(il);
                    }
                    break;
                case IlOpcode.Ret:
                    {
                        EvaluateRet(il);
                        return 4;
                    }
                case IlOpcode.Br_S:
                case IlOpcode.Br:
                    {
                        DAGNode node = DAGNode.CreateUnary(true, "goto", DAGNode.CreateLeaf(il.Value));
                        node = AdjustGoto(il, node, isDecompile);
                        il.Csharps.Add(node);
                        return 1;
                    }
                case IlOpcode.Brfalse_S:
                case IlOpcode.Brfalse:
                    {
                        SemanticValue v = semanticStack.Pop();
                        if (v.IsConst)
                        {
                            if (v.IntegerVal == 0)
                            {
                                DAGNode node = DAGNode.CreateUnary(true, "goto", DAGNode.CreateLeaf(il.Value));
                                node = AdjustGoto(il, node, isDecompile);
                                il.Csharps.Add(node);
                                return -1;
                            }
                            else
                            {
                                return -2;
                            }
                        }
                        else
                        {
                            DAGNode node = null;
                            if (v.Type.IsBoolean)
                            {
                                node = DAGNode.CreateBinary(true, "if", v.Node, DAGNode.CreateLeaf(il.Value));
                                node.OtherOperators.Add("!");
                            }
                            else if (v.Type.IsRef)
                            {
                                node = DAGNode.CreateTernary(true, "if", v.Node, DAGNode.CreateLeaf("nullptr"), DAGNode.CreateLeaf(il.Value));
                                node.OtherOperators.Add("==");
                            }
                            else//if (v.Type.IsValue)
                            {
                                DAGNode node0 = BuildCastExpression(BasicTypeInfo.Int32Info, v);
                                node = DAGNode.CreateTernary(true, "if", node0, DAGNode.CreateLeaf("0"), DAGNode.CreateLeaf(il.Value));
                                node.OtherOperators.Add("==");
                            }
                            node = AdjustGoto(il, node, isDecompile);
                            il.Csharps.Add(node);
                            return 2;
                        }
                    }
                case IlOpcode.Brtrue_S:
                case IlOpcode.Brtrue:
                    {
                        SemanticValue v = semanticStack.Pop();
                        if (v.IsConst)
                        {
                            if (v.IntegerVal != 0)
                            {
                                DAGNode node = DAGNode.CreateUnary(true, "goto", DAGNode.CreateLeaf(il.Value));
                                node = AdjustGoto(il, node, isDecompile);
                                il.Csharps.Add(node);
                                return -1;
                            }
                            else
                            {
                                return -2;
                            }
                        }
                        else
                        {
                            DAGNode node = null;
                            if (v.Type.IsBoolean)
                                node = DAGNode.CreateBinary(true, "if", v.Node, DAGNode.CreateLeaf(il.Value));
                            else if (v.Type.IsRef)
                            {
                                node = DAGNode.CreateTernary(true, "if", v.Node, DAGNode.CreateLeaf("nullptr"), DAGNode.CreateLeaf(il.Value));
                                node.OtherOperators.Add("!=");
                            }
                            else//if (v.Type.IsValue)
                            {
                                DAGNode node0 = BuildCastExpression(BasicTypeInfo.Int32Info, v);
                                node = DAGNode.CreateTernary(true, "if", node0, DAGNode.CreateLeaf("0"), DAGNode.CreateLeaf(il.Value));
                                node.OtherOperators.Add("!=");
                            }
                            node = AdjustGoto(il, node, isDecompile);
                            il.Csharps.Add(node);
                            return 2;
                        }
                    }
                case IlOpcode.Beq_S:
                case IlOpcode.Beq:
                    {
                        SemanticValue v2 = semanticStack.Pop();
                        SemanticValue v1 = semanticStack.Pop();
                        if (v1.IsConst && v2.IsConst)
                        {
                            if (v1.IntegerVal == v2.IntegerVal)
                            {
                                DAGNode node = DAGNode.CreateUnary(true, "goto", DAGNode.CreateLeaf(il.Value));
                                node = AdjustGoto(il, node, isDecompile);
                                il.Csharps.Add(node);
                                return -1;
                            }
                            else
                            {
                                return -2;
                            }
                        }
                        else
                        {
                            DAGNode node1, node2;
                            BuildCastExpression(v1, v2, out node1, out node2);
                            DAGNode node = DAGNode.CreateTernary(true, "if", node1, node2, DAGNode.CreateLeaf(il.Value));
                            node.OtherOperators.Add("==");
                            node = AdjustGoto(il, node, isDecompile);
                            il.Csharps.Add(node);
                            return 2;
                        }
                    }
                case IlOpcode.Bge_S:
                case IlOpcode.Bge:
                    {
                        SemanticValue v2 = semanticStack.Pop();
                        SemanticValue v1 = semanticStack.Pop();
                        if (v1.IsConst && v2.IsConst)
                        {
                            if (v1.IntegerVal >= v2.IntegerVal)
                            {
                                DAGNode node = DAGNode.CreateUnary(true, "goto", DAGNode.CreateLeaf(il.Value));
                                node = AdjustGoto(il, node, isDecompile);
                                il.Csharps.Add(node);
                                return -1;
                            }
                            else
                            {
                                return -2;
                            }
                        }
                        else
                        {
                            DAGNode node1, node2;
                            string cmpstr = ">=";
                            bool r=BuildCastExpression(v1, v2, out node1, out node2);
                            if (!r)
                                cmpstr = "==";
                            DAGNode node = DAGNode.CreateTernary(true, "if", node1, node2, DAGNode.CreateLeaf(il.Value));
                            node.OtherOperators.Add(cmpstr);
                            node = AdjustGoto(il, node, isDecompile);
                            il.Csharps.Add(node);
                            return 2;
                        }
                    }
                case IlOpcode.Bgt_S:
                case IlOpcode.Bgt:
                    {
                        SemanticValue v2 = semanticStack.Pop();
                        SemanticValue v1 = semanticStack.Pop();
                        if (v1.IsConst && v2.IsConst)
                        {
                            if (v1.IntegerVal > v2.IntegerVal)
                            {
                                DAGNode node = DAGNode.CreateUnary(true, "goto", DAGNode.CreateLeaf(il.Value));
                                node = AdjustGoto(il, node, isDecompile);
                                il.Csharps.Add(node);
                                return -1;
                            }
                            else
                            {
                                return -2;
                            }
                        }
                        else
                        {
                            DAGNode node1, node2;
                            string cmpstr = ">";
                            bool r = BuildCastExpression(v1, v2, out node1, out node2);
                            if (!r)
                                cmpstr = "!=";
                            DAGNode node = DAGNode.CreateTernary(true, "if", node1, node2, DAGNode.CreateLeaf(il.Value));
                            node.OtherOperators.Add(cmpstr);
                            node = AdjustGoto(il, node, isDecompile);
                            il.Csharps.Add(node);
                            return 2;
                        }
                    }
                case IlOpcode.Ble_S:
                case IlOpcode.Ble:
                    {
                        SemanticValue v2 = semanticStack.Pop();
                        SemanticValue v1 = semanticStack.Pop();
                        if (v1.IsConst && v2.IsConst)
                        {
                            if (v1.IntegerVal <= v2.IntegerVal)
                            {
                                DAGNode node = DAGNode.CreateUnary(true, "goto", DAGNode.CreateLeaf(il.Value));
                                node = AdjustGoto(il, node, isDecompile);
                                il.Csharps.Add(node);
                                return -1;
                            }
                            else
                            {
                                return -2;
                            }
                        }
                        else
                        {
                            DAGNode node1, node2;
                            string cmpstr = "<=";
                            bool r = BuildCastExpression(v1, v2, out node1, out node2);
                            if (!r)
                                cmpstr = "==";
                            DAGNode node = DAGNode.CreateTernary(true, "if", node1, node2, DAGNode.CreateLeaf(il.Value));
                            node.OtherOperators.Add(cmpstr);
                            node = AdjustGoto(il, node, isDecompile);
                            il.Csharps.Add(node);
                            return 2;
                        }
                    }
                case IlOpcode.Blt_S:
                case IlOpcode.Blt:
                    {
                        SemanticValue v2 = semanticStack.Pop();
                        SemanticValue v1 = semanticStack.Pop();
                        if (v1.IsConst && v2.IsConst)
                        {
                            if (v1.IntegerVal < v2.IntegerVal)
                            {
                                DAGNode node = DAGNode.CreateUnary(true, "goto", DAGNode.CreateLeaf(il.Value));
                                node = AdjustGoto(il, node, isDecompile);
                                il.Csharps.Add(node);
                                return -1;
                            }
                            else
                            {
                                return -2;
                            }
                        }
                        else
                        {
                            DAGNode node1, node2;
                            string cmpstr = "<";
                            bool r = BuildCastExpression(v1, v2, out node1, out node2);
                            if (!r)
                                cmpstr = "!=";
                            DAGNode node = DAGNode.CreateTernary(true, "if", node1, node2, DAGNode.CreateLeaf(il.Value));
                            node.OtherOperators.Add(cmpstr);
                            node = AdjustGoto(il, node, isDecompile);
                            il.Csharps.Add(node);
                            return 2;
                        }
                    }
                case IlOpcode.Bne_Un_S:
                case IlOpcode.Bne_Un:
                    {
                        SemanticValue v2 = semanticStack.Pop();
                        SemanticValue v1 = semanticStack.Pop();
                        if (v1.IsConst && v2.IsConst)
                        {
                            if (v1.IntegerVal != v2.IntegerVal)
                            {
                                DAGNode node = DAGNode.CreateUnary(true, "goto", DAGNode.CreateLeaf(il.Value));
                                node = AdjustGoto(il, node, isDecompile);
                                il.Csharps.Add(node);
                                return -1;
                            }
                            else
                            {
                                return -2;
                            }
                        }
                        else
                        {
                            DAGNode node1, node2;
                            BuildCastExpression(v1, v2, out node1, out node2);
                            DAGNode node = DAGNode.CreateTernary(true, "if", node1, node2, DAGNode.CreateLeaf(il.Value));
                            node.OtherOperators.Add("!=");
                            node = AdjustGoto(il, node, isDecompile);
                            il.Csharps.Add(node);
                            return 2;
                        }
                    }
                case IlOpcode.Bge_Un_S:
                case IlOpcode.Bge_Un:
                    {
                        SemanticValue v2 = semanticStack.Pop();
                        SemanticValue v1 = semanticStack.Pop();
                        if (v1.IsConst && v2.IsConst)
                        {
                            if (v1.IntegerVal >= v2.IntegerVal)
                            {
                                DAGNode node = DAGNode.CreateUnary(true, "goto", DAGNode.CreateLeaf(il.Value));
                                node = AdjustGoto(il, node, isDecompile);
                                il.Csharps.Add(node);
                                return -1;
                            }
                            else
                            {
                                return -2;
                            }
                        }
                        else
                        {
                            DAGNode node1, node2;
                            string cmpstr = ">=";
                            bool r = BuildCastExpression(v1, v2, out node1, out node2);
                            if (!r)
                                cmpstr = "==";
                            DAGNode node = DAGNode.CreateTernary(true, "if", node1, node2, DAGNode.CreateLeaf(il.Value));
                            node.OtherOperators.Add(cmpstr);
                            node = AdjustGoto(il, node, isDecompile);
                            il.Csharps.Add(node);
                            return 2;
                        }
                    }
                case IlOpcode.Bgt_Un_S:
                case IlOpcode.Bgt_Un:
                    {
                        SemanticValue v2 = semanticStack.Pop();
                        SemanticValue v1 = semanticStack.Pop();
                        if (v1.IsConst && v2.IsConst)
                        {
                            if (v1.IntegerVal > v2.IntegerVal)
                            {
                                DAGNode node = DAGNode.CreateUnary(true, "goto", DAGNode.CreateLeaf(il.Value));
                                node = AdjustGoto(il, node, isDecompile);
                                il.Csharps.Add(node);
                                return -1;
                            }
                            else
                            {
                                return -2;
                            }
                        }
                        else
                        {
                            DAGNode node1, node2;
                            string cmpstr = ">";
                            bool r = BuildCastExpression(v1, v2, out node1, out node2);
                            if (!r)
                                cmpstr = "!=";
                            DAGNode node = DAGNode.CreateTernary(true, "if", node1, node2, DAGNode.CreateLeaf(il.Value));
                            node.OtherOperators.Add(cmpstr);
                            node = AdjustGoto(il, node, isDecompile);
                            il.Csharps.Add(node);
                            return 2;
                        }
                    }
                case IlOpcode.Ble_Un_S:
                case IlOpcode.Ble_Un:
                    {
                        SemanticValue v2 = semanticStack.Pop();
                        SemanticValue v1 = semanticStack.Pop();
                        if (v1.IsConst && v2.IsConst)
                        {
                            if (v1.IntegerVal <= v2.IntegerVal)
                            {
                                DAGNode node = DAGNode.CreateUnary(true, "goto", DAGNode.CreateLeaf(il.Value));
                                node = AdjustGoto(il, node, isDecompile);
                                il.Csharps.Add(node);
                                return -1;
                            }
                            else
                            {
                                return -2;
                            }
                        }
                        else
                        {
                            DAGNode node1, node2;
                            string cmpstr = "<=";
                            bool r = BuildCastExpression(v1, v2, out node1, out node2);
                            if (!r)
                                cmpstr = "==";
                            DAGNode node = DAGNode.CreateTernary(true, "if", node1, node2, DAGNode.CreateLeaf(il.Value));
                            node.OtherOperators.Add(cmpstr);
                            node = AdjustGoto(il, node, isDecompile);
                            il.Csharps.Add(node);
                            return 2;
                        }
                    }
                case IlOpcode.Blt_Un_S:
                case IlOpcode.Blt_Un:
                    {
                        SemanticValue v2 = semanticStack.Pop();
                        SemanticValue v1 = semanticStack.Pop();
                        if (v1.IsConst && v2.IsConst)
                        {
                            if (v1.IntegerVal < v2.IntegerVal)
                            {
                                DAGNode node = DAGNode.CreateUnary(true, "goto", DAGNode.CreateLeaf(il.Value));
                                node = AdjustGoto(il, node, isDecompile);
                                il.Csharps.Add(node);
                                return -1;
                            }
                            else
                            {
                                return -2;
                            }
                        }
                        else
                        {
                            DAGNode node1, node2;
                            string cmpstr = "<";
                            bool r = BuildCastExpression(v1, v2, out node1, out node2);
                            if (!r)
                                cmpstr = "!=";
                            DAGNode node = DAGNode.CreateTernary(true, "if", node1, node2, DAGNode.CreateLeaf(il.Value));
                            node.OtherOperators.Add(cmpstr);
                            node = AdjustGoto(il, node, isDecompile);
                            il.Csharps.Add(node);
                            return 2;
                        }
                    }
                case IlOpcode.Switch:
                    {
                        SemanticValue v = semanticStack.Pop();
                        SwitchOperand val = il.Operand as SwitchOperand;
                        DAGNode[] nodes = new DAGNode[val.Labels.Count + 1];
                        DAGNode node0 = BuildCastExpression(BasicTypeInfo.Int32Info, v);
                        nodes[0] = node0;
                        for (int i = 1; i <= val.Labels.Count; i++)
                        {
                            string label = val.Labels[i - 1];
                            string tlabel = AdjustGoto(il.LabelValue, IlIns.LabelToValue(label), isDecompile);
                            if (tlabel != null)
                                label = tlabel;
                            nodes[i] = DAGNode.CreateLeaf(label);
                        }
                        DAGNode node = DAGNode.CreateMultiple(true, "switch", nodes);
                        il.Csharps.Add(node);

                        if (!isDecompile)
                        {
                            switchExpressions[il.LabelValue] = v.Node;
                        }
                        return 3;
                    }
                case IlOpcode.Ceq:
                    {
                        SemanticValue v2 = semanticStack.Pop();
                        SemanticValue v1 = semanticStack.Pop();
                        SemanticValue sv = new SemanticValue();
                        sv.Type = BasicTypeInfo.BooleanInfo;
                        if (v1.IsConst && v2.IsConst)
                        {
                            sv.IsConst = true;
                            sv.IntegerVal = (v1.IntegerVal == v2.IntegerVal) ? 1 : 0;
                        }
                        else
                        {
                            DAGNode node1, node2;
                            BuildCastExpression(v1, v2, out node1, out node2);
                            sv.Node = DAGNode.CreateBinary("==", node1, node2);
                        }
                        semanticStack.Push(sv);
                    }
                    break;
                case IlOpcode.Cgt:
                    {
                        SemanticValue v2 = semanticStack.Pop();
                        SemanticValue v1 = semanticStack.Pop();
                        SemanticValue sv = new SemanticValue();
                        sv.Type = BasicTypeInfo.BooleanInfo;
                        if (v1.IsConst && v2.IsConst)
                        {
                            sv.IsConst = true;
                            sv.IntegerVal = (v1.IntegerVal > v2.IntegerVal) ? 1 : 0;
                        }
                        else
                        {
                            DAGNode node1, node2;
                            string cmpstr = ">";
                            bool r = BuildCastExpression(v1, v2, out node1, out node2);
                            if (!r)
                                cmpstr = "!=";
                            sv.Node = DAGNode.CreateBinary(cmpstr, node1, node2);
                        }
                        semanticStack.Push(sv);
                    }
                    break;
                case IlOpcode.Cgt_Un:
                    {
                        SemanticValue v2 = semanticStack.Pop();
                        SemanticValue v1 = semanticStack.Pop();
                        SemanticValue sv = new SemanticValue();
                        sv.Type = BasicTypeInfo.BooleanInfo;
                        if (v1.IsConst && v2.IsConst)
                        {
                            sv.IsConst = true;
                            sv.IntegerVal = (v1.IntegerVal > v2.IntegerVal) ? 1 : 0;
                        }
                        else
                        {
                            DAGNode node1, node2;
                            string cmpstr = ">";
                            bool r = BuildCastExpression(v1, v2, out node1, out node2);
                            if (!r)
                                cmpstr = "!=";
                            sv.Node = DAGNode.CreateBinary(cmpstr, node1, node2);
                        }
                        semanticStack.Push(sv);
                    }
                    break;
                case IlOpcode.Clt:
                    {
                        SemanticValue v2 = semanticStack.Pop();
                        SemanticValue v1 = semanticStack.Pop();
                        SemanticValue sv = new SemanticValue();
                        sv.Type = BasicTypeInfo.BooleanInfo;
                        if (v1.IsConst && v2.IsConst)
                        {
                            sv.IsConst = true;
                            sv.IntegerVal = (v1.IntegerVal < v2.IntegerVal) ? 1 : 0;
                        }
                        else
                        {
                            DAGNode node1, node2;
                            string cmpstr = "<";
                            bool r = BuildCastExpression(v1, v2, out node1, out node2);
                            if (!r)
                                cmpstr = "!=";
                            sv.Node = DAGNode.CreateBinary(cmpstr, node1, node2);
                        }
                        semanticStack.Push(sv);
                    }
                    break;
                case IlOpcode.Clt_Un:
                    {
                        SemanticValue v2 = semanticStack.Pop();
                        SemanticValue v1 = semanticStack.Pop();
                        SemanticValue sv = new SemanticValue();
                        sv.Type = BasicTypeInfo.BooleanInfo;
                        if (v1.IsConst && v2.IsConst)
                        {
                            sv.IsConst = true;
                            sv.IntegerVal = (v1.IntegerVal < v2.IntegerVal) ? 1 : 0;
                        }
                        else
                        {
                            DAGNode node1, node2;
                            string cmpstr = "<";
                            bool r = BuildCastExpression(v1, v2, out node1, out node2);
                            if (!r)
                                cmpstr = "!=";
                            sv.Node = DAGNode.CreateBinary(cmpstr, node1, node2);
                        }
                        semanticStack.Push(sv);
                    }
                    break;
                case IlOpcode.Add:
                    {
                        SemanticValue v2 = semanticStack.Pop();
                        SemanticValue v1 = semanticStack.Pop();
                        SemanticValue sv = new SemanticValue();
                        sv.Type = GetCalcResultType(v1, v2);
                        if (v1.IsConst && v2.IsConst)
                        {
                            sv.IsConst = true;
                            if (sv.Type.IsFloat)
                                sv.FloatVal = v1.FloatVal + v2.FloatVal;
                            else
                                sv.IntegerVal = v1.IntegerVal + v2.IntegerVal;
                        }
                        else
                        {
                            DAGNode node1 = BuildCastExpression(sv.Type, v1);
                            DAGNode node2 = BuildCastExpression(sv.Type, v2);
                            sv.Node = DAGNode.CreateBinary("+", node1, node2);
                        }
                        semanticStack.Push(sv);
                    }
                    break;
                case IlOpcode.Add_Ovf:
                    {
                        SemanticValue v2 = semanticStack.Pop();
                        SemanticValue v1 = semanticStack.Pop();
                        SemanticValue sv = new SemanticValue();
                        sv.Type = GetCalcResultType(v1, v2);
                        if (v1.IsConst && v2.IsConst)
                        {
                            sv.IsConst = true;
                            if (sv.Type.IsFloat)
                                sv.FloatVal = v1.FloatVal + v2.FloatVal;
                            else
                                sv.IntegerVal = v1.IntegerVal + v2.IntegerVal;
                        }
                        else
                        {
                            DAGNode node1 = BuildCastExpression(sv.Type, v1);
                            DAGNode node2 = BuildCastExpression(sv.Type, v2);
                            sv.Node = DAGNode.CreateBinary("+", node1, node2);
                        }
                        semanticStack.Push(sv);
                    }
                    break;
                case IlOpcode.Add_Ovf_Un:
                    {
                        SemanticValue v2 = semanticStack.Pop();
                        SemanticValue v1 = semanticStack.Pop();
                        SemanticValue sv = new SemanticValue();
                        sv.Type = GetCalcResultType(v1, v2);
                        if (v1.IsConst && v2.IsConst)
                        {
                            sv.IsConst = true;
                            if (sv.Type.IsFloat)
                                sv.FloatVal = v1.FloatVal + v2.FloatVal;
                            else
                                sv.IntegerVal = v1.IntegerVal + v2.IntegerVal;
                        }
                        else
                        {
                            DAGNode node1 = BuildCastExpression(sv.Type, v1);
                            DAGNode node2 = BuildCastExpression(sv.Type, v2);
                            sv.Node = DAGNode.CreateBinary("+", node1, node2);
                        }
                        semanticStack.Push(sv);
                    }
                    break;
                case IlOpcode.Sub:
                    {
                        SemanticValue v2 = semanticStack.Pop();
                        SemanticValue v1 = semanticStack.Pop();
                        SemanticValue sv = new SemanticValue();
                        sv.Type = GetCalcResultType(v1, v2);
                        if (v1.IsConst && v2.IsConst)
                        {
                            sv.IsConst = true;
                            if (sv.Type.IsFloat)
                                sv.FloatVal = v1.FloatVal - v2.FloatVal;
                            else
                                sv.IntegerVal = v1.IntegerVal - v2.IntegerVal;
                        }
                        else
                        {
                            DAGNode node1 = BuildCastExpression(sv.Type, v1);
                            DAGNode node2 = BuildCastExpression(sv.Type, v2);
                            sv.Node = DAGNode.CreateBinary("-", node1, node2);
                        }
                        semanticStack.Push(sv);
                    }
                    break;
                case IlOpcode.Sub_Ovf:
                    {
                        SemanticValue v2 = semanticStack.Pop();
                        SemanticValue v1 = semanticStack.Pop();
                        SemanticValue sv = new SemanticValue();
                        sv.Type = GetCalcResultType(v1, v2);
                        if (v1.IsConst && v2.IsConst)
                        {
                            sv.IsConst = true;
                            if (sv.Type.IsFloat)
                                sv.FloatVal = v1.FloatVal - v2.FloatVal;
                            else
                                sv.IntegerVal = v1.IntegerVal - v2.IntegerVal;
                        }
                        else
                        {
                            DAGNode node1 = BuildCastExpression(sv.Type, v1);
                            DAGNode node2 = BuildCastExpression(sv.Type, v2);
                            sv.Node = DAGNode.CreateBinary("-", node1, node2);
                        }
                        semanticStack.Push(sv);
                    }
                    break;
                case IlOpcode.Sub_Ovf_Un:
                    {
                        SemanticValue v2 = semanticStack.Pop();
                        SemanticValue v1 = semanticStack.Pop();
                        SemanticValue sv = new SemanticValue();
                        sv.Type = GetCalcResultType(v1, v2);
                        if (v1.IsConst && v2.IsConst)
                        {
                            sv.IsConst = true;
                            if (sv.Type.IsFloat)
                                sv.FloatVal = v1.FloatVal - v2.FloatVal;
                            else
                                sv.IntegerVal = v1.IntegerVal - v2.IntegerVal;
                        }
                        else
                        {
                            DAGNode node1 = BuildCastExpression(sv.Type, v1);
                            DAGNode node2 = BuildCastExpression(sv.Type, v2);
                            sv.Node = DAGNode.CreateBinary("-", node1, node2);
                        }
                        semanticStack.Push(sv);
                    }
                    break;
                case IlOpcode.Mul:
                    {
                        SemanticValue v2 = semanticStack.Pop();
                        SemanticValue v1 = semanticStack.Pop();
                        SemanticValue sv = new SemanticValue();
                        sv.Type = GetCalcResultType(v1, v2);
                        if (v1.IsConst && v2.IsConst)
                        {
                            sv.IsConst = true;
                            if (sv.Type.IsFloat)
                                sv.FloatVal = v1.FloatVal * v2.FloatVal;
                            else
                                sv.IntegerVal = v1.IntegerVal * v2.IntegerVal;
                        }
                        else
                        {
                            DAGNode node1 = BuildCastExpression(sv.Type, v1);
                            DAGNode node2 = BuildCastExpression(sv.Type, v2);
                            sv.Node = DAGNode.CreateBinary("*", node1, node2);
                        }
                        semanticStack.Push(sv);
                    }
                    break;
                case IlOpcode.Mul_Ovf:
                    {
                        SemanticValue v2 = semanticStack.Pop();
                        SemanticValue v1 = semanticStack.Pop();
                        SemanticValue sv = new SemanticValue();
                        sv.Type = GetCalcResultType(v1, v2);
                        if (v1.IsConst && v2.IsConst)
                        {
                            sv.IsConst = true;
                            if (sv.Type.IsFloat)
                                sv.FloatVal = v1.FloatVal * v2.FloatVal;
                            else
                                sv.IntegerVal = v1.IntegerVal * v2.IntegerVal;
                        }
                        else
                        {
                            DAGNode node1 = BuildCastExpression(sv.Type, v1);
                            DAGNode node2 = BuildCastExpression(sv.Type, v2);
                            sv.Node = DAGNode.CreateBinary("*", node1, node2);
                        }
                        semanticStack.Push(sv);
                    }
                    break;
                case IlOpcode.Mul_Ovf_Un:
                    {
                        SemanticValue v2 = semanticStack.Pop();
                        SemanticValue v1 = semanticStack.Pop();
                        SemanticValue sv = new SemanticValue();
                        sv.Type = GetCalcResultType(v1, v2);
                        if (v1.IsConst && v2.IsConst)
                        {
                            sv.IsConst = true;
                            if (sv.Type.IsFloat)
                                sv.FloatVal = v1.FloatVal * v2.FloatVal;
                            else
                                sv.IntegerVal = v1.IntegerVal * v2.IntegerVal;
                        }
                        else
                        {
                            DAGNode node1 = BuildCastExpression(sv.Type, v1);
                            DAGNode node2 = BuildCastExpression(sv.Type, v2);
                            sv.Node = DAGNode.CreateBinary("*", node1, node2);
                        }
                        semanticStack.Push(sv);
                    }
                    break;
                case IlOpcode.Div:
                    {
                        SemanticValue v2 = semanticStack.Pop();
                        SemanticValue v1 = semanticStack.Pop();
                        SemanticValue sv = new SemanticValue();
                        sv.Type = GetCalcResultType(v1, v2);
                        if (v1.IsConst && v2.IsConst)
                        {
                            sv.IsConst = true;
                            if (sv.Type.IsFloat)
                                sv.FloatVal = v1.FloatVal / v2.FloatVal;
                            else
                                sv.IntegerVal = v1.IntegerVal / v2.IntegerVal;
                        }
                        else
                        {
                            DAGNode node1 = BuildCastExpression(sv.Type, v1);
                            DAGNode node2 = BuildCastExpression(sv.Type, v2);
                            sv.Node = DAGNode.CreateBinary("/", node1, node2);
                        }
                        semanticStack.Push(sv);
                    }
                    break;
                case IlOpcode.Div_Un:
                    {
                        SemanticValue v2 = semanticStack.Pop();
                        SemanticValue v1 = semanticStack.Pop();
                        SemanticValue sv = new SemanticValue();
                        sv.Type = GetCalcResultType(v1, v2);
                        if (v1.IsConst && v2.IsConst)
                        {
                            sv.IsConst = true;
                            if (sv.Type.IsFloat)
                                sv.FloatVal = v1.FloatVal / v2.FloatVal;
                            else
                                sv.IntegerVal = v1.IntegerVal / v2.IntegerVal;
                        }
                        else
                        {
                            DAGNode node1 = BuildCastExpression(sv.Type, v1);
                            DAGNode node2 = BuildCastExpression(sv.Type, v2);
                            sv.Node = DAGNode.CreateBinary("/", node1, node2);
                        }
                        semanticStack.Push(sv);
                    }
                    break;
                case IlOpcode.Rem:
                    {
                        SemanticValue v2 = semanticStack.Pop();
                        SemanticValue v1 = semanticStack.Pop();
                        SemanticValue sv = new SemanticValue();
                        sv.Type = GetIntegerCalcResultType(v1, v2);
                        if (v1.IsConst && v2.IsConst)
                        {
                            sv.IsConst = true;
                            sv.IntegerVal = v1.IntegerVal % v2.IntegerVal;
                        }
                        else
                        {
                            DAGNode node1 = BuildCastExpression(sv.Type, v1);
                            DAGNode node2 = BuildCastExpression(sv.Type, v2);
                            sv.Node = DAGNode.CreateBinary("%", node1, node2);
                        }
                        semanticStack.Push(sv);
                    }
                    break;
                case IlOpcode.Rem_Un:
                    {
                        SemanticValue v2 = semanticStack.Pop();
                        SemanticValue v1 = semanticStack.Pop();
                        SemanticValue sv = new SemanticValue();
                        sv.Type = GetIntegerCalcResultType(v1, v2);
                        if (v1.IsConst && v2.IsConst)
                        {
                            sv.IsConst = true;
                            sv.IntegerVal = v1.IntegerVal % v2.IntegerVal;
                        }
                        else
                        {
                            DAGNode node1 = BuildCastExpression(sv.Type, v1);
                            DAGNode node2 = BuildCastExpression(sv.Type, v2);
                            sv.Node = DAGNode.CreateBinary("%", node1, node2);
                        }
                        semanticStack.Push(sv);
                    }
                    break;
                case IlOpcode.And:
                    {
                        SemanticValue v2 = semanticStack.Pop();
                        SemanticValue v1 = semanticStack.Pop();
                        SemanticValue sv = new SemanticValue();
                        sv.Type = GetIntegerCalcResultType(v1, v2);
                        if (v1.IsConst && v2.IsConst)
                        {
                            sv.IsConst = true;
                            sv.IntegerVal = v1.IntegerVal & v2.IntegerVal;
                        }
                        else
                        {
                            DAGNode node1 = BuildCastExpression(sv.Type, v1);
                            DAGNode node2 = BuildCastExpression(sv.Type, v2);
                            sv.Node = DAGNode.CreateBinary("&", node1, node2);
                        }
                        semanticStack.Push(sv);
                    }
                    break;
                case IlOpcode.Or:
                    {
                        SemanticValue v2 = semanticStack.Pop();
                        SemanticValue v1 = semanticStack.Pop();
                        SemanticValue sv = new SemanticValue();
                        sv.Type = GetIntegerCalcResultType(v1, v2);
                        if (v1.IsConst && v2.IsConst)
                        {
                            sv.IsConst = true;
                            sv.IntegerVal = v1.IntegerVal | v2.IntegerVal;
                        }
                        else
                        {
                            DAGNode node1 = BuildCastExpression(sv.Type, v1);
                            DAGNode node2 = BuildCastExpression(sv.Type, v2);
                            sv.Node = DAGNode.CreateBinary("|", node1, node2);
                        }
                        semanticStack.Push(sv);
                    }
                    break;
                case IlOpcode.Xor:
                    {
                        SemanticValue v2 = semanticStack.Pop();
                        SemanticValue v1 = semanticStack.Pop();
                        SemanticValue sv = new SemanticValue();
                        sv.Type = GetIntegerCalcResultType(v1, v2);
                        if (v1.IsConst && v2.IsConst)
                        {
                            sv.IsConst = true;
                            sv.IntegerVal = v1.IntegerVal ^ v2.IntegerVal;
                        }
                        else
                        {
                            DAGNode node1 = BuildCastExpression(sv.Type, v1);
                            DAGNode node2 = BuildCastExpression(sv.Type, v2);
                            sv.Node = DAGNode.CreateBinary("^", node1, node2);
                        }
                        semanticStack.Push(sv);
                    }
                    break;
                case IlOpcode.Shl:
                    {
                        SemanticValue v2 = semanticStack.Pop();
                        SemanticValue v1 = semanticStack.Pop();
                        SemanticValue sv = new SemanticValue();
                        sv.Type = v1.Type;
                        if (v1.IsConst && v2.IsConst)
                        {
                            sv.IsConst = true;
                            sv.IntegerVal = v1.IntegerVal << (int)v2.IntegerVal;
                        }
                        else
                        {
                            DAGNode node1 = v1.Node;
                            DAGNode node2 = BuildCastExpression(BasicTypeInfo.Int32Info, v2);
                            sv.Node = DAGNode.CreateBinary("<<", node1, node2);
                        }
                        semanticStack.Push(sv);
                    }
                    break;
                case IlOpcode.Shr:
                    {
                        SemanticValue v2 = semanticStack.Pop();
                        SemanticValue v1 = semanticStack.Pop();
                        SemanticValue sv = new SemanticValue();
                        sv.Type = v1.Type;
                        if (v1.IsConst && v2.IsConst)
                        {
                            sv.IsConst = true;
                            sv.IntegerVal = v1.IntegerVal >> (int)v2.IntegerVal;
                        }
                        else
                        {
                            DAGNode node1 = v1.Node;
                            DAGNode node2 = BuildCastExpression(BasicTypeInfo.Int32Info, v2);
                            sv.Node = DAGNode.CreateBinary(">>", node1, node2);
                        }
                        semanticStack.Push(sv);
                    }
                    break;
                case IlOpcode.Shr_Un:
                    {
                        SemanticValue v2 = semanticStack.Pop();
                        SemanticValue v1 = semanticStack.Pop();
                        SemanticValue sv = new SemanticValue();
                        sv.Type = v1.Type;
                        if (v1.IsConst && v2.IsConst)
                        {
                            sv.IsConst = true;
                            sv.IntegerVal = v1.IntegerVal >> (int)v2.IntegerVal;
                        }
                        else
                        {
                            DAGNode node1 = v1.Node;
                            DAGNode node2 = BuildCastExpression(BasicTypeInfo.Int32Info, v2);
                            sv.Node = DAGNode.CreateBinary(">>", node1, node2);
                        }
                        semanticStack.Push(sv);
                    }
                    break;
                case IlOpcode.Neg:
                    {
                        SemanticValue v = semanticStack.Pop();
                        SemanticValue sv = new SemanticValue();
                        sv.Type = v.Type;
                        if (v.IsConst)
                        {
                            sv.IsConst = true;
                            sv.IntegerVal = -v.IntegerVal;
                        }
                        else
                        {
                            sv.Node = DAGNode.CreateUnary("-", v.Node);
                        }
                        semanticStack.Push(sv);
                    }
                    break;
                case IlOpcode.Not:
                    {
                        SemanticValue v = semanticStack.Pop();
                        SemanticValue sv = new SemanticValue();
                        sv.Type = v.Type;
                        if (v.IsConst)
                        {
                            sv.IsConst = true;
                            sv.IntegerVal = ~v.IntegerVal;
                        }
                        else
                        {
                            sv.Node = DAGNode.CreateUnary("~", v.Node);
                        }
                        semanticStack.Push(sv);
                    }
                    break;
                case IlOpcode.Conv_I:
                    {
                        EvaluateConversion(BasicTypeInfo.IntPtrInfo);
                    }
                    break;
                case IlOpcode.Conv_I1:
                    {
                        EvaluateConversion(BasicTypeInfo.SByteInfo);
                    }
                    break;
                case IlOpcode.Conv_I2:
                    {
                        EvaluateConversion(BasicTypeInfo.Int16Info);
                    }
                    break;
                case IlOpcode.Conv_I4:
                    {
                        EvaluateConversion(BasicTypeInfo.Int32Info);
                    }
                    break;
                case IlOpcode.Conv_I8:
                    {
                        EvaluateConversion(BasicTypeInfo.Int64Info);
                    }
                    break;
                case IlOpcode.Conv_U:
                    {
                        EvaluateConversion(BasicTypeInfo.UIntPtrInfo);
                    }
                    break;
                case IlOpcode.Conv_U1:
                    {
                        EvaluateConversion(BasicTypeInfo.ByteInfo);
                    }
                    break;
                case IlOpcode.Conv_U2:
                    {
                        EvaluateConversion(BasicTypeInfo.UInt16Info);
                    }
                    break;
                case IlOpcode.Conv_U4:
                    {
                        EvaluateConversion(BasicTypeInfo.UInt32Info);
                    }
                    break;
                case IlOpcode.Conv_U8:
                    {
                        EvaluateConversion(BasicTypeInfo.UInt64Info);
                    }
                    break;
                case IlOpcode.Conv_R_Un:
                    {
                        EvaluateConversion(BasicTypeInfo.SingleInfo);
                    }
                    break;
                case IlOpcode.Conv_R4:
                    {
                        EvaluateConversion(BasicTypeInfo.SingleInfo);
                    }
                    break;
                case IlOpcode.Conv_R8:
                    {
                        EvaluateConversion(BasicTypeInfo.DoubleInfo);
                    }
                    break;
                case IlOpcode.Conv_Ovf_I:
                    {
                        EvaluateConversion(BasicTypeInfo.IntPtrInfo);
                    }
                    break;
                case IlOpcode.Conv_Ovf_I1:
                    {
                        EvaluateConversion(BasicTypeInfo.SByteInfo);
                    }
                    break;
                case IlOpcode.Conv_Ovf_I2:
                    {
                        EvaluateConversion(BasicTypeInfo.Int16Info);
                    }
                    break;
                case IlOpcode.Conv_Ovf_I4:
                    {
                        EvaluateConversion(BasicTypeInfo.Int32Info);
                    }
                    break;
                case IlOpcode.Conv_Ovf_I8:
                    {
                        EvaluateConversion(BasicTypeInfo.Int64Info);
                    }
                    break;
                case IlOpcode.Conv_Ovf_I_Un:
                    {
                        EvaluateConversion(BasicTypeInfo.IntPtrInfo);
                    }
                    break;
                case IlOpcode.Conv_Ovf_I1_Un:
                    {
                        EvaluateConversion(BasicTypeInfo.SByteInfo);
                    }
                    break;
                case IlOpcode.Conv_Ovf_I2_Un:
                    {
                        EvaluateConversion(BasicTypeInfo.Int16Info);
                    }
                    break;
                case IlOpcode.Conv_Ovf_I4_Un:
                    {
                        EvaluateConversion(BasicTypeInfo.Int32Info);
                    }
                    break;
                case IlOpcode.Conv_Ovf_I8_Un:
                    {
                        EvaluateConversion(BasicTypeInfo.Int64Info);
                    }
                    break;
                case IlOpcode.Conv_Ovf_U:
                    {
                        EvaluateConversion(BasicTypeInfo.UIntPtrInfo);
                    }
                    break;
                case IlOpcode.Conv_Ovf_U1:
                    {
                        EvaluateConversion(BasicTypeInfo.ByteInfo);
                    }
                    break;
                case IlOpcode.Conv_Ovf_U2:
                    {
                        EvaluateConversion(BasicTypeInfo.UInt16Info);
                    }
                    break;
                case IlOpcode.Conv_Ovf_U4:
                    {
                        EvaluateConversion(BasicTypeInfo.UInt32Info);
                    }
                    break;
                case IlOpcode.Conv_Ovf_U8:
                    {
                        EvaluateConversion(BasicTypeInfo.UInt64Info);
                    }
                    break;
                case IlOpcode.Conv_Ovf_U_Un:
                    {
                        EvaluateConversion(BasicTypeInfo.UIntPtrInfo);
                    }
                    break;
                case IlOpcode.Conv_Ovf_U1_Un:
                    {
                        EvaluateConversion(BasicTypeInfo.ByteInfo);
                    }
                    break;
                case IlOpcode.Conv_Ovf_U2_Un:
                    {
                        EvaluateConversion(BasicTypeInfo.UInt16Info);
                    }
                    break;
                case IlOpcode.Conv_Ovf_U4_Un:
                    {
                        EvaluateConversion(BasicTypeInfo.UInt32Info);
                    }
                    break;
                case IlOpcode.Conv_Ovf_U8_Un:
                    {
                        EvaluateConversion(BasicTypeInfo.UInt64Info);
                    }
                    break;
                case IlOpcode.Castclass:
                    {
                        EvaluateCast(il);
                    }
                    break;
                case IlOpcode.Box:
                    {
                        EvaluateCast(il);
                    }
                    break;
                case IlOpcode.Unbox_Any:
                    {
                        EvaluateCast(il);
                    }
                    break;
                case IlOpcode.Unbox:
                    {
                        EvaluateCast(il);
                    }
                    break;
                case IlOpcode.Isinst:
                    {
                        EvaluateAs(il);
                    }
                    break;
                case IlOpcode.Localloc:
                    {
                        SemanticValue size = semanticStack.Pop();
                        SemanticValue addr = new SemanticValue();
                        addr.Type = ArrayTypeInfo.Create(BasicTypeInfo.ByteInfo, 1);
                        addr.IntegerVal = 12345678;
                        semanticStack.Push(addr);
                    }
                    break;
                case IlOpcode.Initobj:
                    {
                        SemanticValue v = semanticStack.Pop();
                        il.Csharps.Add(DAGNode.CreateBinary(true, "=", v.Node, DAGNode.CreateUnary("new()", DAGNode.CreateLeaf(il.Value))));
                    }
                    break;
                case IlOpcode.Cpobj:
                    {
                        SemanticValue v2 = semanticStack.Pop();
                        SemanticValue v1 = semanticStack.Pop();
                        il.Csharps.Add(DAGNode.CreateBinary(true, "=", v1.Node, v2.Node));
                    }
                    break;
                case IlOpcode.Initblk:
                    {
                        SemanticValue len = semanticStack.Pop();
                        SemanticValue val = semanticStack.Pop();
                        SemanticValue addr = semanticStack.Pop();
                    }
                    break;
                case IlOpcode.Cpblk:
                    {
                        SemanticValue len = semanticStack.Pop();
                        SemanticValue v2 = semanticStack.Pop();
                        SemanticValue v1 = semanticStack.Pop();
                        il.Csharps.Add(DAGNode.CreateTernary(true, "Array::Copy", v2.Node, v1.Node, len.Node));
                    }
                    break;
                case IlOpcode.Sizeof:
                    {
                        SemanticValue sv = new SemanticValue();
                        sv.Type = BasicTypeInfo.UInt32Info;
                        sv.Node = DAGNode.CreateUnary("sizeof", DAGNode.CreateLeaf(il.Value));
                        semanticStack.Push(sv);
                    }
                    break;
                case IlOpcode.Endfinally:
                    {
                        return 4;
                    }
                case IlOpcode.Leave:
                case IlOpcode.Leave_S:
                    {
                        il.Csharps.Add(DAGNode.CreateUnary(true, "goto", DAGNode.CreateLeaf(il.Value)));
                        return 4;
                    }
                case IlOpcode.Endfilter:
                    {
                        SemanticValue v = semanticStack.Pop();
                        return 4;
                    }
                case IlOpcode.Throw:
                    {
                        SemanticValue v = semanticStack.Pop();
                        il.Csharps.Add(DAGNode.CreateUnary(true, "throw", v.Node));
                        return 4;
                    }
                case IlOpcode.Rethrow:
                    {
                        return 4;
                    }
                case IlOpcode.Unaligned:
                    {
                    }
                    break;
                case IlOpcode.Volatile:
                    {
                    }
                    break;
                case IlOpcode.Tailcall:
                    {
                    }
                    break;
                case IlOpcode.Constrained:
                    {
                    }
                    break;
                case IlOpcode.Ckfinite:
                    {
                    }
                    break;
                case IlOpcode.Refanytype:
                    {
                    }
                    break;
                case IlOpcode.Refanyval:
                    {
                    }
                    break;
                case IlOpcode.Mkrefany:
                    {
                    }
                    break;
                case IlOpcode.Readonly:
                    {
                    }
                    break;
                case IlOpcode.Arglist:
                    {
                    }
                    break;
                case IlOpcode.Prefix7:
                case IlOpcode.Prefix6:
                case IlOpcode.Prefix5:
                case IlOpcode.Prefix4:
                case IlOpcode.Prefix3:
                case IlOpcode.Prefix2:
                case IlOpcode.Prefix1:
                case IlOpcode.Prefixref:
                    {
                    }
                    break;
            }
            return 0;
        }
        private void EvaluateConversion(TypeInfo type)
        {
            SemanticValue v = semanticStack.Pop();
            SemanticValue sv = new SemanticValue();
            sv.Type = type;
            if (v.IsConst)
            {
                sv.IsConst = true;
                sv.IntegerVal = v.IntegerVal;
            }
            else
            {
                sv.Node = BuildCastExpression(type, v);
            }
            semanticStack.Push(sv);
        }
        private void EvaluateCast(IlIns il)
        {
            SemanticValue v = semanticStack.Pop();
            SemanticValue sv = new SemanticValue();
            TypeInfo type = (il.Operand as TypeSpecOperand).TypeSpec;
            sv.Type = type;
            sv.Node = BuildCastExpression(type, v);
            semanticStack.Push(sv);
        }
        private void EvaluateAs(IlIns il)
        {
            SemanticValue obj = semanticStack.Pop();
            SemanticValue sv = new SemanticValue();
            TypeInfo type = (il.Operand as TypeSpecOperand).TypeSpec;
            sv.Type = type;
            if (type.IsRef)
                sv.Node = DAGNode.CreateBinary("as", DAGNode.CreateLeaf(type.TypeDefClause), obj.Node);
            else
                sv.Node = BuildCastExpression(type, obj);
            semanticStack.Push(sv);
        }
        private void EvaluateCall(IlIns il)
        {
            MethodOperand val = il.Operand as MethodOperand;
            string mname = val.Name;
            int kind = val.MethodKind;
            string specName = "";
            if (val.IsSpecialMember)
            {
                specName = val.SpecialMemberName;
            }

            int argNum = val.Args.Count;
            if (val.IsInstance)
                argNum++;
            SemanticValue[] svs = new SemanticValue[argNum];
            for (int i = argNum - 1; i >= 0; i--)
            {
                svs[i] = semanticStack.Pop();
            }
            SemanticValue sv = new SemanticValue();
            sv.Type = val.RetType;
            if (val.IsInstance)
            {
                DAGNode objNode = null;
                if (val.TypeSpec.IsInterface)
                    objNode = BuildCastExpression(val.TypeSpec, svs[0]);
                else
                    objNode = svs[0].Node;
                string opstr = ".";
                if (svs[0].IsThis)
                {
                    if (svs[0].Type != val.TypeSpec && (OwnerMethod.Name==mname || OwnerMethod.ExistsOverride(mname)))
                    {
                        objNode = DAGNode.CreateLeaf(val.TypeSpec.TypeClause);
                        opstr = "::";
                    }
                    else
                    {
                        opstr = "->";
                    }
                }
                else if (svs[0].Type.IsRef)
                {
                    opstr = "->";
                }

                if (kind == MethodInfo.GetMethod)
                {       
                    if (argNum == 1)
                    {
                        DAGNode node = DAGNode.CreateBinary(false, opstr, objNode, DAGNode.CreateLeaf(specName));
                        sv.Node = node;
                    }
                    else
                    {
                        DAGNode[] nodes = new DAGNode[argNum];
                        nodes[0] = objNode;
                        for (int ix = 1; ix < argNum; ix++)
                        {
                            nodes[ix] = BuildArgumentCastExpression(val.Args[ix - 1].Type, svs[ix]);
                        }
                        DAGNode node = DAGNode.CreateMultiple(false, "[]", nodes);
                        sv.Node = node;
                    }
                }
                else if (kind == MethodInfo.SetMethod)
                {
                    if (argNum == 2)
                    {
                        DAGNode node = DAGNode.CreateTernary(true, opstr, objNode, DAGNode.CreateLeaf(specName), BuildCastExpression(val.Args[0].Type, svs[1]));
                        sv.Node = node;
                    }
                    else
                    {
                        DAGNode[] nodes = new DAGNode[argNum];
                        nodes[0] = objNode;
                        for (int ix = 1; ix < argNum; ix++)
                        {
                            nodes[ix] = BuildArgumentCastExpression(val.Args[ix - 1].Type, svs[ix]);
                        }
                        DAGNode node = DAGNode.CreateMultiple(true, "[]=", nodes);
                        sv.Node = node;
                    }
                }
                else if (kind == MethodInfo.AddMethod && argNum == 2)
                {
                    DAGNode node = DAGNode.CreateTernary(true, opstr + "+=", objNode, DAGNode.CreateLeaf(specName), BuildCastExpression(val.Args[0].Type, svs[1]));
                    sv.Node = node;
                }
                else if (kind == MethodInfo.RemoveMethod && argNum == 2)
                {
                    DAGNode node = DAGNode.CreateTernary(true, opstr + "-=", objNode, DAGNode.CreateLeaf(specName), BuildCastExpression(val.Args[0].Type, svs[1]));
                    sv.Node = node;
                }
                else if (kind == MethodInfo.ctorMethod || kind == MethodInfo.cctorMethod)
                {
                    if (val.TypeSpec.IsRef)
                    {
                        if (argNum == 1)
                        {
                            DAGNode[] nodes = new DAGNode[argNum];
                            nodes[0] = DAGNode.CreateLeaf(val.TypeSpec.TypeClause);
                            for (int ix = 1; ix < argNum; ix++)
                            {
                                nodes[ix] = BuildArgumentCastExpression(val.Args[ix - 1].Type, svs[ix]);
                            }
                            DAGNode node = DAGNode.CreateMultiple(true, "()", nodes);
                            sv.Node = node;
                            sv.Node.IsComment = true;
                        }
                        else
                        {
                            if (val.TypeSpec.TypeClause != OwnerMethod.ClassInfo.FullName)
                            {
                                DAGNode[] nodes = new DAGNode[argNum];
                                nodes[0] = DAGNode.CreateLeaf(val.TypeSpec.TypeClause);
                                for (int ix = 1; ix < argNum; ix++)
                                {
                                    nodes[ix] = BuildArgumentCastExpression(val.Args[ix - 1].Type, svs[ix]);
                                }
                                DAGNode node = DAGNode.CreateMultiple(false, "()", nodes);
                                sv.Node = node;
                                OwnerMethod.InitializationList.Add(sv.Node);
                            }
                            else
                            {
                                DAGNode[] nodes = new DAGNode[argNum+1];
                                nodes[0] = DAGNode.CreateLeaf(val.TypeSpec.TypeClause);
                                nodes[1] = DAGNode.CreateLeaf(OwnerMethod.ClassInfo.ClassName);
                                for (int ix = 1; ix < argNum; ix++)
                                {
                                    nodes[ix+1] = BuildArgumentCastExpression(val.Args[ix - 1].Type, svs[ix]);
                                }
                                DAGNode node = DAGNode.CreateMultiple(true, "::()", nodes);
                                sv.Node = node;
                            }
                        }
                    }
                    else
                    {
                        DAGNode[] nodes = new DAGNode[argNum];
                        nodes[0] = DAGNode.CreateLeaf(val.TypeSpec.TypeClause);
                        for (int ix = 1; ix < argNum; ix++)
                        {
                            nodes[ix] = BuildArgumentCastExpression(val.Args[ix - 1].Type, svs[ix]);
                        }
                        DAGNode node = DAGNode.CreateMultiple(true, "()", nodes);
                        string id = DAGNode.GetID(objNode);
                        if(id.Length>0)
                            node.SetID(id, svs[0].Type);
                        sv.Node = node;
                    }
                }
                else if (mname == "Invoke" && val.TypeSpec.IsDelegate)
                {
                    DAGNode[] nodes = new DAGNode[argNum];
                    nodes[0] = objNode;
                    for (int ix = 1; ix < argNum; ix++)
                    {
                        nodes[ix] = BuildArgumentCastExpression(val.Args[ix - 1].Type, svs[ix]);
                    }
                    DAGNode node = DAGNode.CreateMultiple(true, "()", nodes);
                    sv.Node = node;
                }
                else
                {
                    DAGNode[] nodes = new DAGNode[argNum + 1];
                    nodes[0] = objNode;
                    nodes[1] = DAGNode.CreateLeaf(mname);
                    for (int ix = 1; ix < argNum; ix++)
                    {
                        nodes[ix + 1] = BuildArgumentCastExpression(val.Args[ix - 1].Type, svs[ix]);
                    }
                    DAGNode node = DAGNode.CreateMultiple(true, opstr + "()", nodes);
                    sv.Node = node;
                }
            }
            else if (!val.TypeSpec.IsUndefined)
            {
                if (val.TypeSpec == BasicTypeInfo.System_Type && mname == "GetTypeFromHandle")
                {
                    DAGNode node = DAGNode.CreateUnary("typeid", svs[0].Node);
                    sv.Node = node;
                }
                else if (val.TypeSpec == BasicTypeInfo.System_Runtime_CompilerServices_RuntimeHelpers && mname == "InitializeArray")
                {
                    DAGNode node1 = svs[0].Node;
                    DAGNode node2 = svs[1].Node;

                    FieldInfo info = Context.Ref.FindOperandField(node2.Operand as FieldOperand);
                    if (info!=null && info.At.Length > 0)
                    {
                        if (Context.Ref.DataDecls.ContainsKey(info.At))
                            node2 = DAGNode.CreateLeaf(Context.Ref.DataDecls[info.At]);
                        else
                            node2 = DAGNode.CreateLeaf("gcnew array<System::Byte>{0}");
                    }
                    else
                    {
                        node2 = DAGNode.CreateLeaf("gcnew array<System::Byte>{0}");
                    }
                    TypeInfo ti = svs[0].Type;
                    if (ti.IsArray)
                    {
                        ti = ti.UnderlyingType;
                        string type = ti.TypeClause;
                        int doti = type.LastIndexOf("::");
                        if (doti > 0)
                            type = type.Substring(doti + 2);
                        DAGNode[] nodes = new DAGNode[3];
                        nodes[0] = DAGNode.CreateLeaf("BytesTo" + type + "s");
                        nodes[1] = node2;
                        nodes[2] = node1;
                        sv.Node = DAGNode.CreateMultiple(true, "()", nodes);
                    }
                    else
                        sv.Node = DAGNode.CreateBinary(true, "=", node1, node2);
                }
                else if (kind == MethodInfo.GetMethod)
                {
                    if (argNum == 0)
                    {
                        DAGNode node = DAGNode.CreateBinary(false, "::", DAGNode.CreateLeaf(val.TypeSpec.TypeClause), DAGNode.CreateLeaf(specName));
                        sv.Node = node;
                    }
                    else
                    {
                        DAGNode[] nodes = new DAGNode[argNum + 1];
                        nodes[0] = DAGNode.CreateLeaf(val.TypeSpec.TypeClause);
                        for (int ix = 0; ix < argNum; ix++)
                        {
                            nodes[ix + 1] = BuildArgumentCastExpression(val.Args[ix].Type, svs[ix]);
                        }
                        DAGNode node = DAGNode.CreateMultiple(false, "[]", nodes);
                        sv.Node = node;
                    }
                }
                else if (kind == MethodInfo.SetMethod)
                {
                    if (argNum == 1)
                    {
                        DAGNode node = DAGNode.CreateTernary(true, "::", DAGNode.CreateLeaf(val.TypeSpec.TypeClause), DAGNode.CreateLeaf(specName), BuildCastExpression(val.Args[0].Type, svs[0]));
                        sv.Node = node;
                    }
                    else
                    {
                        DAGNode[] nodes = new DAGNode[argNum + 1];
                        nodes[0] = DAGNode.CreateLeaf(val.TypeSpec.TypeClause);
                        for (int ix = 0; ix < argNum; ix++)
                        {
                            nodes[ix + 1] = BuildArgumentCastExpression(val.Args[ix].Type, svs[ix]);
                        }
                        DAGNode node = DAGNode.CreateMultiple(true, "[]=", nodes);
                        sv.Node = node;
                    }
                }
                else if (kind == MethodInfo.AddMethod && argNum == 1)
                {
                    DAGNode node = DAGNode.CreateTernary(true, "::+=", DAGNode.CreateLeaf(val.TypeSpec.TypeClause), DAGNode.CreateLeaf(specName), BuildCastExpression(val.Args[0].Type, svs[0]));
                    sv.Node = node;
                }
                else if (kind == MethodInfo.RemoveMethod && argNum == 1)
                {
                    DAGNode node = DAGNode.CreateTernary(true, "::-=", DAGNode.CreateLeaf(val.TypeSpec.TypeClause), DAGNode.CreateLeaf(specName), BuildCastExpression(val.Args[0].Type, svs[0]));
                    sv.Node = node;
                }
                else if (mname.StartsWith("op_"))
                {
                    if (mname == "op_Explicit")
                    {
                        DAGNode node = null;
                        if (val.TypeSpec == val.Args[0].Type)
                            node = DAGNode.CreateBinary("()", DAGNode.CreateLeaf(val.RetType.TypeDefClause), BuildCastExpression(val.Args[0].Type, svs[0]));
                        else
                            node = DAGNode.CreateBinary("()", DAGNode.CreateLeaf(val.TypeSpec.TypeDefClause), BuildCastExpression(val.Args[0].Type, svs[0]));
                        sv.Node = node;
                    }
                    else if (mname == "op_Implicit")
                    {
                        DAGNode node = BuildCastExpression(val.Args[0].Type, svs[0]);
                        sv.Node = node;
                    }
                    else
                    {
                        string opt = GetOperator(mname);
                        if (argNum == 1)
                        {
                            DAGNode node = DAGNode.CreateUnary(opt, BuildCastExpression(val.Args[0].Type, svs[0]));
                            sv.Node = node;
                        }
                        else if (argNum == 2)
                        {
                            DAGNode node = DAGNode.CreateBinary(opt, BuildCastExpression(val.Args[0].Type, svs[0]), BuildCastExpression(val.Args[1].Type, svs[1]));
                            sv.Node = node;
                        }
                        else
                        {
                            //error
                        }
                    }
                }
                else
                {
                    DAGNode[] nodes = new DAGNode[argNum + 2];
                    nodes[0] = DAGNode.CreateLeaf(val.TypeSpec.TypeClause);
                    nodes[1] = DAGNode.CreateLeaf(mname);
                    for (int ix = 0; ix < argNum; ix++)
                    {
                        nodes[ix + 2] = BuildArgumentCastExpression(val.Args[ix].Type, svs[ix]);
                    }
                    DAGNode node = DAGNode.CreateMultiple(true, "::()", nodes);
                    sv.Node = node;
                }
            }
            else
            {
                DAGNode[] nodes = new DAGNode[argNum + 1];
                nodes[0] = DAGNode.CreateLeaf(mname);
                for (int ix = 0; ix < argNum; ix++)
                {
                    nodes[ix + 1] = BuildArgumentCastExpression(val.Args[ix].Type, svs[ix]);
                }
                DAGNode node = DAGNode.CreateMultiple(true, "()", nodes);
                sv.Node = node;
            }
            if (val.RetType.IsVoid)
            {
                if (val.IsDispose || val.IsDisposeWithParam)
                    sv.Node.IsComment = true;
                else if (val.IsFinalize)
                    sv.Node.IsComment = true;
                if(sv.Node.IsStatement)
                    il.Csharps.Add(sv.Node);
            }
            else
            {
                string tvar = NewAlias(val.RetType);
                DAGNode node = sv.Node;
                node.SetID(tvar, val.RetType);
                il.Csharps.Add(node);

                sv.Type = val.RetType;
                sv.Node = DAGNode.CreateLeaf(tvar);
                semanticStack.Push(sv);
            }
        }
        private void EvaluateIndCall(IlIns il)
        {
            SemanticValue ptr = semanticStack.Pop();
            SigOperand val = il.Operand as SigOperand;
            int argNum = val.Args.Count;
            if (val.IsInstance)
                argNum++;
            SemanticValue[] svs = new SemanticValue[argNum];
            for (int i = argNum - 1; i >= 0; i--)
            {
                svs[i] = semanticStack.Pop();
            }
            SemanticValue sv = new SemanticValue();
            sv.Type = val.RetType;
            if (val.IsInstance)
            {
                string opstr = ".";
                if (svs[0].Type.IsRef || svs[0].IsThis)
                    opstr = "->";

                DAGNode[] nodes = new DAGNode[argNum + 1];
                nodes[0] = svs[0].Node;
                nodes[1] = ptr.Node;
                for (int ix = 1; ix < argNum; ix++)
                {
                    nodes[ix + 1] = BuildArgumentCastExpression(val.Args[ix - 1].Type, svs[ix]);
                }
                DAGNode node = DAGNode.CreateMultiple(true, opstr + "*()", nodes);
                sv.Node = node;
            }
            else
            {
                DAGNode[] nodes = new DAGNode[argNum + 1];
                nodes[0] = ptr.Node;
                for (int ix = 0; ix < argNum; ix++)
                {
                    nodes[ix + 1] = BuildArgumentCastExpression(val.Args[ix].Type, svs[ix]);
                }
                DAGNode node = DAGNode.CreateMultiple(true, "*()", nodes);
                sv.Node = node;
            }
            if (val.RetType.IsVoid)
                il.Csharps.Add(sv.Node);
            else
            {
                string tvar = NewAlias(val.RetType);
                DAGNode node = sv.Node;
                node.SetID(tvar, val.RetType);
                il.Csharps.Add(node);

                sv.Type = val.RetType;
                sv.Node = DAGNode.CreateLeaf(tvar);
                semanticStack.Push(sv);
            }
        }
        private void EvaluateNewObj(IlIns il)
        {
            MethodOperand val = il.Operand as MethodOperand;
            int argNum = val.Args.Count;
            SemanticValue[] svs = new SemanticValue[argNum];
            for (int i = argNum - 1; i >= 0; i--)
            {
                svs[i] = semanticStack.Pop();
            }
            DAGNode[] nodes = null;
            if (argNum == 2 && val.Args[0].Type==BasicTypeInfo.ObjectInfo && val.Args[1].Type == BasicTypeInfo.IntPtrInfo && svs[1].Node.Operand is MethodOperand)
            {
                MethodOperand arg = svs[1].Node.Operand as MethodOperand;
                if (svs[0].IsConst && svs[0].IntegerVal == 0)//静态成员委托
                {
                    nodes = new DAGNode[2];
                    nodes[0] = DAGNode.CreateLeaf(val.TypeSpec.TypeClause);
                    nodes[1] = DAGNode.CreateBinary("::", DAGNode.CreateLeaf(arg.TypeSpec.TypeClause), DAGNode.CreateLeaf(arg.Name));
                }
                else//实例成员委托
                {
                    nodes = new DAGNode[3];
                    nodes[0] = DAGNode.CreateLeaf(val.TypeSpec.TypeClause);
                    nodes[1] = svs[0].Node;
                    nodes[2] = DAGNode.CreateBinary("&::", DAGNode.CreateLeaf(arg.TypeSpec.TypeClause), DAGNode.CreateLeaf(arg.Name));
                }
            }
            else
            {
                nodes = new DAGNode[argNum + 1];
                nodes[0] = DAGNode.CreateLeaf(val.TypeSpec.TypeClause);
                for (int ix = 0; ix < argNum; ix++)
                {
                    nodes[ix + 1] = BuildArgumentCastExpression(val.Args[ix].Type, svs[ix]);
                }
            }
            string tvar = NewAlias(val.TypeSpec);
            if (val.TypeSpec.IsRef)
            {
                DAGNode node = DAGNode.CreateMultiple(true, "new()", nodes);
                node.SetID(tvar, val.TypeSpec);
                il.Csharps.Add(node);
            }
            else
            {
                DAGNode node = DAGNode.CreateMultiple(true, "()", nodes);
                node.SetID(tvar, val.TypeSpec);
                il.Csharps.Add(node);
            }

            SemanticValue sv = new SemanticValue();
            sv.Type = val.TypeSpec;
            sv.Node = DAGNode.CreateLeaf(tvar);
            semanticStack.Push(sv);
        }
        private void EvaluateNewArr(IlIns il)
        {
            SemanticValue v = semanticStack.Pop();
            SemanticValue sv = new SemanticValue();

            TypeInfo ti = ArrayTypeInfo.Create((il.Operand as TypeSpecOperand).TypeSpec, 1);
            string tvar = NewAlias(ti);
            DAGNode sizeNode = BuildCastExpression(BasicTypeInfo.UInt32Info, v);
            DAGNode node = DAGNode.CreateBinary(false, "new[]", DAGNode.CreateLeaf((il.Operand as TypeSpecOperand).TypeSpec.TypeDefClause), sizeNode);
            node.SetID(tvar, ti);
            il.Csharps.Add(node);

            sv.Type = ti;
            sv.Node = DAGNode.CreateLeaf(tvar);
            semanticStack.Push(sv);
        }
        private void EvaluateRet(IlIns il)
        {
            if (!OwnerMethod.RetType.IsVoid)
            {
                SemanticValue v = semanticStack.Pop();
                if (v.IsConst)
                {
                    if (OwnerMethod.RetType.IsBoolean)
                    {
                        if (v.IntegerVal != 0)
                            il.Csharps.Add(DAGNode.CreateUnary(true, "return", DAGNode.CreateLeaf("true")));
                        else
                            il.Csharps.Add(DAGNode.CreateUnary(true, "return", DAGNode.CreateLeaf("false")));
                    }
                    else
                    {
                        if (OwnerMethod.RetType.IsValue || v.IntegerVal != 0)
                        {
                            DAGNode node = BuildCastExpression(OwnerMethod.RetType, v);
                            il.Csharps.Add(DAGNode.CreateUnary(true, "return", node));
                        }
                        else
                        {
                            il.Csharps.Add(DAGNode.CreateUnary(true, "return", DAGNode.CreateLeaf("nullptr")));
                        }
                    }
                }
                else
                {
                    DAGNode node = BuildCastExpression(OwnerMethod.RetType, v);
                    il.Csharps.Add(DAGNode.CreateUnary(true, "return", node));
                }
            }
            else
            {
                il.Csharps.Add(DAGNode.CreateLeaf(true, "return"));
            }
        }
    }
}
