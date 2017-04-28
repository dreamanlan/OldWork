using System;
using System.Collections.Generic;
using System.Text;

namespace IL2CPP
{
    public class DependenceGraph
    {
        public DependenceGraphNode StartNode
        {
            get { return startNode; }
            set { startNode = value; }
        }
        public bool IsNode(string id)
        {
            return nodes.ContainsKey(id);
        }
        public DependenceGraphNode this[string id]
        {
            get
            {
                if (IsNode(id))
                    return nodes[id];
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
            cyclicDependences.Clear();
        }
        public bool IsDependent(DependenceGraphNode n1, DependenceGraphNode n2)
        {
            if (n1 == null || n2 == null || n1==n2)
                return false;
            Dictionary<DependenceGraphNode, bool> oldNodes = new Dictionary<DependenceGraphNode, bool>();
            Queue<DependenceGraphNode> iterateQueue = new Queue<DependenceGraphNode>();
            iterateQueue.Enqueue(n1);
            oldNodes[n1] = true;
            while (iterateQueue.Count > 0)
            {
                DependenceGraphNode n = iterateQueue.Dequeue();
                foreach (DependenceGraphNode nn in n.NextNodes)
                {
                    if (nn == n2)
                    {
                        iterateQueue.Clear();
                        oldNodes.Clear();
                        return true;
                    }
                    if (!oldNodes.ContainsKey(nn))
                    {
                        iterateQueue.Enqueue(nn);
                        oldNodes[nn] = true;
                    }
                }
            }
            return false;
        }
        public void Reset()
        {
            ElectStartNode();
            cyclicDependences.Clear();
            accessedNodes.Clear();
            unaccessedNodes.Clear();
            iterateStack.Clear();
            foreach (DependenceGraphNode node in nodes.Values)
            {
                unaccessedNodes[node] = true;
            }
            curNode = null;
            Next();
        }
        public DependenceGraphNode CurNode
        {
            get { return curNode; }
        }
        public bool IsAccessed(DependenceGraphNode node)
        {
            if (accessedNodes.ContainsKey(node))
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
            if (iterateStack.Count > 0)
            {
                curNode=PopDeepFirstNode();
                if (curNode != null)
                {
                    AccessNode(curNode);
                    return;
                }
            }
            if (unaccessedNodes.Count > 0)
            {
                IEnumerator<DependenceGraphNode> enumer = unaccessedNodes.Keys.GetEnumerator();
                enumer.MoveNext();
                curNode = enumer.Current;
                iterateStack.Push(curNode);
                PrepareAccessNode(curNode);
                curNode = PopDeepFirstNode();
                if (curNode != null)
                {
                    AccessNode(curNode);
                    return;
                }
            }
            curNode = null;
        }
        public List<KeyValuePair<string, string>> CyclicDependences
        {
            get { return cyclicDependences; }
        }
        private void ElectStartNode()
        {
            foreach (DependenceGraphNode n in nodes.Values)
            {
                if (n.PrevNodes.Count <= 0)
                {
                    startNode = n;
                    break;
                }
            }
            if (startNode == null && nodes.Count > 0)
                startNode = nodes.Values[0];
        }
        private DependenceGraphNode PopDeepFirstNode()
        {
            if (iterateStack.Count <= 0)
                return null;
            DependenceGraphNode node = iterateStack.Peek();
            while(node.NextNodes.Count>0)
            {                
                bool existNext = false;
                //每次只扩展一个后继，深度优先
                for (int i = 0; i < node.NextNodes.Count; i++)
                {
                    DependenceGraphNode n = node.NextNodes[i];
                    if (!accessedNodes.ContainsKey(n))
                    {
                        iterateStack.Push(n);
                        PrepareAccessNode(n);
                        existNext = true;
                        break;
                    }
                    else if(!accessedNodes[n])//依赖一个存于深度优先栈内的节点，表明有循环依赖
                    {
                        cyclicDependences.Add(new KeyValuePair<string, string>(node.ID, n.ID));
                    }
                }
                if (!existNext)
                {
                    break;
                }
                else
                {
                    node = iterateStack.Peek();
                }
            }
            node = iterateStack.Pop();
            return node;
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
        private void PrepareAccessNode(DependenceGraphNode node)
        {
            accessedNodes[node] = false;
            unaccessedNodes.Remove(node);
        }
        /// <summary>
        /// 设定一个结点为已访问结点，已访问结点是已经由迭代过程返回过的结点。
        /// </summary>
        /// <param name="node"></param>
        private void AccessNode(DependenceGraphNode node)
        {
            accessedNodes[node] = true;
        }
        public DependenceGraphNode NewNode(string id)
        {
            if (nodes.ContainsKey(id))
                return nodes[id];
            else
            {
                DependenceGraphNode node = new DependenceGraphNode(id);
                nodes[id] = node;
                return node;
            }
        }

        private DependenceGraphNode startNode = null;
        private SortedList<string, DependenceGraphNode> nodes = new SortedList<string, DependenceGraphNode>();

        private DependenceGraphNode curNode = null;
        private Stack<DependenceGraphNode> iterateStack = new Stack<DependenceGraphNode>();
        private Dictionary<DependenceGraphNode, bool> unaccessedNodes = new Dictionary<DependenceGraphNode, bool>();
        private Dictionary<DependenceGraphNode, bool> accessedNodes = new Dictionary<DependenceGraphNode, bool>();

        private List<KeyValuePair<string, string>> cyclicDependences = new List<KeyValuePair<string, string>>();
    }
    public class DependenceGraphNode
    {
        public string ID
        {
            get { return id; }
        }

        public IList<DependenceGraphNode> PrevNodes
        {
            get { return readonlyPrevNodes; }
        }

        public IList<DependenceGraphNode> NextNodes
        {
            get { return readonlyNextNodes; }
        }

        public void AddNext(params DependenceGraphNode[] ns)
        {
            foreach (DependenceGraphNode n in ns)
            {
                if (!n.PrevNodes.Contains(this))
                    n.prevNodes.Add(this);
                if (!nextNodes.Contains(n))
                    nextNodes.Add(n);
            }
        }

        public void DelNext(params DependenceGraphNode[] ns)
        {
            foreach (DependenceGraphNode n in ns)
            {
                n.prevNodes.Remove(this);
                nextNodes.Remove(n);
            }
        }

        public void ClearNext()
        {
            DelNext(nextNodes.ToArray());
        }

        public DependenceGraphNode(string _id)
        {
            id = _id;

            readonlyPrevNodes = prevNodes.AsReadOnly();
            readonlyNextNodes = nextNodes.AsReadOnly();
        }

        private string id = "";
        private List<DependenceGraphNode> prevNodes = new List<DependenceGraphNode>();
        private List<DependenceGraphNode> nextNodes = new List<DependenceGraphNode>();
        private IList<DependenceGraphNode> readonlyPrevNodes = null;
        private IList<DependenceGraphNode> readonlyNextNodes = null;
    }
}
