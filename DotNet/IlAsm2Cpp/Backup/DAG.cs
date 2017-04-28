using System;
using System.Collections.Generic;
using System.Text;

namespace IL2CPP
{
    /// <summary>
    /// 1�����ֻ����һ���ӱ��ʽ���ٴε���Generateʱֱ�ӷ��ػ�������ձ��ʽ���;
    /// 2�����ս����ʽʹ���ڲ�����ID�������ڲ����ʽ�Ľ�������������ڲ����û��IDʱ���ձ��Ż���������ӱ��ʽ;
    /// 3�������Ա����٣����ٵĽ�㲻�������κα��ʽ�������ٵĽ�㲻�����������ĺ�̣�������ĳ�����ʽ���ƻ���
    /// �������ʱͬʱ������������ֱ�ӻ��Ӻ�̽��;
    /// 4�������Կ�¡����¡�Ľ����һ���½�㣬�����½�������ֱ�ӻ��Ӻ�̶���ԭ����Ӧ��̵Ŀ�¡;
    /// 5�����ý�������̣��������ý�㣩���û�б������ʱ�ŵ��ú�������ӱ��ʽ��
    /// </summary>
    public abstract class DAGNode
    {
        public static DAGNode CreateNodeRef(DAGNode refedNode)
        {
            return CreateNodeRef(false, refedNode);
        }
        public static DAGNode CreateLeaf(long val)
        {
            return CreateLeaf(false, val);
        }
        public static DAGNode CreateLeaf(string data)
        {
            return CreateLeaf(false, data);
        }
        public static DAGNode CreateLeaf(IlOperand data)
        {
            return CreateLeaf(false, data);
        }
        public static DAGNode CreateUnary(string op, DAGNode v)
        {
            return CreateUnary(false, op, v);
        }
        public static DAGNode CreateBinary(string op, DAGNode v1, DAGNode v2)
        {
            return CreateBinary(false, op, v1, v2);
        }
        public static DAGNode CreateNodeRef(bool isStatement, DAGNode refedNode)
        {
            ReferenceNode node = new ReferenceNode();
            node.isStatement = isStatement;
            node.AddNext(refedNode);
            return node;
        }
        public static DAGNode CreateLeaf(bool isStatement, long val)
        {
            LeafNode node = new LeafNode();
            node.isStatement = isStatement;
            node.Value = val;
            return node;
        }
        public static DAGNode CreateLeaf(bool isStatement, string data)
        {
            LeafNode node = new LeafNode();
            node.isStatement = isStatement;
            node.data = data;
            return node;
        }
        public static DAGNode CreateLeaf(bool isStatement, IlOperand data)
        {
            LeafNode node = new LeafNode();
            node.isStatement = isStatement;
            node.data = data;
            return node;
        }
        public static DAGNode CreateUnary(bool isStatement, string op, DAGNode v)
        {
            UnaryNode node = new UnaryNode();
            node.isStatement = isStatement;
            node.Operator = op;
            node.AddNext(v);
            return node;
        }
        public static DAGNode CreateBinary(bool isStatement, string op, DAGNode v1, DAGNode v2)
        {
            BinaryNode node = new BinaryNode();
            node.isStatement = isStatement;
            node.Operator = op;
            node.AddNext(v1, v2);
            return node;
        }
        public static DAGNode CreateTernary(bool isStatement, string op, DAGNode v1, DAGNode v2, DAGNode v3)
        {
            TernaryNode node = new TernaryNode();
            node.isStatement = isStatement;
            node.Operator = op;
            node.AddNext(v1, v2, v3);
            return node;
        }
        public static DAGNode CreateMultiple(bool isStatement, string op, DAGNode[] args)
        {
            MultipleNode node = new MultipleNode();
            node.isStatement = isStatement;
            node.Operator = op;
            node.AddNext(args);
            return node;
        }

        public static DAGNode GetOriginalNode(DAGNode refedNode)
        {
            DAGNode node=refedNode;
            while (node is ReferenceNode)
            {
                node = node.NextNodes[0];
            }
            return node;
        }
        /// <summary>
        /// ȡһ������ID���������������϶�û��ID���򷵻�ԭʼҶ����Data�����ҲûԭʼҶ��㣬�򷵻ؿմ���
        /// </summary>
        /// <param name="refedNode"></param>
        /// <returns></returns>
        /// <remarks>ע�⣺�˷����ٶ����һ������һ�����������÷�Ӧȷ���˼������</remarks>
        public static string GetID(DAGNode refedNode)
        {
            DAGNode node = refedNode;
            while (node is ReferenceNode && node.Identifier.Length<=0)
            {
                node = node.NextNodes[0];
            }
            if (node.Identifier.Length <= 0 && node is LeafNode)
            {
                return node.Data;
            }
            return node.Identifier;
        }

        public IlOperand Operand
        {
            get
            {
                return data as IlOperand;
            }
            set
            {
                isConst = false;
                data = value;
            }
        }
        public string Data
        {
            get
            {
                if (data == null)
                    return "";
                else
                {
                    string s = data as string;
                    if (s == null)
                        return "";
                    return s;
                }
            }
            set
            {
                isConst = false;
                data = value;
            }
        }
        public long Value
        {
            get
            {
                if (IsConst)
                    return (long)data;
                else
                    return -1;
            }
            set
            {
                isConst = true;
                data = value;
            }
        }
        public bool IsConst
        {
            get { return isConst; }
        }

        public string Operator
        {
            get 
            {
                return Data;
            }
            set
            {
                isConst = false;
                Data = value; 
            }
        }
        public List<string> OtherOperators
        {
            get { return otherOperators; }
        }
        public string Identifier
        {
            get { return identifier; }
        }
        public TypeInfo IdTypeInfo
        {
            get { return idTypeInfo; }
        }
        public void SetID(string id, TypeInfo type)
        {
            if(id!=null)
                identifier = id;
            if(type!=null)
                idTypeInfo = type;
        }
        public IList<DAGNode> NextNodes
        {
            get { return readonlyNextNodes; }
        }
        public IList<DAGNode> PrevNodes
        {
            get { return readonlyPrevNodes; }
        }

        public bool IsStatement
        {
            get { return isStatement; }
            set { isStatement = value; }
        }
        /// <summary>
        /// �������ָ��ķ��ţ�Ĭ���Ƿֺţ�����䲻��Ҫ�ָ�������ʱ��Ϊ�մ���
        /// </summary>
        public string StatementSemicolon
        {
            get { return statementSemicolon; }
            set { statementSemicolon = value; }
        }        
        public bool IsComment
        {
            get { return isComment; }
            set { isComment = value; }
        }        
        public bool IsNull
        {
            get
            {
                return this is NullNode;
            }
        }

        public bool Contains(string varName)
        {
            if (Identifier == varName || Data == varName)
            {
                return true;
            }
            else
            {
                foreach (DAGNode node in nextNodes)
                {
                    if (node.Contains(varName))
                        return true;
                }
            }
            return false;
        }
        public bool CanDestroy()
        {
            if (prevNodes.Count > 0)
                return false;
            List<DAGNode> coll = new List<DAGNode>();
            BuildNextCollection(coll);
            return CanDestroy(coll);
        }
        /// <summary>
        /// ע��һ����㼰��������ֱ�Ӽ���Ӻ�̽�㣬�Ӷ��ý�㲻�������κα��ʽ��
        /// </summary>
        public void Destroy()
        {
            if (prevNodes.Count > 0)
                return;
            List<DAGNode> coll = new List<DAGNode>();
            BuildNextCollection(coll);
            if (!CanDestroy(coll))
                return;
            foreach (DAGNode _n in coll)
            {
                DAGNode[] ns = _n.nextNodes.ToArray();
                foreach (DAGNode n in ns)
                {
                    _n.DelNext(n);
                }

                _n.data = null;
                _n.otherOperators.Clear();
                _n.identifier = "";
                _n.idTypeInfo = UndefinedTypeInfo.Ref;
                _n.isStatement = false;
                _n.isComment = false;
                _n.statementSemicolon = ";";
                _n.isConst = false;

                _n.accessed = true;
                _n.exp = "";
            }
        }
        private bool CanDestroy(List<DAGNode> coll)
        {
            if (prevNodes.Count > 0)
                return false;
            foreach (DAGNode n in coll)
            {
                foreach (DAGNode p in n.prevNodes)
                {
                    if (!coll.Contains(p))
                        return false;
                }
            }
            return true;
        }
        private void BuildNextCollection(List<DAGNode> coll)
        {
            if (!coll.Contains(this))
            {
                coll.Add(this);
                foreach (DAGNode n in nextNodes)
                {
                    n.BuildNextCollection(coll);
                }
            }
        }
        /// <summary>
        /// ������¡��㼰��������ֱ�Ӽ���Ӻ�̽�㡣
        /// </summary>
        /// <returns></returns>
        public DAGNode Clone()
        {
            Dictionary<DAGNode, DAGNode> pairs = new Dictionary<DAGNode, DAGNode>();
            return Clone(pairs);
        }
        private DAGNode Clone(Dictionary<DAGNode,DAGNode> pairs)
        {
            if (pairs.ContainsKey(this))
                return pairs[this];
            DAGNode node = NewNode();
            pairs[this] = node;

            node.data = data;            
            node.otherOperators.AddRange(otherOperators);
            node.identifier = identifier;
            node.idTypeInfo = idTypeInfo;
            node.isStatement = isStatement;
            node.isComment = isComment;
            node.isConst = isConst;
            node.accessed = accessed;
            node.exp = exp;

            foreach (DAGNode n in nextNodes)
            {
                DAGNode nn = n.Clone(pairs);
                node.AddNext(nn);
            }
            return node;
        }

        protected bool Accessed
        {
            get { return accessed; }
            set { accessed = value; }
        }
        protected string Exp
        {
            get { return exp; }
            set { exp = value; }
        }

        public virtual long Calculate(Dictionary<string, long> varVals, ref bool setIfFailed)
        {
            return 0;
        }
        public string Generate(List<string> exps)
        {
            if (accessed)
            {
                return exp;
            }
            else
            {
                accessed = true;
            }
            string val = GenerateValue(exps);
            GenerateEvaluations(val, exps);
            return exp;
        }
        protected void GenerateEvaluations(string val,List<string> exps)
        {
            if (identifier.Length > 0)
            {
                string prestr="";
                if (IdTypeInfo.IsReference)
                    prestr = IdTypeInfo.TypeDefClause + " ";
                if (identifier != val)
                {
                    exps.Add(prestr + identifier + "=" + val + ";");
                }
                exp = identifier;
            }
            else
            {
                exp = val;
            }
        }
        protected abstract string GenerateValue(List<string> exps);
        protected abstract DAGNode NewNode();

        protected DAGNode()
        {
            readonlyNextNodes = nextNodes.AsReadOnly();
            readonlyPrevNodes = prevNodes.AsReadOnly();
        }

        private void AddNext(params DAGNode[] vs)
        {
            foreach (DAGNode v in vs)
            {
                if (!v.prevNodes.Contains(this))
                    v.prevNodes.Add(this);
                if(!nextNodes.Contains(v))
                    nextNodes.Add(v);
            }
        }
        private void DelNext(params DAGNode[] vs)
        {
            foreach (DAGNode v in vs)
            {
                v.prevNodes.Remove(this);
                nextNodes.Remove(v);
            }
        }

        private object data = null;
        private List<string> otherOperators = new List<string>();
        private string identifier = "";
        private TypeInfo idTypeInfo = UndefinedTypeInfo.Ref;
        private List<DAGNode> nextNodes = new List<DAGNode>();
        private IList<DAGNode> readonlyNextNodes = null;
        private List<DAGNode> prevNodes = new List<DAGNode>();
        private IList<DAGNode> readonlyPrevNodes = null;
        private bool isStatement = false;
        private bool isComment = false;
        private string statementSemicolon = ";";
        private bool isConst = false;

        private bool accessed = false;
        private string exp = "";
    }
    public class NullNode : DAGNode
    {
        public static NullNode Ref
        {
            get { return nullNode; }
        }

        private NullNode()
        {}
        protected override string GenerateValue(List<string> exps)
        {
            return "";
        }
        protected override DAGNode NewNode()
        {
            return Ref;
        }
        
        private static NullNode nullNode=new NullNode();
    }
    /// <summary>
    /// ���ý������ʵ��һ�����⹦�ܣ�ʹ��һ�����ʽ������һ�����ʽ�Ľ����ֻҪ��һ�����ʽ�����������
    /// ���������ñ��ʽ��һ��Identifier�������������ı��ʽ�����ظ�������䣬�����������Ľ�㴦������ڱ���
    /// �����õ��м��ֱ���ֵ���εĻ�����Ҳ����ԭ����ֵ��ջ���õĹ������ָ�����������ֵ��
    /// </summary>
    public class ReferenceNode : DAGNode
    {
        protected override string GenerateValue(List<string> exps)
        {
            if (NextNodes[0].Identifier.Length > 0)
                return NextNodes[0].Identifier;
            else
                return NextNodes[0].Generate(exps);
        }
        protected override DAGNode NewNode()
        {
            return new ReferenceNode();
        }
    }
    public class LeafNode : DAGNode
    {
        public override long Calculate(Dictionary<string, long> varVals,ref bool setIfFailed)
        {
            if (IsConst)
                return Value;
            else if(varVals.ContainsKey(Data))
                return varVals[Data];
            else
            {
                setIfFailed = true;                
                return -1;
            }
        }
        protected override string GenerateValue(List<string> exps)
        {
            if (IsConst)
                return "" + Value;
            else if (Operand != null)
                return Operand.Value;
            return Data;
        }
        protected override DAGNode NewNode()
        {
            return new LeafNode();
        }
    }
    public class UnaryNode : DAGNode
    {
        protected override string GenerateValue(List<string> exps)
        {
            if (Operator == "typeid")
                return NextNodes[0].Generate(exps) + "::typeid";
            else if (Operator == "sizeof" || Operator == "checked" || Operator == "unchecked")
                return Operator + "(" + NextNodes[0].Generate(exps) + ")";
            else if (Operator == "goto" || Operator == "return" || Operator == "throw")
                return Operator + " " + NextNodes[0].Generate(exps);
            else if (Operator == "new()")
                return NextNodes[0].Generate(exps) + "()";
            else if (Operator == "ToInt32" || Operator == "ToUInt32")
                return NextNodes[0].Generate(exps) + "." + Operator + "()";
            else
                return "(" + Operator + " " + NextNodes[0].Generate(exps) + ")";
        }
        protected override DAGNode NewNode()
        {
            return new UnaryNode();
        }
    }
    public class BinaryNode : DAGNode
    {
        protected override string GenerateValue(List<string> exps)
        {
            if (Operator == "=")
                return NextNodes[0].Generate(exps) + "=" + NextNodes[1].Generate(exps);
            else if (Operator == "new[]")
            {
                string t = NextNodes[0].Generate(exps);
                return "gcnew array<" + t + ">(" + NextNodes[1].Generate(exps) + ")";
            }
            else if (Operator == "[]")
                return NextNodes[0].Generate(exps) + "[" + NextNodes[1].Generate(exps) + "]";
            else if (Operator == "->" || Operator == "::" || Operator == ".")
                return NextNodes[0].Generate(exps) + Operator + NextNodes[1].Generate(exps);
            else if (Operator == "&::")
                return "&" + NextNodes[0].Generate(exps) + "::" + NextNodes[1].Generate(exps);
            else if (Operator == "*=")
                return "*" + NextNodes[0].Generate(exps) + "=" + NextNodes[1].Generate(exps);
            else if (Operator == "()")
            {
                return "safe_cast<" + NextNodes[0].Generate(exps) + ">(" + NextNodes[1].Generate(exps) + ")";
            }
            else if (Operator == "as")
            {
                return "dynamic_cast<" + NextNodes[0].Generate(exps) + ">(" + NextNodes[1].Generate(exps) + ")";
            }
            else if (Operator == "if")
            {
                if (OtherOperators.Count > 0)
                    return "if(" + OtherOperators[0] + NextNodes[0].Generate(exps) + ")goto " + NextNodes[1].Generate(exps);
                else
                    return "if(" + NextNodes[0].Generate(exps) + ")goto " + NextNodes[1].Generate(exps);
            }
            else if (Operator == "catch")
                return "catch(" + NextNodes[0].Generate(exps) + " " + NextNodes[1].Generate(exps) + "){";
            else
                return "(" + NextNodes[0].Generate(exps) + " " + Operator + " " + NextNodes[1].Generate(exps) + ")";
        }
        protected override DAGNode NewNode()
        {
            return new BinaryNode();
        }
    }
    public class TernaryNode : DAGNode
    {
        protected override string GenerateValue(List<string> exps)
        {
            if (Operator == "[]")
                return NextNodes[0].Generate(exps) + "[" + NextNodes[1].Generate(exps) + "]=" + NextNodes[2].Generate(exps);
            else if (Operator == "->" || Operator == "::" || Operator == ".")
                return NextNodes[0].Generate(exps) + Operator + NextNodes[1].Generate(exps) + "=" + NextNodes[2].Generate(exps);
            else if (Operator == "->+=")
            {
                return NextNodes[0].Generate(exps) + "->" + NextNodes[1].Generate(exps) + " += " + NextNodes[2].Generate(exps);
            }
            else if (Operator == "->-=")
            {
                return NextNodes[0].Generate(exps) + "->" + NextNodes[1].Generate(exps) + " -= " + NextNodes[2].Generate(exps);
            }
            else if (Operator == ".+=")
            {
                return NextNodes[0].Generate(exps) + "." + NextNodes[1].Generate(exps) + " += " + NextNodes[2].Generate(exps);
            }
            else if (Operator == ".-=")
            {
                return NextNodes[0].Generate(exps) + "." + NextNodes[1].Generate(exps) + " -= " + NextNodes[2].Generate(exps);
            }
            else if (Operator == "::+=")
            {
                return NextNodes[0].Generate(exps) + "::" + NextNodes[1].Generate(exps) + " += " + NextNodes[2].Generate(exps);
            }
            else if (Operator == "::-=")
            {
                return NextNodes[0].Generate(exps) + "::" + NextNodes[1].Generate(exps) + " -= " + NextNodes[2].Generate(exps);
            }
            else if (Operator == "if")
            {
                return
                    "if(" + NextNodes[0].Generate(exps) + OtherOperators[0] + NextNodes[1].Generate(exps) + ")goto " +
                    NextNodes[2].Generate(exps);
            }
            else if (Operator == "Array::Copy")
                return "Array::Copy(" + NextNodes[0].Generate(exps) + " , 0 , " + NextNodes[1].Generate(exps) + " , 0 , " + NextNodes[2].Generate(exps) + ")";
            else
                return "unknown_ternary";
        }
        protected override DAGNode NewNode()
        {
            return new TernaryNode();
        }
    }
    public class MultipleNode : DAGNode
    {
        protected override string GenerateValue(List<string> exps)
        {
            if(Operator=="switch")
            {
                string data = NextNodes[0].Generate(exps);
                string cases = "";
                for (int ix = 1; ix < NextNodes.Count; ix++)
                {
                    cases += "case " + (ix - 1) + ":goto " + NextNodes[ix].Generate(exps) + ";";
                }
                return "switch(" + data + "){" + cases + "}";
            }
            else if(Operator=="new()")
            {
                string method = NextNodes[0].Generate(exps);
                string argstr = "";
                string prestr = "";
                for (int ix = 1; ix < NextNodes.Count; ix++)
                {
                    argstr += prestr + NextNodes[ix].Generate(exps);
                    prestr = ",";
                }
                return "gcnew "+method + "(" + argstr + ")";
            }
            else if(Operator=="()")
            {
                string method = NextNodes[0].Generate(exps);
                string argstr = "";
                string prestr = "";
                for (int ix = 1; ix < NextNodes.Count; ix++)
                {
                    argstr += prestr + NextNodes[ix].Generate(exps);
                    prestr = ",";
                }
                return method + "(" + argstr + ")";
            }
            else if(Operator=="*()")
            {
                string ptrstr = NextNodes[0].Generate(exps);
                string argstr = "";
                string prestr = "";
                for (int ix = 1; ix < NextNodes.Count; ix++)
                {
                    argstr += prestr + NextNodes[ix].Generate(exps);
                    prestr = ",";
                }
                return ptrstr + "(" + argstr + ")";
            }
            else if(Operator=="->()")
            {
                string objstr = NextNodes[0].Generate(exps);
                string method = NextNodes[1].Generate(exps);
                string argstr = "";
                string prestr = "";
                for (int ix = 2; ix < NextNodes.Count; ix++)
                {
                    argstr += prestr + NextNodes[ix].Generate(exps);
                    prestr = ",";
                }
                return objstr + "->" + method + "(" + argstr + ")";
            }
            else if (Operator == ".()")
            {
                string objstr = NextNodes[0].Generate(exps);
                string method = NextNodes[1].Generate(exps);
                string argstr = "";
                string prestr = "";
                for (int ix = 2; ix < NextNodes.Count; ix++)
                {
                    argstr += prestr + NextNodes[ix].Generate(exps);
                    prestr = ",";
                }
                return objstr + "." + method + "(" + argstr + ")";
            }
            else if (Operator == "::()")
            {
                string objstr = NextNodes[0].Generate(exps);
                string method = NextNodes[1].Generate(exps);
                string argstr = "";
                string prestr = "";
                for (int ix = 2; ix < NextNodes.Count; ix++)
                {
                    argstr += prestr + NextNodes[ix].Generate(exps);
                    prestr = ",";
                }
                return objstr + "::" + method + "(" + argstr + ")";
            }
            else if (Operator == "->::()")
            {
                string objstr = NextNodes[0].Generate(exps);
                string typeSpec = NextNodes[1].Generate(exps);
                string method = NextNodes[2].Generate(exps);
                string argstr = "";
                string prestr = "";
                for (int ix = 3; ix < NextNodes.Count; ix++)
                {
                    argstr += prestr + NextNodes[ix].Generate(exps);
                    prestr = ",";
                }
                return objstr + "->" +typeSpec + "::" + method + "(" + argstr + ")";
            }
            else if (Operator == ".::()")
            {
                string objstr = NextNodes[0].Generate(exps);
                string typeSpec = NextNodes[1].Generate(exps);
                string method = NextNodes[2].Generate(exps);
                string argstr = "";
                string prestr = "";
                for (int ix = 3; ix < NextNodes.Count; ix++)
                {
                    argstr += prestr + NextNodes[ix].Generate(exps);
                    prestr = ",";
                }
                return objstr + "." + typeSpec + "::" + method + "(" + argstr + ")";
            }
            else if (Operator == ".*()")
            {
                string objstr = NextNodes[0].Generate(exps);
                string ptrstr = NextNodes[1].Generate(exps);
                string argstr = "";
                string prestr = "";
                for (int ix = 2; ix < NextNodes.Count; ix++)
                {
                    argstr += prestr + NextNodes[ix].Generate(exps);
                    prestr = ",";
                }
                return objstr + ".(" + ptrstr + ")(" + argstr + ")";
            }
            else if(Operator=="->*()")
            {
                string objstr = NextNodes[0].Generate(exps);
                string ptrstr = NextNodes[1].Generate(exps);
                string argstr = "";
                string prestr = "";
                for (int ix = 2; ix < NextNodes.Count; ix++)
                {
                    argstr += prestr + NextNodes[ix].Generate(exps);
                    prestr = ",";
                }
                return objstr + "->(" + ptrstr + ")(" + argstr + ")";
            }
            else if (Operator == "[]")
            {
                string objstr = NextNodes[0].Generate(exps);
                string argstr = "";
                string prestr = "";
                for (int ix = 1; ix < NextNodes.Count; ix++)
                {
                    argstr += prestr + NextNodes[ix].Generate(exps);
                    prestr = ",";
                }
                return objstr + "[" + argstr + "]";
            }
            else if (Operator == "[]=")
            {
                string objstr = NextNodes[0].Generate(exps);
                string argstr = "";
                string prestr = "";
                for (int ix = 1; ix < NextNodes.Count-1; ix++)
                {
                    argstr += prestr + NextNodes[ix].Generate(exps);
                    prestr = ",";
                }
                string val = NextNodes[NextNodes.Count - 1].Generate(exps);
                return objstr + "[" + argstr + "]=" + val;
            }
            return "unknown_multiple";
        }
        protected override DAGNode NewNode()
        {
            return new MultipleNode();
        }
    }
}
