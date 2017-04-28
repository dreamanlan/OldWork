using System;
using System.Collections.Generic;
using System.Text;
using System.Reflection.Emit;
using System.Globalization;

namespace IL2CPP
{
    public partial class MethodBody
    {
        public MethodInfo OwnerMethod
        {
            get { return ownerMethod; }
            set { ownerMethod = value; }
        }
        public List<Param> Locals
        {
            get { return locals; }
        }
        public SortedList<long, IlIns> IlLines
        {
            get { return ilLines; }
        }
        public string CurLabel
        {
            get { return curLabel; }
            set { curLabel = value; }
        }
        public static IlIns TempIl
        {
            get { return tempIl; }
        }

        public void AddEHClause(string opcode)
        {
            lastLabelValue++;
            IlIns il = new IlIns();
            il.Opcode = opcode;
            il.LabelValue = lastLabelValue;
            ilLines.Add(lastLabelValue, il);

            IlOpcode op = IlOpcodes.GetEH(opcode);
            switch (op)
            {
                case IlOpcode.TRY:
                    {
                        curEHBlock = curEHNode.AddNewBlock();
                        curEHNode = curEHBlock.TryNode;
                        curEHNode.ScopeStart = lastLabelValue;
                    }
                    break;
                case IlOpcode.FINALLY:
                    {
                        curEHNode = curEHBlock.AddNewFinally();
                        curEHNode.ScopeStart = lastLabelValue;
                    }
                    break;
                case IlOpcode.FAULT:
                    {
                        curEHNode = curEHBlock.AddNewFault();
                        curEHNode.ScopeStart = lastLabelValue;
                    }
                    break;
                case IlOpcode.FILTER:
                    {
                        curEHNode = curEHBlock.AddNewFilter();
                        curEHNode.ScopeStart = lastLabelValue;
                    }
                    break;
                case IlOpcode.ENDTRY:
                case IlOpcode.ENDCATCH:
                case IlOpcode.ENDFINALLY:
                case IlOpcode.ENDFAULT:
                case IlOpcode.ENDFILTER:
                    {
                        curEHNode.ScopeEnd = lastLabelValue;
                        curEHBlock = curEHNode.EncloseBlock;
                        curEHNode = curEHBlock.EncloseNode;
                    }
                    break;
            }
        }
        public void AddCatch(TypeSpecOperand operand)
        {
            lastLabelValue++;
            IlIns il = new IlIns();
            il.Opcode = ".catch";
            il.Operand = operand;
            il.LabelValue = lastLabelValue;
            ilLines.Add(lastLabelValue, il);
            
            curEHNode = curEHBlock.AddNewFilter();
            curEHNode.ScopeStart = lastLabelValue;
        }
        public void AddIl()
        {
            long v = tempIl.LabelValue;
            if (v < 0)
            {
                v = lastLabelValue + 1;
                tempIl.LabelValue = v;
            }
            lastLabelValue = v;

            if (tempIl.Operand is SwitchOperand && !switches.Contains(tempIl.LabelValue))
            {
                switches.Add(tempIl.LabelValue);
            }

            ilLines.Add(v, tempIl);
            tempIl = new IlIns();
        }

        public void Decompile()
        {
            ResetDecompileInfo();
            BuildFlowGraph();
            AdjustFlowGraph();
            ResetDecompileInfo();
            ResetGraphNodeInfo();
            IlToCsharps();
            CheckSemantic();
        }

        private void ResetDecompileInfo()
        {
            semanticStack.Clear();
            varReferences.Clear();
            tempVars.Clear();
            tempVarIndex = 0;
            foreach (IlIns il in ilLines.Values)
            {
                il.Csharps.Clear();
            }
            OwnerMethod.InitializationList.Clear();
        }
        private void ResetGraphNodeInfo()
        {            
            flowGraph.Reset();
            for (; flowGraph.CurNode != null; flowGraph.Next())
            {
                FlowGraphNode node = flowGraph.CurNode;
                node.SemanticStacks.Clear();
                node.VarReferencesList.Clear();
            }
        }
        private void BuildFlowGraph()
        {
            flowGraph = new FlowGraph();
            FlowGraphNode curNode = null;
            FlowGraphNode prevNode = null;
            bool nextIsBlock = true;
            for (int i = 0; i < ilLines.Count; i++)
            {
                IlIns il = ilLines.Values[i];
                if (nextIsBlock)
                {
                    nextIsBlock = false;
                    FlowGraphNode node = flowGraph.NewNode(il.LabelValue);
                    curNode = node;
                    if (prevNode != null)
                        prevNode.AddNext(node);
                }
                else
                {
                    if (flowGraph.IsNode(il.LabelValue))
                    {
                        FlowGraphNode node = flowGraph[il.LabelValue];
                        curNode.EndLabelValue = GetPrevIlLabelValue(il.LabelValue);
                        curNode.AddNext(node);
                        curNode = node;
                    }
                }
                IlOpcode op0 = IlOpcodes.GetEH(il.Opcode);
                if (op0 != IlOpcode.Prefixref)
                {
                    switch (op0)
                    {
                        case IlOpcode.TRY:
                            {
                                FlowGraphNode node = flowGraph.NewNode(il.LabelValue);
                                if (curNode != null)
                                    curNode.AddNext(node);
                                curNode = node;
                            }
                            break;
                        case IlOpcode.CATCH:
                            {
                                FlowGraphNode node = flowGraph.NewNode(il.LabelValue);
                                curNode = node;
                            }
                            break;
                        case IlOpcode.FINALLY:
                            {
                                FlowGraphNode node = flowGraph.NewNode(il.LabelValue);
                                curNode = node;
                            }
                            break;
                        case IlOpcode.FILTER:
                            {
                                FlowGraphNode node = flowGraph.NewNode(il.LabelValue);
                                curNode = node;
                            }
                            break;
                        case IlOpcode.FAULT:
                            {
                                FlowGraphNode node = flowGraph.NewNode(il.LabelValue);
                                curNode = node;
                            }
                            break;
                        case IlOpcode.ENDTRY:
                        case IlOpcode.ENDCATCH:
                        case IlOpcode.ENDFINALLY:
                        case IlOpcode.ENDFILTER:
                        case IlOpcode.ENDFAULT:
                            {
                                curNode.EndLabelValue = il.LabelValue;
                                prevNode = null;
                                nextIsBlock = true;
                            }
                            break;
                    }
                }
                else
                {
                    OpCode op = IlOpcodes.Get(il.Opcode);
                    switch ((IlOpcode)op.Value)
                    {
                        case IlOpcode.Br:
                        case IlOpcode.Br_S:
                            {
                                long val = IlIns.LabelToValue(il.Value);
                                FlowGraphNode node = null;
                                if (val > il.LabelValue)
                                {
                                    node = flowGraph.NewNode(val);
                                    curNode.AddNext(node);
                                }
                                else
                                {
                                    long prevVal = GetPrevIlLabelValue(val);
                                    FlowGraphNode d = flowGraph.Find(val);
                                    node = flowGraph.Split(val, prevVal);
                                    if (curNode != d)
                                        curNode.AddNext(node);
                                    else
                                    {
                                        node.AddNext(node);
                                        curNode = node;
                                    }
                                }
                                curNode.EndLabelValue = il.LabelValue;
                                prevNode = null;
                                nextIsBlock = true;
                            }
                            break;
                        case IlOpcode.Brtrue:
                        case IlOpcode.Brfalse:
                        case IlOpcode.Brtrue_S:
                        case IlOpcode.Brfalse_S:
                        case IlOpcode.Beq_S:
                        case IlOpcode.Bge_S:
                        case IlOpcode.Bgt_S:
                        case IlOpcode.Ble_S:
                        case IlOpcode.Blt_S:
                        case IlOpcode.Bne_Un_S:
                        case IlOpcode.Bge_Un_S:
                        case IlOpcode.Bgt_Un_S:
                        case IlOpcode.Ble_Un_S:
                        case IlOpcode.Blt_Un_S:
                        case IlOpcode.Beq:
                        case IlOpcode.Bge:
                        case IlOpcode.Bgt:
                        case IlOpcode.Ble:
                        case IlOpcode.Blt:
                        case IlOpcode.Bne_Un:
                        case IlOpcode.Bge_Un:
                        case IlOpcode.Bgt_Un:
                        case IlOpcode.Ble_Un:
                        case IlOpcode.Blt_Un:
                            {
                                long val = IlIns.LabelToValue(il.Value);
                                FlowGraphNode node = null;
                                if (val > il.LabelValue)
                                {
                                    node = flowGraph.NewNode(val);
                                    curNode.AddNext(node);
                                }
                                else
                                {
                                    long prevVal = GetPrevIlLabelValue(val);
                                    FlowGraphNode d = flowGraph.Find(val);
                                    node = flowGraph.Split(val, prevVal);
                                    if (curNode != d)
                                        curNode.AddNext(node);
                                    else
                                    {
                                        node.AddNext(node);
                                        curNode = node;
                                    }
                                }
                                curNode.EndLabelValue = il.LabelValue;
                                prevNode = curNode;
                                nextIsBlock = true;
                            }
                            break;
                        case IlOpcode.Switch:
                            {
                                SwitchOperand opVal = il.Operand as SwitchOperand;
                                foreach (string label in opVal.Labels)
                                {
                                    long val = IlIns.LabelToValue(label);
                                    FlowGraphNode node = null;
                                    if (val > il.LabelValue)
                                    {
                                        node = flowGraph.NewNode(val);
                                        curNode.AddNext(node);
                                    }
                                    else
                                    {
                                        long prevVal = GetPrevIlLabelValue(val);
                                        FlowGraphNode d = flowGraph.Find(val);
                                        node = flowGraph.Split(val, prevVal);
                                        if (curNode != d)
                                            curNode.AddNext(node);
                                        else
                                        {
                                            node.AddNext(node);
                                            curNode = node;
                                        }
                                    }
                                }
                                curNode.EndLabelValue = il.LabelValue;
                                prevNode = curNode;
                                nextIsBlock = true;
                            }
                            break;
                        case IlOpcode.Ret:
                        case IlOpcode.Break:
                        case IlOpcode.Throw:
                        case IlOpcode.Rethrow:
                        case IlOpcode.Leave:
                        case IlOpcode.Leave_S:
                        case IlOpcode.Endfilter:
                        case IlOpcode.Endfinally:
                            {
                                curNode.EndLabelValue = il.LabelValue;
                                prevNode = null;
                                nextIsBlock = true;
                            }
                            break;
                    }
                }
            }
        }
        private void AdjustFlowGraph()
        {
            flowGraph.Reset();
            for (; flowGraph.CurNode != null; flowGraph.Next())
            {
                FlowGraphNode node = flowGraph.CurNode;
                int i = ilLines.Keys.IndexOf(node.LabelValue);
                for (; i < ilLines.Values.Count; i++)
                {
                    IlIns il = ilLines.Values[i];
                    if (il.LabelValue == node.LabelValue)
                    {
                        BeginGraphNode(node);
                    }
                    else if (il.LabelValue != node.LabelValue && flowGraph.IsNode(il.LabelValue))
                    {
                        //�н�����Ŀ�ʼ���ŷ����¿�ʼ�����쳣��������תĿ�굹�µĿ�
                        EndGraphNode(node, false);
                        break;
                    }
                    IlOpcode op0 = IlOpcodes.GetEH(il.Opcode);
                    if (op0 != IlOpcode.Prefixref)
                    {
                        EvaluateEH(op0, il, false);
                    }
                    else
                    {
                        OpCode op = IlOpcodes.Get(il.Opcode);
                        int type = EvaluateIl(op, il, false);
                        switch (type)
                        {
                            case -2://����������������ת����ǰ������֧Ŀ���Ͽ�
                                {
                                    long target = IlIns.LabelToValue(il.Value);
                                    if (flowGraph.IsNode(target))
                                    {
                                        FlowGraphNode n = flowGraph[target];
                                        node.DelNext(n);
                                    }
                                    EndGraphNode(node, false);
                                }
                                break;
                            case -1://��������������ת����ǰ�������һ��ָ�ʼ�Ŀ�Ͽ�
                                {
                                    if (i + 1 < ilLines.Values.Count)
                                    {
                                        if (flowGraph.IsNode(ilLines.Values[i + 1].LabelValue))
                                        {
                                            FlowGraphNode n = flowGraph[ilLines.Values[i + 1].LabelValue];
                                            node.DelNext(n);
                                        }
                                    }
                                    EndGraphNode(node, false);
                                }
                                break;
                            case 0://����ָ����
                                {
                                }
                                break;
                            case 1://��������ת
                            case 2://������ת
                            case 3://switch��֧
                                {
                                    EndGraphNode(node, false);
                                }
                                break;
                            case 4://���������
                                {
                                    EndGraphNode(node, false);
                                }
                                break;
                        }
                        if (type != 0)
                            break;
                    }
                }
            }
            //�ϲ��޷�֧��˳���
            flowGraph.Reset();
            for (; flowGraph.CurNode != null; flowGraph.Next())
            {
                FlowGraphNode node = flowGraph.CurNode;
                while(node.NextNodes.Count==1 && node.NextNodes[0].PrevNodes.Count==1)
                {
                    FlowGraphNode n = node.NextNodes[0];
                    int i = ilLines.Keys.IndexOf(node.EndLabelValue);
                    int j = ilLines.Keys.IndexOf(n.LabelValue);
                    if (i + 1 == j)
                    {
                        flowGraph.Combine(node, n);
                    }
                    else
                    {
                        break;
                    }
                }
            }
        }
        private void IlToCsharps()
        {
            foreach (long lv in switches)
            {
                FlowGraphNode n = flowGraph.Find(lv);
                if (n != null)
                {
                    switchBlocks[n.LabelValue] = n;
                }
            }
            flowGraph.Reset();
            for (; flowGraph.CurNode != null; flowGraph.Next())
            {
                FlowGraphNode node = flowGraph.CurNode;
                int i = ilLines.Keys.IndexOf(node.LabelValue);
                for (; i < ilLines.Values.Count; i++)
                {
                    IlIns il = ilLines.Values[i];
                    if (il.LabelValue == node.LabelValue)
                    {
                        BeginGraphNode(node);
                    }
                    else if (il.LabelValue != node.LabelValue && flowGraph.IsNode(il.LabelValue))
                    {
                        EndGraphNode(node, true);
                        break;
                    }
                    IlOpcode op0 = IlOpcodes.GetEH(il.Opcode);
                    if (op0 != IlOpcode.Prefixref)
                    {
                        EvaluateEH(op0, il, true);
                    }
                    else
                    {
                        OpCode op = IlOpcodes.Get(il.Opcode);
                        int type = EvaluateIl(op, il, true);                        
                    }
                }
            }
        }
        private void CheckSemantic()
        {
            for (int i=0; i < ilLines.Values.Count; i++)
            {
                IlIns il = ilLines.Values[i];
                if (flowGraph.IsNode(il.LabelValue))
                {
                    FlowGraphNode node = flowGraph[il.LabelValue];
                    if (node.SemanticStacks.Count > 0)
                    {
                        //����Ƿ���ڶ��ǰ���Ҵ��ڴ��������ջ��������Ҫ�����鹲��ջ�����Σ����һ��������Ϣ��
                        if (node.PrevNodes.Count > 1)
                        {
                            DAGNode enode = DAGNode.CreateLeaf(true, "warning ! semantic stack doesn't empty at joint !");
                            enode.IsComment = true;
                            il.Csharps.Add(enode);
                        }
                        //�����ǰ�����������ջ������ֵ��Ŀ�Ƿ�һ�£������������߷��������˴���
                        int n = -1;
                        bool error=false;
                        foreach (SemanticStack ss in node.SemanticStacks)
                        {
                            if (n <= 0)
                            {
                                n = ss.Count;
                            }
                            else if (ss.Count != n)
                            {
                                DAGNode enode = DAGNode.CreateLeaf(true, "error ! semantic stack doesn't balance at joint !");
                                enode.IsComment = true;
                                il.Csharps.Add(enode);
                                error=true;
                                break;
                            }
                        }
                        if(!error)
                        {
                            //�Զ��ǰ�����������ջ�������ֵͳһһ����ʱ��������
                            TypeInfo[] types = new TypeInfo[n];
                            string[] tvars = new string[n];
                            SemanticValue[][] vals0 = new SemanticValue[node.SemanticStacks.Count][];
                            for(int ii=0;ii<vals0.Length;ii++)
                            {
                                vals0[ii]=node.SemanticStacks[ii].ToArray();
                            }
                            SemanticValue[][] vals = new SemanticValue[n][];
                            for(int ii=0;ii<vals.Length;ii++)
                            {
                                vals[ii] = new SemanticValue[node.SemanticStacks.Count];
                                for (int j = 0; j < vals[ii].Length; j++)
                                {
                                    vals[ii][j] = vals0[j][ii];
                                }
                            }
                            int ix = 0;
                            for (; ix < n; ix++)
                            {
                                TypeInfo type = GetCompatibleType(vals[ix]);
                                if (type.IsReference)//���Է�����ֵ����
                                {
                                    types[ix] = type;
                                    tvars[ix] = "";
                                }
                                else
                                {
                                    types[ix] = type;
                                    tvars[ix] = NewAlias(type);
                                }
                            }
                            foreach (SemanticStack ss in node.SemanticStacks)
                            {
                                ix = 0;
                                foreach (SemanticValue val in ss)
                                {
                                    if (val.Node is ReferenceNode)
                                    {
                                        if (!types[ix].IsReference)//���Է�����ֵ����
                                        {
                                            val.Node.SetID(tvars[ix], types[ix]);
                                            AdjustConstForType(val.Node as ReferenceNode, types[ix]);
                                        }
                                    }
                                    else
                                    {
                                        //error
                                    }
                                    ix++;
                                }
                            }
                        }
                    }
                }
            }
        }
        private void AdjustConstForType(ReferenceNode node,TypeInfo type)
        {
            DAGNode n = node;
            while (n is ReferenceNode)
                n = n.NextNodes[0];
            if (n is LeafNode && n.Data.Length>0 && (char.IsDigit(n.Data[0]) || n.Data[0]=='.' || n.Data[0]=='-'))
            {
                long v = 0;
                double dv = 0.0;
                if (n.Data.IndexOf('.') >= 0)
                {
                    dv = ConstUtility.ParseDouble(n.Data);
                    v = (long)dv;
                }
                else
                {
                    v = ConstUtility.ParseLong(n.Data);
                    dv = (double)v;
                }
                n.Data = ConstUtility.ConstToString(type, v, dv);
            }
        }
        private TypeInfo GetCompatibleType(params SemanticValue[] vals)
        {
            bool isReference = true;
            foreach (SemanticValue vv in vals)
            {
                if (!vv.Type.IsReference)
                {
                    isReference = false;
                    break;
                }
            }
            SemanticValue v=vals[0];
            if (isReference)//ȫ����������ʱ������
                return v.Type;
            TypeInfo t = v.Type;
            for(int i=1;i<vals.Length;i++)
            {
                TypeInfo tt = vals[i].Type;
                if (t == BasicTypeInfo.ObjectInfo)//����ֱ����System.Object��ͨ����nullptr�����������ж�����
                {
                    t = tt;
                    continue;
                }
                if (tt == BasicTypeInfo.ObjectInfo)//����ֱ����System.Object��ͨ����nullptr�����������ж�����
                {
                    continue;
                }
                if (t.IsRef || tt.IsRef)
                {
                    if (t != tt)//���Ͳ�һ�µ�ʹ��System.Object����ʱ�������ͣ��������ᵹ�����ͳ�ͻ���Ժ������ʹ�û�ͨ��ת�ͳɺ��ʵ�����
                        return BasicTypeInfo.ObjectInfo;
                }
                else if(t.IsBoolean || tt.IsBoolean)
                {
                    t = BasicTypeInfo.BooleanInfo;
                }
                else if ((!t.IsSimple || t.IsCastSimple) && tt.IsSimple && !tt.IsCastSimple)
                {
                    t = tt;
                }
            }
            return t;
        }
        private TypeInfo GetCalcResultType(SemanticValue v1, SemanticValue v2)
        {
            if (v1.Type == BasicTypeInfo.DoubleInfo || v2.Type == BasicTypeInfo.DoubleInfo)
                return BasicTypeInfo.DoubleInfo;
            else if (v1.Type == BasicTypeInfo.SingleInfo || v2.Type == BasicTypeInfo.SingleInfo)
                return BasicTypeInfo.SingleInfo;
            else if (v1.Type == BasicTypeInfo.DecimalInfo || v2.Type == BasicTypeInfo.DecimalInfo)
                return BasicTypeInfo.DecimalInfo;
            else if (v1.Type == BasicTypeInfo.Int64Info || v2.Type == BasicTypeInfo.Int64Info)
                return BasicTypeInfo.Int64Info;
            else if (v1.Type == BasicTypeInfo.UInt64Info || v2.Type == BasicTypeInfo.UInt64Info)
                return BasicTypeInfo.UInt64Info;
            else if (v1.Type == BasicTypeInfo.Int32Info || v2.Type == BasicTypeInfo.Int32Info)
                return BasicTypeInfo.Int32Info;
            else if (v1.Type == BasicTypeInfo.UInt32Info || v2.Type == BasicTypeInfo.UInt32Info)
                return BasicTypeInfo.UInt32Info;
            else if (v1.Type == BasicTypeInfo.IntPtrInfo || v2.Type == BasicTypeInfo.IntPtrInfo)
                return BasicTypeInfo.IntPtrInfo;
            else if (v1.Type == BasicTypeInfo.UIntPtrInfo || v2.Type == BasicTypeInfo.UIntPtrInfo)
                return BasicTypeInfo.UIntPtrInfo;
            else if (v1.Type == BasicTypeInfo.Int16Info || v2.Type == BasicTypeInfo.Int16Info)
                return BasicTypeInfo.Int16Info;
            else if (v1.Type == BasicTypeInfo.UInt16Info || v2.Type == BasicTypeInfo.UInt16Info)
                return BasicTypeInfo.UInt16Info;
            else if (v1.Type == BasicTypeInfo.CharInfo || v2.Type == BasicTypeInfo.CharInfo)
                return BasicTypeInfo.CharInfo;
            else if (v1.Type == BasicTypeInfo.SByteInfo || v2.Type == BasicTypeInfo.SByteInfo)
                return BasicTypeInfo.SByteInfo;
            else if (v1.Type == BasicTypeInfo.ByteInfo || v2.Type == BasicTypeInfo.ByteInfo)
                return BasicTypeInfo.ByteInfo;
            else
                return BasicTypeInfo.Int32Info;
        }
        private TypeInfo GetIntegerCalcResultType(SemanticValue v1, SemanticValue v2)
        {
            if (v1.Type == BasicTypeInfo.Int64Info || v2.Type == BasicTypeInfo.Int64Info)
                return BasicTypeInfo.Int64Info;
            else if (v1.Type == BasicTypeInfo.UInt64Info || v2.Type == BasicTypeInfo.UInt64Info)
                return BasicTypeInfo.UInt64Info;
            else if (v1.Type == BasicTypeInfo.Int32Info || v2.Type == BasicTypeInfo.Int32Info)
                return BasicTypeInfo.Int32Info;
            else if (v1.Type == BasicTypeInfo.UInt32Info || v2.Type == BasicTypeInfo.UInt32Info)
                return BasicTypeInfo.UInt32Info;
            else if (v1.Type == BasicTypeInfo.IntPtrInfo || v2.Type == BasicTypeInfo.IntPtrInfo)
                return BasicTypeInfo.IntPtrInfo;
            else if (v1.Type == BasicTypeInfo.UIntPtrInfo || v2.Type == BasicTypeInfo.UIntPtrInfo)
                return BasicTypeInfo.UIntPtrInfo;
            else if (v1.Type == BasicTypeInfo.Int16Info || v2.Type == BasicTypeInfo.Int16Info)
                return BasicTypeInfo.Int16Info;
            else if (v1.Type == BasicTypeInfo.UInt16Info || v2.Type == BasicTypeInfo.UInt16Info)
                return BasicTypeInfo.UInt16Info;
            else if (v1.Type == BasicTypeInfo.CharInfo || v2.Type == BasicTypeInfo.CharInfo)
                return BasicTypeInfo.CharInfo;
            else if (v1.Type == BasicTypeInfo.SByteInfo || v2.Type == BasicTypeInfo.SByteInfo)
                return BasicTypeInfo.SByteInfo;
            else if (v1.Type == BasicTypeInfo.ByteInfo || v2.Type == BasicTypeInfo.ByteInfo)
                return BasicTypeInfo.ByteInfo;
            else
                return BasicTypeInfo.Int32Info;
        }
        private long GetPrevIlLabelValue(long labelVal)
        {
            long prevLabelVal = -1;
            int i = ilLines.Keys.IndexOf(labelVal);
            if (i > 0)
            {
                i--;
                prevLabelVal = ilLines.Values[i].LabelValue;
            }
            return prevLabelVal;
        }
        private long GetNextIlLabelValue(long labelVal)
        {
            long nextLabelVal = -1;
            int i = ilLines.Keys.IndexOf(labelVal);
            if (i >= 0 && i<ilLines.Count-1)
            {
                i++;
                nextLabelVal = ilLines.Values[i].LabelValue;
            }
            return nextLabelVal;
        }
        /// <summary>
        /// ��ʼһ����ͼ���ı��룬�̳�����ǰ����������������ǰ����
        /// </summary>
        /// <param name="node"></param>
        /// <param name="il"></param>
        private void BeginGraphNode(FlowGraphNode node)
        {            
            if (node.SemanticStacks.Count > 0)
            {
                semanticStack = node.SemanticStacks[0].Clone();
            }
            else
            {
                semanticStack = new SemanticStack();
            }
            if (node.VarReferencesList.Count > 0)
            {
                varReferences = new Dictionary<string, DAGNode>(node.VarReferencesList[0]);
            }
            else
            {
                varReferences = new Dictionary<string, DAGNode>();
            }
        }
        /// <summary>
        /// ������ǰ��ͼ���ķ����룬�Ŵ�����ֵ�������ǰ���ø�δ���ʺ�̽��
        /// ����������ջ����������ֵ��
        /// </summary>
        /// <param name="node"></param>
        /// <param name="il"></param>
        private void EndGraphNode(FlowGraphNode node,bool isDecompile)
        {
            if (semanticStack.Count > 0)
            {
                if (isDecompile)
                {
                    //�������������ֵ��Ϊ������ã�����������������ڿ�Ľ��������
                    IlIns il = ilLines[node.EndLabelValue];
                    foreach (SemanticValue val in semanticStack)
                    {
                        DAGNode n = val.Node;
                        n = DAGNode.CreateNodeRef(n);
                        if (!il.Csharps.Contains(n))
                            il.Csharps.Insert(0, n);
                        val.IsConst = false;
                        val.Node = n;
                    }
                }
                foreach (FlowGraphNode n in node.NextNodes)
                {
                    n.SemanticStacks.Add(semanticStack.Clone());
                    if (n.PrevNodes.Count == 1)
                    {
                        //ֻ��һ��ǰ����Ŀ齫�̳���ǰ����ı�����ǰ���ã��ж��ǰ����Ŀ鲻�ܼ̳б�����ǰ����
                        n.VarReferencesList.Add(new Dictionary<string, DAGNode>(varReferences));
                    }
                }
            }
        }

        private string AdjustGoto(long srcLv, long _destLv, bool isDecompile)
        {
            string label = null;
            long destLv=_destLv;
            for(;;)
            {
                int ix=ilLines.Keys.IndexOf(destLv);
                IlIns il = ilLines.Values[ix];
                OpCode opc = IlOpcodes.Get(il.Opcode);
                if (opc == OpCodes.Br || opc == OpCodes.Br_S)
                {
                    label = il.Value;
                    destLv = IlIns.LabelToValue(il.Value);
                }
                else
                {
                    break;
                }
            }
            EHBlockNode ns = rootEHNode.Find(srcLv);
            EHBlockNode nd = ns.Find(destLv);
            if (nd != null && ns != nd)
            {
                EHBlockNode d=nd;
                while (d != null && ns != d.EncloseBlock.EncloseNode)
                {
                    d = d.EncloseBlock.EncloseNode;
                }
                return "IL_" + d.ScopeStart.ToString("X6");
            }
            if(label!=null)
            {
                return label;
            }
            return null;
        }
        private string AdjustGoto(IlIns il, bool isDecompile)
        {
            long lv = IlIns.LabelToValue(il.Value);
            string label = null;
            if (switchBlocks.ContainsKey(lv))
            {
                FlowGraphNode gnode = switchBlocks[lv];
                DAGNode dnode = switchExpressions[gnode.EndLabelValue];
                while (dnode is ReferenceNode)
                {
                    dnode = dnode.NextNodes[0];
                }
                if (dnode is LeafNode)
                {
                    DAGNode r = GetVarReference(dnode.Data);
                    if (r != null)
                    {
                        int v = (int)ConstUtility.ParseLong(r.Data);
                        IlIns switchIl = ilLines[gnode.EndLabelValue];
                        SwitchOperand op = switchIl.Operand as SwitchOperand;
                        if (v >= 0 && v < op.Labels.Count)
                        {
                            label = op.Labels[v];
                            lv = IlIns.LabelToValue(op.Labels[v]);
                        }
                    }
                }
            }
            string label2=AdjustGoto(il.LabelValue, lv, isDecompile);            
            if (label2!=null)
            {
                return label2;
            }
            else if (label != null)
            {
                return label;
            }
            return null;
        }
        private DAGNode AdjustGoto(IlIns il, DAGNode node, bool isDecompile)
        {
            string label = AdjustGoto(il, isDecompile);
            if (label!=null)
            {
                node.IsComment = true;
                il.Csharps.Add(node);
                if (node is UnaryNode)
                {
                    DAGNode newNode = DAGNode.CreateUnary(true, "goto", DAGNode.CreateLeaf(label));
                    return newNode;
                }
                else if (node is BinaryNode)
                {
                    DAGNode newNode = DAGNode.CreateBinary(true, "if", node.NextNodes[0], DAGNode.CreateLeaf(label));
                    if (node.OtherOperators.Count > 0)
                    {
                        newNode.OtherOperators.Add(node.OtherOperators[0]);
                    }
                    return newNode;
                }
                else if (node is TernaryNode)
                {
                    DAGNode newNode = DAGNode.CreateTernary(true, "if", node.NextNodes[0], node.NextNodes[1], DAGNode.CreateLeaf(label));
                    newNode.OtherOperators.Add(node.OtherOperators[0]);
                    return newNode;
                }
            }
            return node;
        }

        private DAGNode BuildArgumentCastExpression(TypeInfo ti, SemanticValue v)
        {
            return BuildCastExpression(ti, v, true);
        }
        private DAGNode BuildCastExpression(TypeInfo ti, SemanticValue v)
        {
            return BuildCastExpression(ti, v, false);
        }
        /// <summary>
        /// ���콫ֵǿ��תΪָ�����͵ı��ʽ��
        /// </summary>
        /// <param name="type"></param>
        /// <param name="v"></param>
        /// <returns></returns>
        private DAGNode BuildCastExpression(TypeInfo ti,SemanticValue _v,bool forArg)
        {
            SemanticValue v = _v.Clone();
            DAGNode node = _v.Node;
            if (v.Type == BasicTypeInfo.IntPtrInfo)
            {
                v.Node = DAGNode.CreateUnary("ToInt32", _v.Node);
            }
            else if (v.Type == BasicTypeInfo.UIntPtrInfo)
            {
                v.Node = DAGNode.CreateUnary("ToUInt32", _v.Node);
            }

            if (v.IsConst && ti.IsBoolean)
            {
                node = DAGNode.CreateLeaf(v.ConstToString(ti));
            }
            else if (v.IsConst && v.IntegerVal == 0 && ti.IsRef)
            {
                node = DAGNode.CreateBinary("()", DAGNode.CreateLeaf(ti.TypeDefClause), DAGNode.CreateLeaf("nullptr"));
            }
            else if (v.IsConst && ti.IsSimple)
            {
                node = DAGNode.CreateLeaf(v.ConstToString(ti));
                if (forArg)
                    node = DAGNode.CreateBinary("()", DAGNode.CreateLeaf(ti.TypeDefClause), node);                    
            }
            else if (ti != v.Type)
            {
                node = DAGNode.CreateBinary("()", DAGNode.CreateLeaf(ti.TypeDefClause), v.Node);
            }
            return node;
        }
        /// <summary>
        /// Ϊ����ֵ����ǿ��ת�����ʽ��ʹ������ֵ���Խ��бȽϲ�����
        /// </summary>
        /// <param name="v1"></param>
        /// <param name="v2"></param>
        /// <param name="node1"></param>
        /// <param name="node2"></param>
        /// <returns>
        /// true  --- ���������д�С�ıȽϱ��ʽ
        /// false --- �����������д�С�ıȽϱ��ʽ����ҪתΪ�еȱ��ʽ��������Ϊ��һ��������Ϊ0����һ��Ϊ�������ã�
        /// </returns>
        private bool BuildCastExpression(SemanticValue _v1, SemanticValue _v2, out DAGNode node1, out DAGNode node2)
        {
            bool ret = true;
            node1 = _v1.Node;
            node2 = _v2.Node;
            SemanticValue v1 = _v1.Clone();
            SemanticValue v2 = _v2.Clone();
            if (v1.Type == BasicTypeInfo.IntPtrInfo)
            {
                v1.Node = DAGNode.CreateUnary("ToInt32", _v1.Node);
            }
            else if (v1.Type == BasicTypeInfo.UIntPtrInfo)
            {
                v1.Node = DAGNode.CreateUnary("ToUInt32", _v1.Node);
            }
            if (v2.Type == BasicTypeInfo.IntPtrInfo)
            {
                v2.Node = DAGNode.CreateUnary("ToInt32", _v2.Node);
            }
            else if (v2.Type == BasicTypeInfo.UIntPtrInfo)
            {
                v2.Node = DAGNode.CreateUnary("ToUInt32", _v2.Node);
            }

            if (v1.Type.IsBoolean && v2.IsConst)
            {
                node2 = DAGNode.CreateLeaf(v2.ConstToString(v1.Type));
            }
            else if (v2.Type.IsBoolean && v1.IsConst)
            {
                node1 = DAGNode.CreateLeaf(v1.ConstToString(v2.Type));
            }
            else if (v1.Type.IsRef && v2.IsConst && v2.IntegerVal == 0)
            {
                node2 = DAGNode.CreateBinary("()", DAGNode.CreateLeaf(v1.Type.TypeDefClause), DAGNode.CreateLeaf("nullptr"));
                ret = false;
            }
            else if (v2.Type.IsRef && v1.IsConst && v1.IntegerVal == 0)
            {
                node1 = DAGNode.CreateBinary("()", DAGNode.CreateLeaf(v2.Type.TypeDefClause), DAGNode.CreateLeaf("nullptr"));
                ret = false;
            }
            else if (v1.Type != v2.Type)
            {
                if (v1.Type.IsSimple && v2.Type.IsSimple)//���ǻ������ͱ���
                {
                    if(v1.IsConst)
                        node1 = DAGNode.CreateLeaf(v1.ConstToString(v2.Type));
                    else if(v2.IsConst)
                        node2 = DAGNode.CreateLeaf(v2.ConstToString(v1.Type));
                    else if(v1.Type.IsCastSimple && !v2.Type.IsCastSimple)
                        node1 = DAGNode.CreateBinary("()", DAGNode.CreateLeaf(v2.Type.TypeClause), v1.Node);
                    else
                        node2 = DAGNode.CreateBinary("()", DAGNode.CreateLeaf(v1.Type.TypeClause), v2.Node);
                }
                else if (v2.Type.IsSimple)//�ڶ����������ǻ�����������������1ǿ��תΪ������2������
                {
                    if (v1.Type.IsRef && v1.IsConst && v1.IntegerVal == 0)
                        node1 = DAGNode.CreateLeaf("0");
                    else
                        node1 = DAGNode.CreateBinary("()", DAGNode.CreateLeaf(v2.Type.TypeDefClause), v1.Node);
                }
                else if (v1.Type.IsSimple)//��һ���������ǻ�����������������2ǿ��תΪ������1������
                {
                    if (v2.Type.IsRef && v2.IsConst && v2.IntegerVal == 0)
                        node2 = DAGNode.CreateLeaf("0");
                    else
                        node2 = DAGNode.CreateBinary("()", DAGNode.CreateLeaf(v1.Type.TypeDefClause), v2.Node);
                }
                else//�����ǻ�������
                {
                    node2 = DAGNode.CreateBinary("()", DAGNode.CreateLeaf(v1.Type.TypeDefClause), v2.Node);
                }
            }
            return ret;
        }

        public string GenerateCode(int indent)
        {
            string istr = IndentString.GetIndent(indent);
            StringBuilder sb = new StringBuilder();
            sb.AppendLine(istr + "//temp variables , should be optimized by C++/cli compiler.");
            foreach (string s in tempVars.Keys)
            {
                if (tempVars[s].IsReference)
                    continue;
                string initVal = ";";
                TypeInfo ti = tempVars[s];
                if (ti.IsBoolean)
                    initVal = " = false;";
                else if (ti.IsRef)
                {
                    initVal = " = nullptr;";
                }
                else if (ti.IsEnum)
                {
                    initVal = " = (" + tempVars[s].TypeClause + ")0;";
                }
                else if (ti.IsStruct)
                {
                    initVal = ";";
                }
                else if (ti.IsSimple)
                {
                    if (ti.IsCastSimple)
                        initVal = " = (" + tempVars[s] + ")0;";
                    else
                        initVal = " = 0;";
                }
                sb.AppendLine(istr + tempVars[s].TypeDefClause + " " + s + initVal);
            }
            sb.AppendLine(istr + "//local variables.");
            if (locals != null)
            {
                foreach (Param p in locals)
                {
                    if (p.Type.IsReference)
                        continue;
                    string initVal = ";";
                    TypeInfo ti=p.Type;
                    if (ti.IsBoolean)
                        initVal = " = false;";
                    else if (ti.IsRef)
                        initVal = " = nullptr;";
                    else if (ti.IsEnum)
                    {
                        initVal = " = (" + p.Type + ")0;";
                    }
                    else if (ti.IsStruct)
                    {
                        initVal = ";";
                    }
                    else if (ti.IsSimple)
                    {
                        if (ti.IsCastSimple)
                            initVal = " = (" + p.Type + ")0;";
                        else
                            initVal = " = 0;";
                    }
                    sb.AppendLine(istr + p.CalcClause() + initVal);
                }
            }
            sb.AppendLine(istr + "//method body ------- ");
            foreach (IlIns il in ilLines.Values)
            {
                sb.AppendLine(istr + il.GenerateCode());
            }
            return sb.ToString();
        }

        private TypeInfo GetLocalType(string localName)
        {
            foreach (Param p in locals)
            {
                if (p.Id == localName)
                    return p.Type;
            }
            return UndefinedTypeInfo.Ref;
        }

        private string NewAlias(TypeInfo type)
        {
            string vname = "Temp_" + tempVarIndex;
            tempVarIndex++;
            tempVars[vname] = type;
            return vname;
        }

        private DAGNode GetVarReference(string name)
        {
            return GetVarReference(name, true);
        }
        private DAGNode GetVarReference(string name,bool create)
        {
            if (varReferences.ContainsKey(name))
            {
                return varReferences[name];
            }
            if (create)
            {
                DAGNode node = DAGNode.CreateLeaf(name);
                varReferences[name] = node;
                return node;
            }
            else
            {
                return null;
            }
        }
        /// <summary>
        /// ����ֵ�ı�����ʹԭ�������ò��ñ�����
        /// </summary>
        /// <param name="name"></param>
        private void VarChanged(string name,TypeInfo type,DAGNode newNode)
        {
            if (semanticStack.Contains(name) && varReferences.ContainsKey(name))
            {
                DAGNode node = varReferences[name];
                if (!type.IsReference)//���ñ����Ƿ��ջ��Ӱ������Ĳ�����ջ���������ñ�����ʵ��ֵ��
                {
                    if (node.Identifier.Length <= 0 || node.Identifier == name)
                    {
                        node.SetID(NewAlias(type), type);
                    }
                }
            }
            varReferences[name] = newNode;
        }

        private string GetOperator(string name)
        {
            if (operators.ContainsKey(name))
                return operators[name];
            else
                return name;
        }

        static MethodBody()
        {
            operators["op_Equality"] = "==";
            operators["op_Inequality"] = "!=";
            operators["op_Addition"] = "+";
            operators["op_Subtraction"] = "-";
            operators["op_GreaterThan"] = ">";
            operators["op_GreaterThanOrEqual"] = ">=";
            operators["op_LessThan"] = "<";
            operators["op_LessThanOrEqual"] = "<=";
        }
        public MethodBody()
        {
            curEHNode = rootEHNode;
        }

        private MethodInfo ownerMethod = null;
        private List<Param> locals = new List<Param>();

        private string curLabel = "        ";
        private SortedList<long, IlIns> ilLines = new SortedList<long, IlIns>();
        private List<long> switches = new List<long>();
        private EHBlockNode rootEHNode = new EHBlockNode();
        private EHBlockNode curEHNode = null;
        private EHBlock curEHBlock = null;
        private FlowGraph flowGraph = new FlowGraph();
        private SortedList<long, FlowGraphNode> switchBlocks = new SortedList<long, FlowGraphNode>();
        private SortedList<long, DAGNode> switchExpressions = new SortedList<long, DAGNode>();

        private SemanticStack semanticStack = new SemanticStack();

        private Dictionary<string, DAGNode> varReferences = new Dictionary<string, DAGNode>();
        private Dictionary<string, TypeInfo> tempVars = new Dictionary<string, TypeInfo>();
        private int tempVarIndex = 0;

        private long lastLabelValue = 0;

        private static Dictionary<string, string> operators = new Dictionary<string, string>();
        private static IlIns tempIl = new IlIns();
    }
}
