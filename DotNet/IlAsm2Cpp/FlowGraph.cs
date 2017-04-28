using System;
using System.Collections.Generic;
using System.Text;

namespace IL2CPP
{
    public class FlowGraph
    {
        public FlowGraphNode StartNode
        {
            get { return startNode; }
            set { startNode = value; }
        }
        public bool IsNode(long labelValue)
        {
            return nodes.ContainsKey(labelValue);
        }
        public FlowGraphNode this[long labelValue]
        {
            get
            {
                if (IsNode(labelValue))
                    return nodes[labelValue];
                else
                    return null;
            }
        }
        public void Clear()
        {
            startNode = null;
            nodes.Clear();
            accessedNodes.Clear();
            unaccessedNodes.Clear();
            iterateStack.Clear();
        }
        public void Reset()
        {
            accessedNodes.Clear();
            unaccessedNodes.Clear();
            iterateStack.Clear();
            foreach (FlowGraphNode node in nodes.Values)
            {
                unaccessedNodes[node] = true;
            }
            curNode = null;
            Next();
        }
        public FlowGraphNode CurNode
        {
            get { return curNode; }
        }
        public bool IsAccessed(FlowGraphNode node)
        {
            if(accessedNodes.ContainsKey(node))
                return accessedNodes[node];
            return false;
        }
        public void Next()
        {
            if (IteratorIsEnd)
                return;
            if (IteratorIsBegin)
            {
                iterateStack.Push(startNode);
                PrepareAccessNode(startNode);
            }
            else if (curNode.NextNodes.Count > 0)
            {
                //�ڷ����굱ǰ���󽫺����ջ����������ǰ��������ͼ�Ļ��ᣬ����
                //����if(1<2) goto label;�����ļ������ж�ʱ���Ὣ��ǰ�����ٵĺ��
                //�Ͽ�
                for (int i = curNode.NextNodes.Count - 1; i >= 0; i--)
                {
                    FlowGraphNode n = curNode.NextNodes[i];
                    if (!accessedNodes.ContainsKey(n))
                    {
                        iterateStack.Push(n);
                        PrepareAccessNode(n);
                    }
                }
            }
            if (iterateStack.Count > 0)
            {
                curNode = iterateStack.Pop();
                AccessNode(curNode);
            }
            else if (unaccessedNodes.Count > 0)
            {
                IEnumerator<FlowGraphNode> enumer = unaccessedNodes.Keys.GetEnumerator();
                enumer.MoveNext();
                curNode = enumer.Current;
                PrepareAccessNode(curNode);
                AccessNode(curNode);
            }
            else
            {
                curNode = null;
            }
        }
        private bool IteratorIsBegin
        {
            get
            {
                return curNode == null && accessedNodes.Count == 0;
            }
        }
        private bool IteratorIsEnd
        {
            get
            {
                return curNode == null && unaccessedNodes.Count == 0;
            }
        }
        /// <summary>
        /// �趨һ�����Ϊ�����ʽ�㣬ͬʱ��δ���ʼ�����ɾ���˽�㡣
        /// </summary>
        /// <param name="node"></param>
        private void PrepareAccessNode(FlowGraphNode node)
        {
            accessedNodes[node] = false;
            unaccessedNodes.Remove(node);
        }
        /// <summary>
        /// �趨һ�����Ϊ�ѷ��ʽ�㣬�ѷ��ʽ�����Ѿ��ɵ������̷��ع��Ľ�㡣
        /// </summary>
        /// <param name="node"></param>
        private void AccessNode(FlowGraphNode node)
        {
            accessedNodes[node] = true;
        }
        public FlowGraphNode NewNode(long labelValue)
        {
            if (nodes.ContainsKey(labelValue))
                return nodes[labelValue];
            else
            {
                FlowGraphNode node = new FlowGraphNode(labelValue);
                nodes[labelValue] = node;
                if (startNode == null)
                    startNode = node;
                return node;
            }
        }
        public FlowGraphNode Find(long labelValue)
        {
            long[] labelVals = new long[nodes.Keys.Count];
            nodes.Keys.CopyTo(labelVals, 0);
            int ix = Array.BinarySearch(labelVals, labelValue);
            if (ix >= 0)
                return nodes.Values[ix];
            else
            {
                ix = ~ix;
                ix--;
                if (ix >= 0)
                    return nodes.Values[ix];
                else
                    return null;
            }
        }
        public FlowGraphNode Split(long labelValue,long prevLabelValue)
        {
            if (nodes.ContainsKey(labelValue))
                return nodes[labelValue];
            FlowGraphNode n1 = Find(labelValue);
            if (n1 == null)
                return null;
            FlowGraphNode n2 = NewNode(labelValue);
            //�Ͽ�n1�����ĺ�̲���֮���Ϊn2�ĺ��
            FlowGraphNode[] n1s = new FlowGraphNode[n1.NextNodes.Count];
            n1.NextNodes.CopyTo(n1s, 0);
            foreach (FlowGraphNode n in n1s)
            {
                n1.DelNext(n);
                n2.AddNext(n);
            }
            //��n2���Ϊn1�ĺ��
            n1.AddNext(n2);
            //����n2�Ľ�����ǩΪn1�Ľ�����ǩ����n1�Ľ�����ǩ������n2�Ŀ�ʼ��ǩ�򲻵���n2�Ľ�����ǩ
            if (n1.EndLabelValue > n2.LabelValue)
            {
                n2.EndLabelValue = n1.EndLabelValue;
            }
            //����n1�Ľ�����ǩΪ�����ǩ��ǰһ����ǩ
            n1.EndLabelValue = prevLabelValue;

            return n2;
        }
        public void Combine(FlowGraphNode n1, FlowGraphNode n2)
        {
            if (n1 == null || n2 == null)
                return;
            if (n2.PrevNodes.Count == 1 && n2.PrevNodes[0] == n1 && n1.NextNodes.Count==1 && n1.NextNodes[0]==n2)//�ϲ�������n2������n1��Ψһ��̣�n1������n2��Ψһǰ��
            {
                //�Ͽ�n1��n2�Ĺ���
                n1.DelNext(n2);
                //�Ͽ�n2�����̵Ĺ����������������Ϊn1�ĺ��
                FlowGraphNode[] n2s = new FlowGraphNode[n2.NextNodes.Count];
                n2.NextNodes.CopyTo(n2s,0);
                foreach (FlowGraphNode n in n2s)
                {
                    n2.DelNext(n);
                    n1.AddNext(n);
                }
                //n1�Ľ�����ǩ��Ϊn2�Ľ�����ǩ
                n1.EndLabelValue = n2.EndLabelValue;
                //ɾ����ͼ��n2�ļ���
                nodes.Remove(n2.LabelValue);
                accessedNodes.Remove(n2);
                unaccessedNodes.Remove(n2);
                bool inStack = false;
                foreach (FlowGraphNode n in iterateStack)
                {
                    if (n == n2)
                    {
                        inStack = true;
                        break;
                    }
                }
                if (inStack)
                {
                    FlowGraphNode[] ns = iterateStack.ToArray();
                    iterateStack.Clear();
                    for (int i = ns.Length - 1; i >= 0; i--)
                    {
                        if (ns[i] != n2)
                            iterateStack.Push(ns[i]);
                    }
                }
                if (curNode == n2)
                {
                    curNode = n1;
                    //����n1Ϊ�ѷ���
                    AccessNode(n1);
                    //ɾ��������ջ���n1
                    inStack = false;
                    foreach (FlowGraphNode n in iterateStack)
                    {
                        if (n == n1)
                        {
                            inStack = true;
                            break;
                        }
                    }
                    if (inStack)
                    {
                        FlowGraphNode[] ns = iterateStack.ToArray();
                        iterateStack.Clear();
                        for (int i = ns.Length - 1; i >= 0; i--)
                        {
                            if (ns[i] != n1)
                                iterateStack.Push(ns[i]);
                        }
                    }
                }
            }
        }

        private FlowGraphNode startNode = null;
        private SortedList<long, FlowGraphNode> nodes = new SortedList<long, FlowGraphNode>();

        private FlowGraphNode curNode = null;
        private Stack<FlowGraphNode> iterateStack = new Stack<FlowGraphNode>();
        private Dictionary<FlowGraphNode, bool> unaccessedNodes = new Dictionary<FlowGraphNode, bool>();
        private Dictionary<FlowGraphNode, bool> accessedNodes = new Dictionary<FlowGraphNode, bool>();
    }
    public class FlowGraphNode
    {
        public long LabelValue
        {
            get { return labelValue; }
        }

        public string Label
        {
            get
            {
                return "IL_" + labelValue.ToString("X6") + ":";
            }
        }

        public long EndLabelValue
        {
            get { return endLabelValue; }
            set { endLabelValue = value; }
        }

        public string EndLabel
        {
            get
            {
                return "IL_" + endLabelValue.ToString("X6") + ":";
            }
        }

        public IList<FlowGraphNode> PrevNodes
        {
            get { return readonlyPrevNodes; }
        }

        public IList<FlowGraphNode> NextNodes
        {
            get { return readonlyNextNodes; }
        }

        public List<SemanticStack> SemanticStacks
        {
            get { return semanticStacks; }
        }

        public List<Dictionary<string, DAGNode>> VarReferencesList
        {
            get { return varReferencesList; }
        }

        public void AddNext(params FlowGraphNode[] ns)
        {
            foreach (FlowGraphNode n in ns)
            {
                if(!n.PrevNodes.Contains(this))
                    n.prevNodes.Add(this);
                if(!nextNodes.Contains(n))
                    nextNodes.Add(n);
            }
        }

        public void DelNext(params FlowGraphNode[] ns)
        {
            foreach (FlowGraphNode n in ns)
            {
                n.prevNodes.Remove(this);
                nextNodes.Remove(n);
            }
        }

        public void ClearNext()
        {
            DelNext(nextNodes.ToArray());
        }

        public FlowGraphNode(long _label)
        {
            labelValue = _label;
            endLabelValue = _label;

            readonlyPrevNodes = prevNodes.AsReadOnly();
            readonlyNextNodes = nextNodes.AsReadOnly();
        }

        private long labelValue = -1;
        private long endLabelValue = -1;
        private List<FlowGraphNode> prevNodes = new List<FlowGraphNode>();
        private List<FlowGraphNode> nextNodes = new List<FlowGraphNode>();
        private IList<FlowGraphNode> readonlyPrevNodes = null;
        private IList<FlowGraphNode> readonlyNextNodes = null;
        private List<SemanticStack> semanticStacks = new List<SemanticStack>();
        private List<Dictionary<string, DAGNode>> varReferencesList = new List<Dictionary<string, DAGNode>>();
    }
}
