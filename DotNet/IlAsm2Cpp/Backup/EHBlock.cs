using System;
using System.Collections.Generic;
using System.Text;

namespace IL2CPP
{
    public class EHBlockNode
    {
        public EHBlock EncloseBlock
        {
            get { return encloseBlock; }
            set { encloseBlock = value; }
        }

        public long ScopeStart
        {
            get { return scopeStart; }
            set { scopeStart = value; }
        }

        public long ScopeEnd
        {
            get { return scopeEnd; }
            set { scopeEnd = value; }
        }

        public string ScopeStartLabel
        {
            get
            {
                return "IL_" + ScopeStart.ToString("X6") + ":";
            }
        }

        public string ScopeEndLabel
        {
            get
            {
                return "IL_" + ScopeEnd.ToString("X6") + ":";
            }
        }

        public List<EHBlock> EHBlocks
        {
            get { return ehBlocks; }
            set { ehBlocks = value; }
        }

        public EHBlock AddNewBlock()
        {
            EHBlock block = new EHBlock();
            block.EncloseNode = this;
            ehBlocks.Add(block);
            return block;
        }

        public EHBlockNode Find(long label)
        {
            if (scopeEnd>scopeStart && (label < scopeStart || label > scopeEnd))
                return null;
            foreach (EHBlock block in ehBlocks)
            {
                EHBlockNode n=block.Find(label);
                if (n != null)
                    return n;
            }
            return this;
        }

        private EHBlock encloseBlock = null;
        private long scopeStart=-1;
        private long scopeEnd=-1;
        private List<EHBlock> ehBlocks = new List<EHBlock>();
    }
    public class EHBlock
    {
        public EHBlockNode EncloseNode
        {
            get { return encloseNode; }
            set { encloseNode = value; }
        }

        public EHBlockNode TryNode
        {
            get { return tryNode; }
        }

        public List<EHBlockNode> CatchNodes
        {
            get { return catchNodes; }
        }

        public List<EHBlockNode> FilterNodes
        {
            get { return filterNodes; }
        }

        public List<EHBlockNode> FaultNodes
        {
            get { return faultNodes; }
        }

        public List<EHBlockNode> FinallyNodes
        {
            get { return finallyNodes; }
        }

        public EHBlockNode Find(long label)
        {
            EHBlockNode n=tryNode.Find(label);
            if (n != null)
                return n;
            foreach (EHBlockNode node in catchNodes)
            {
                n = tryNode.Find(label);
                if (n != null)
                    return n;
            }
            foreach (EHBlockNode node in filterNodes)
            {
                n = tryNode.Find(label);
                if (n != null)
                    return n;
            }
            foreach (EHBlockNode node in faultNodes)
            {
                n = tryNode.Find(label);
                if (n != null)
                    return n;
            }
            foreach (EHBlockNode node in finallyNodes)
            {
                n = tryNode.Find(label);
                if (n != null)
                    return n;
            }
            return null;
        }

        public EHBlockNode AddNewCatch()
        {
            EHBlockNode node = NewNode();
            catchNodes.Add(node);
            return node;
        }
        public EHBlockNode AddNewFinally()
        {
            EHBlockNode node = NewNode();
            finallyNodes.Add(node);
            return node;
        }
        public EHBlockNode AddNewFilter()
        {
            EHBlockNode node = NewNode();
            filterNodes.Add(node);
            return node;
        }
        public EHBlockNode AddNewFault()
        {
            EHBlockNode node = NewNode();
            faultNodes.Add(node);
            return node;
        }

        private EHBlockNode NewNode()
        {
            EHBlockNode node = new EHBlockNode();
            node.EncloseBlock = this;
            return node;
        }

        public EHBlock()
        {
            tryNode.EncloseBlock = this;
        }

        private EHBlockNode encloseNode = null;
        private EHBlockNode tryNode = new EHBlockNode();
        private List<EHBlockNode> catchNodes = new List<EHBlockNode>();
        private List<EHBlockNode> filterNodes = new List<EHBlockNode>();
        private List<EHBlockNode> faultNodes = new List<EHBlockNode>();
        private List<EHBlockNode> finallyNodes = new List<EHBlockNode>();
    }
}
