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
                //在访问完当前结点后将后继入栈，这样给当前结点调整流图的机会，比如
                //遇到if(1<2) goto label;这样的假条件判断时，会将当前结点与假的后继
                //断开
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
        /// 设定一个结点为待访问结点，同时从未访问集合中删除此结点。
        /// </summary>
        /// <param name="node"></param>
        private void PrepareAccessNode(FlowGraphNode node)
        {
            accessedNodes[node] = false;
            unaccessedNodes.Remove(node);
        }
        /// <summary>
        /// 设定一个结点为已访问结点，已访问结点是已经由迭代过程返回过的结点。
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
            //断开n1与它的后继并将之添加为n2的后继
            FlowGraphNode[] n1s = new FlowGraphNode[n1.NextNodes.Count];
            n1.NextNodes.CopyTo(n1s, 0);
            foreach (FlowGraphNode n in n1s)
            {
                n1.DelNext(n);
                n2.AddNext(n);
            }
            //将n2添加为n1的后继
            n1.AddNext(n2);
            //设置n2的结束标签为n1的结束标签，若n1的结束标签不大于n2的开始标签则不调整n2的结束标签
            if (n1.EndLabelValue > n2.LabelValue)
            {
                n2.EndLabelValue = n1.EndLabelValue;
            }
            //设置n1的结束标签为分离标签的前一个标签
            n1.EndLabelValue = prevLabelValue;

            return n2;
        }
        public void Combine(FlowGraphNode n1, FlowGraphNode n2)
        {
            if (n1 == null || n2 == null)
                return;
            if (n2.PrevNodes.Count == 1 && n2.PrevNodes[0] == n1 && n1.NextNodes.Count==1 && n1.NextNodes[0]==n2)//合并条件：n2必须是n1的唯一后继，n1必须是n2的唯一前导
            {
                //断开n1与n2的关联
                n1.DelNext(n2);
                //断开n2与其后继的关联，并将其后继添加为n1的后继
                FlowGraphNode[] n2s = new FlowGraphNode[n2.NextNodes.Count];
                n2.NextNodes.CopyTo(n2s,0);
                foreach (FlowGraphNode n in n2s)
                {
                    n2.DelNext(n);
                    n1.AddNext(n);
                }
                //n1的结束标签改为n2的结束标签
                n1.EndLabelValue = n2.EndLabelValue;
                //删除流图对n2的记忆
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
                    //设置n1为已访问
                    AccessNode(n1);
                    //删除迭代器栈里的n1
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
