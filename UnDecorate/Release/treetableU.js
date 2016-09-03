	//请注意当用"对象实例.事件名=事件处理;"安装事件处理时,实际上使得事件处理成为了
	//产生事件的对象实例的一个新方法.这样在事件处理函数中引用的this是产生事件的对象
	//实例,这样,不应将一个对象的方法直接安装为事件处理(会导致this指针不正确),而应通
	//过一些中间函数来转换.在HTML标签中安装的事件处理不会成为产生事件的对象实例的方法,
	//不过这已不是javascript语言的特性了.	
	
	//哈希表对象（javascript中对象就是哈希表，所以哈希表对象可以用Object的实例实现）
	//支持的操作如下：
	//	写入值：ob[key]=value;
	//	读取值：value=ob[key];
	//	删除值：delete ob[key];
	
	//继承实现：（这个方式是支持多继承的）
	//方法一：父类名.call(this,逗号分隔参数列表);
	//方法二：父类名.apply(this,参数数组);
	//其中this指当前子类对象，上面两个函数应在子类构造中首先调用。
	
	//模板模拟：（泛型支持）（本来模板参数直接放在构造函数参数里就可，但为了区分，不
	//						这么做）	
	//一、模板参数使用this对象上的某个对象成员。
	//二、模板类构造首先判断模板参数是否已定义，若未定义，则初始化为缺省的实现，无缺
	//　　省实现的应产生异常或提示信息(通常应有缺省实现)。
	//三、模板的具现通过派生子类实现，子类构造首先在this对象上初始化模板参数，然后调
	//　　用上述继承实现方法，这样就将模板参数传递给模板类了。
	//例子如下：
	//		function TemplateClassArgs(a,b,c,d)//模板类所用的模板参数类
	//		{
	//			if(typeof(a)=="undefined"||a==null)a=defaulta;
	//			if(typeof(b)=="undefined"||b==null)b=defaultb;
	//			if(typeof(c)=="undefined"||c==null)c=defaultc;
	//			if(typeof(d)=="undefined"||d==null)d=defaultd;
	//			this.arg1=a;
	//			this.arg2=b;
	//			this.arg3=c;
	//			this.arg4=d;
	//		}
	//		function TemplateClass()//模板类
	//		{		
	//			if(typeof(this.templateArg)=="undefined")
	//				this.templateArg=new TemplateClassArgs();
	//			//后续可按正常使用模板参数	
	//		}
	//		function TemplateInst()//模板具现类
	//		{
	//			this.templateArg=new TemplateClassArg(DA,DB,DC,DD);//准备模板参数
	//			TemplateClass.call(this);//继承模板类
	//		}
	//		//之后就可以建立TemplateInst的对象实例了。
	//四、函数模板在javascript中就是普通函数，无类型的参数与模板参数效果上是一致的。（
	//	  在javascript中参数无类型与多态效果上也是相似的，其实也就是无类型参数适应关系
	//	  包含父类子类适应关系的缘故。）
		
		
	//树的实现中的前两个类是数据结构意义上的树，后面派生的子类是用于显示的树。
	//树结点
	function TreeNode(name)
	{			
		this.nodes=new Array(0);
		this.parentNode=null;
		this.name=name;
		this.level=0;
		this.isLeafNode=true;
		this.isLastNode=true;		
		//计算每个结点距根结点的层数
		function addLevel(node,level)//内部函数,用作私有成员.
		{
			node.level=level+1;			
			for(var n=0;n<node.nodes.length;n++)
				addLevel(node.nodes[n],node.level);
		}
		//得到索引
		this.getIndex=function()
		{
			if(this.parentNode==null)return -1;
			for(var i=0;i<this.parentNode.nodes.length;i++)
				if(this.parentNode.nodes[i]==this)return i;
			return -1;
		}
		//加入一个子结点
		this.addNode=function(node)
		{	
			this.isLeafNode=false;
			node.parentNode=this;
			addLevel(node,this.level);
			var l=this.nodes.length;
			if(l>0)this.nodes[l-1].isLastNode=false;
			this.nodes[l]=node;
		}		
		//删除一个子结点				
		this.removeNode=function(nodeindex)
		{			
			if(nodeindex>=this.nodes.length)return;
			this.nodes[nodeindex].isLastNode=true;
			var l=this.nodes.length;			
			this.nodes.splice(nodeindex,1);
			if(l<=1)
				this.isLeafNode=true;
			else
				this.nodes[l-2].isLastNode=true;
		}
		//返回结点描述信息
		this.toString=function()
		{			
			var prestr=""
			for(var j=0;j<this.level;j++)prestr+=" ";
			var str=prestr+this.name;
			for(var i=0;i<this.nodes.length;i++)
			{			
				str+="\n"+this.nodes[i].toString();
			}
			return str;
		}
	}	
	//树
	function TreeArgs(nodeType)
	{
		if(typeof(nodeType)=="undefined"||nodeType==null)nodeType=TreeNode;
		this.NodeType=nodeType;
	}
	function Tree(name)
	{		
		if(typeof(this.TAS)=="undefined")//判断模板参数是否已定义,若未定义则使用缺省参数
			this.TAS=new TreeArgs();
			
		this.rootNode=new this.TAS.NodeType(name);
			
		this.onIterateBefore=null;
		//迭代方法顺序与表中显示顺序一致
		this.iterateBefore=function(startnode,previ)//前序遍历树结点
		{
			var stack=new Array(0);
			var i=previ;
			var node=startnode;			
			stack.push(node);
			while(stack.length>0)
			{
				node=stack.pop();
				i++;
				if(this.onIterateBefore!=null)
				{
					if(!this.onIterateBefore(i,node))break;
				}
				if(!node.isLeafNode)
				{
					for(var j=node.nodes.length-1;j>=0;j--)
					{
						stack.push(node.nodes[j]);
					}
				}
			}
		}	
		//构造一个新结点
		this.newNode=function(name)
		{
			var node=new this.TAS.NodeType(name);
			return node;
		}
		//返回描述信息
		this.toString=function ()
		{	
			return ""+this.rootNode;
		}
	}
	//至此纯数据结构的树结点及树完成。
	//后面的类用于表述显示用的树，更确切说是用HTML表来构造的树。
	//用表行显示的树结点,这个类假定row就是HTML表的行，这里的行
	//一定要是传给TreeTable的表上的行,在表对象实例上应已添加了
	//方法setRowLine、insertNode、deleteNode与特性tree。	
	function TreeTableNode(name)
	{
		TreeNode.call(this,name);
		
		this.row=null;//对应显示行
		this.isSecondImage=false;//是否用第二类图标表示此结点
		//内部函数,用作私有成员
		function setTreeLine(table,node)
		{
			table.setRowLine(node.row);
			for(var i=0;i<node.nodes.length;i++)
			{
				setTreeLine(table,node.nodes[i]);
			}
		}		
		//设定结点为第二类图标表示
		this.useSecondImage=function()
		{
			this.isSecondImage=true;
		}
		//加入一个子结点并显示为表行	
		this.addTreeNode=function(node)
		{		
			this.addNode(node);
			if(this.row==null)return;
			var table=this.row.parentElement.parentElement;
			function insertNode(index,node)
			{
				window.status="iterate:"+index+" "+node.name;
				table.insertNode(index,node);
				return true;
			}			
			table.tree.onIterateBefore=insertNode;			
			var  l=this.nodes.length;
			if(l<=1)
			{							
				table.setRowLine(this.row);
				table.tree.iterateBefore(node,this.row.rowIndex);
			}
			else
			{	
				var ni=0;
				var prevNode=this.nodes[l-2];
				while(prevNode.nodes.length>0)prevNode=prevNode.nodes[prevNode.nodes.length-1];
				table.tree.iterateBefore(node,prevNode.row.rowIndex);
				var tn=this.nodes[l-2];
				setTreeLine(table,tn);
			}
		}
		//删除一个子结点并删除对应的表行
		this.removeTreeNode=function(nodeindex)
		{
			if(nodeindex>=this.nodes.length)return;
			var node=this.nodes[nodeindex];
			this.removeNode(nodeindex);
			var table=this.row.parentElement.parentElement;
			if(this.row==null)return;			
			function deleteNode(index,node)
			{
				window.status="iterate:"+node.name;
				table.deleteNode(node);
				return true;
			}
			table.tree.onIterateBefore=deleteNode;
			table.tree.iterateBefore(node,-1);				
			if(this.isLeafNode)
			{
				table.setRowLine(this.row);			
			}
			else
			{
				var l=this.nodes.length;					
				var tn=this.nodes[l-1];
				setTreeLine(table,tn);
			}			
		}		
	}	
	//用表作树容器的树
	function TreeTableArgs(nodeType,tableType)
	{
		if(typeof(nodeType)=="undefined"||nodeType==null)nodeType=TreeTableNode;
		TreeArgs.call(this,nodeType);
		if(typeof(tableType)=="undefined"||tableType==null)tableType=TreeUseTable;
		this.TableType=tableType;
	}
	function TreeTable(name,table,imagepath)
	{	
		table.finished=false;
		if(typeof(this.TAS)=="undefined")this.TAS=new TreeTableArgs();
		Tree.call(this,name);				
				
		table.tree=this;//将树绑定到表上		
		var tree=this;//保存this对象到局部变量，供作私有成员的嵌入函数访问						
		this.lastClickNode=null;
		this.selectedNode=null;		
		this.useTable=new this.TAS.TableType(table,imagepath);					
		
		//内部函数，用于展开/隐藏树
		function ExtendSubTree(row)
		{			
			var layer=parseInt(row.level,10);
			var curRow=row;					
			if(row.isExtend=='true')
			{			
				row.isExtend='false';			
				table.extendRow(row,false);		
				do
				{
					curRow=curRow.nextSibling;
					if(curRow==null)break;
					var curLayer=parseInt(curRow.level,10);
					if(curLayer>layer)
					{
						curRow.className='LanRowHide';					
					}								
				}while(curLayer>layer&&curRow!=null);			
			}
			else
			{
				row.isExtend='true';
				table.extendRow(row,true);		
				do
				{
					curRow=curRow.nextSibling;
					if(curRow==null)break;
					var curLayer=parseInt(curRow.level,10);
					//原来未展开的保持关闭
					while(curLayer>layer&&curRow.isExtend=='false')
					{
						curRow.className='LanRowShow';
						var tlayer=curLayer;
						do
						{
							curRow=curRow.nextSibling;
							if(curRow==null)break;;
							curLayer=parseInt(curRow.level,10);
							if(curLayer>tlayer)
							{
								//curRow.className='LanRowHide';					
							}
						}while(curLayer>tlayer&&curRow!=null);
						if(curRow==null)break;
					}
					//原来展开的展开				
					if(curRow!=null&&curLayer>layer)
					{
						curRow.className='LanRowShow';
					}				
				}while(curLayer>layer&&curRow!=null);			
			}
		}	
		table.onclick=function()
		{
			var obj=window.event.srcElement;
			if(typeof(obj.itag)=='undefined')return;			
			if(obj.itag=='imgext')
			{	
				var rowd=this.extImgToRow(obj);
				if(typeof(this.extendObj)=="object")					
				{
					var sobj=this.extendObj;
					var rows=this.extImgToRow(sobj);										
					if(rows.isExtend=="true")
					{
						var nodes=rows.node;	
						var noded=rowd.node;					
						while(noded.level<nodes.level)nodes=nodes.parentNode;	
						rows=nodes.row;
						if(nodes==noded)rows=null;
						if(noded.level>nodes.level)rows=null;
						if(rows!=null)ExtendSubTree(rows);
					}	
				}
				ExtendSubTree(rowd);
				this.extendObj=obj;
			}			
		}		
		table.onmousedown=function()
		{
			var obj=window.event.srcElement;	
			if(typeof(obj.itag)=='undefined')return;
			if(obj.itag=='imgext'||obj.itag=='imgimg')
			{
				tree.lastClickNode=this.extImgToRow(obj).node;
			}
			if(obj.itag=='txtfont')
			{			
				var tempimg=null;					
				var row=this.txtToRow(obj);
				tree.lastClickNode=row.node;
				if(typeof(this.selectedObj)=='undefined'||this.selectedObj==null)this.selectedObj=obj;
				if(this.selectedObj!=obj)
				{
					if(tree.selectedNode!=null)
						table.openRow(tree.selectedNode.row,false);
					this.selectedObj.className='LanMouseOut';										
					this.selectedObj=obj;
				}
				this.selectedObj.className='LanSelected';
				table.openRow(row,true);
				tree.select(row.rowIndex,row.node);
			}
		}
		/*出于性能考虑，不进行鼠标移动的事件处理
		table.onmouseover=function()
		{
			var obj=window.event.srcElement;	
			if(typeof(obj.itag)=='undefined')return;
			if(obj.itag=='txtfont')
			{
				if(obj.className!='LanSelected')
					obj.className='LanMouseOver';	
			}
		}
		table.onmouseout=function()
		{
			var obj=window.event.srcElement;	
			if(typeof(obj.itag)=='undefined')return;
			if(obj.itag=='txtfont')
			{
				if(obj.className!='LanSelected')
					obj.className='LanMouseOut';	
			}
		}
		*/			
		//展开、收缩某结点
		this.clickNode=function(node)
		{
			var row=node.row;
			if(row==null)return;
			var img=table.rowToExtImg(row);
			img.click();
		}
		//选中某结点
		this.selectNode=function(node)
		{
			var row=node.row;
			if(row==null)return;
			var txt=table.rowToTxt(row);
			txt.fireEvent("onmousedown");
		}
		this.onSelect=null;		
		//触发选中事件
		this.select=function(rowindex,node)
		{
			this.selectedNode=node;
			if(this.onSelect!=null)this.onSelect(rowindex,node);			
		}	
		//树迭代事件处理
		function insertNode(index,node)
		{
			window.status="iterate:"+index+" "+node.name;
			table.insertNode(index,node);
			return true;
		}
		//一次性构造树
		this.buildTreeTable=function()
		{
			this.onIterateBefore=insertNode;
			while(table.rows.length>0)
			{
				table.deleteRow();
			}			
			this.iterateBefore(this.rootNode,-1);
			this.onIterateBefore=null;
		}		
		//将根结点插入表中		
		if(table.rows.length<=0)
		{
			table.insertNode(0,this.rootNode);
			table.finished=true;
			if(typeof(table.onFinished)!='undefined'&&table.onFinished!=null)table.onFinished(tree);
		}
		else
		{
			var curPNode=null;
			var curNode=null;
			var lvl=0;							
			var curi=0;
			function attach()
			{				
				var row=table.rows[curi];				
				lvl=parseInt(row.level,10)-1;
				var txt=table.rowToText(row);				
				var name=txt.innerText;
				if(curNode!=null)
				{
					if(lvl>curNode.level)
					{
						curPNode=curNode;
					}
					if(lvl<curNode.level)
					{
						for(var ii=lvl;ii<curNode.level;ii++)
							curPNode=curPNode.parentNode;
					}
				}
				curNode=tree.newNode(name);
				if(row.useSecondImage=="true")curNode.useSecondImage();
				curNode.row=row;				
				row.node=curNode;					
				if(curPNode==null)
					tree.rootNode=curNode;
				else
					curPNode.addNode(curNode);								
				curi++;
				if(curi<table.rows.length)
				{
					setTimeout(attach,1);
				}
				else
				{
					table.finished=true;
					if(typeof(table.onFinished)!='undefined'&&table.onFinished!=null)table.onFinished(tree);
				}
			}								
			attach();			
		}
	}
	//用以实现树的表
	function TreeUseTable(table,imagepath)
	{	
		this.openImage=imagepath+'openfolder.gif';
		this.closeImage=imagepath+'folder.gif';
		this.open2Image=imagepath+'yellow.gif';
		this.close2Image=imagepath+'green.gif';
		this.vLine=imagepath+"line1.gif";
		this.line=imagepath+"line2.gif";
		this.lastLine=imagepath+"line3.gif";
		this.minus=imagepath+"minus.gif";
		this.lastMinus=imagepath+"lastminus.gif";
		this.plus=imagepath+"plus.gif";
		this.lastPlus=imagepath+"lastplus.gif";
		this.empty=imagepath+"blank.gif";
		var thisObj=this;//保存this对象到局部变量，供作私有成员的嵌入函数访问
		var tree=table.tree;
		//设置某结点的线状图标
		table.setRowLine=function(row)
		{	
			var node=row.node;
			var pnode=new Array(0);
			var obj=row.cells[0].children[0].rows[0];			
			pnode[node.level]=node;
			for(var i=node.level-1;i>=0;i--)
			{
				pnode[i]=pnode[i+1].parentNode;
			}
			for(i=0;i<node.level;i++)
			{				
				var ttt=thisObj.vLine;
				if(pnode[i].isLastNode)ttt=thisObj.empty;
				obj.cells[i].children[0].src=ttt;
			}			
			var line=row.cells[0].children[0].rows[0].cells[node.level].children[0];
			if(node.isLeafNode)
			{
				line.itag="imgimg";
				if(node.isLastNode)
					line.src=thisObj.lastLine;
				else				
					line.src=thisObj.line;
			}
			else
			{
				line.itag="imgext";
				if(node.isLastNode)
				{
					if(row.isExtend=="true")
						line.src=thisObj.lastMinus;
					else
						line.src=thisObj.lastPlus;
				}
				else				
				{
					if(row.isExtend=="true")
						line.src=thisObj.minus;
					else
						line.src=thisObj.plus;
				}
			}
		}
		//插入对应于结点的表行
		table.insertNode=function(index,node)
		{			
			var width=20;
			var fontSize=0;
			if(node==null)return;
			var obr=this.insertRow(index);
			var obc=obr.insertCell();		
			var obt=document.createElement("<table border='0' width='100%' cellspacing='0' cellpadding='0' ></table>")
			obc.appendChild(obt);
			var obr2=obt.insertRow();			
			var pnode=new Array();
			pnode[node.level]=node;
			for(var i=node.level-1;i>=0;i--)
			{
				pnode[i]=pnode[i+1].parentNode;
			}
			for(i=0;i<node.level;i++)
			{				
				var ttt=thisObj.vLine;
				if(pnode[i].isLastNode)ttt=thisObj.empty;
				code="<img src='"+ttt+"'>";			
				var ttt2=document.createElement(code);
				obc=obr2.insertCell();						
				obc.width=width;
				obc.style.fontSize=fontSize;
				obc.appendChild(ttt2);								
			}							
			var line="";
			var img="";
			if(node.isLeafNode)
			{
				if(node.isLastNode)
					line=thisObj.lastLine;
				else
					line=thisObj.line;
			}
			else
			{
				if(node.level==0)
				{
					if(node.isLastNode)
					{					
						line=thisObj.lastMinus;					
					}
					else				
					{
						line=thisObj.minus;					
					}
				}
				else
				{
					if(node.isLastNode)
					{					
						line=thisObj.lastPlus;					
					}
					else				
					{
						line=thisObj.plus;					
					}
				}
			}
			if(node.isSecondImage)
				img=thisObj.close2Image;
			else
				img=thisObj.closeImage;			
			var co=document.createElement("<img src='"+line+"'>");
			if(node.isLeafNode)
				co.itag="imgimg";
			else
				co.itag="imgext";
			obc=obr2.insertCell();						
			obc.width=width;
			obc.style.fontSize=fontSize;
			obc.appendChild(co);
			var co2=document.createElement("<img src='"+img+"'>");
			co2.itag="imgoc";
			obc=obr2.insertCell();						
			obc.width=width;
			obc.style.fontSize=fontSize;
			obc.appendChild(co2);
			var co3=document.createElement("span");
			co3.itag="txtfont";
			co3.className="LanMouseOut";			
			co3.innerText=node.name;						
			var obc2=obr2.insertCell();
			obc2.noWrap=true;						
			obc2.appendChild(co3);
			//在行对象实例上记忆显示对象及对应树结点信息
			obr.node=node;
			obr.level=node.level;
			if(obr.level==0)								
				obr.isExtend="true";
			else
				obr.isExtend="false";	
			if(obr.level>1)
				obr.className="LanRowHide";
						
			node.row=obr;
		}
		//删除表行
		table.deleteNode=function(node)
		{ 	
			var index=node.row.rowIndex;	
			node.row=null;		
			if(index>=0&&index<this.rows.length&&tree.selectedNode==this.rows[index].node)
			{
				tree.selectedNode=null;
				tree.selectedCell=null;
				this.selectedObj=null;
			}			
			this.deleteRow(index);		
		}
		table.extImgToRow=function(obj)
		{
			return obj.parentElement.parentElement.parentElement.parentElement.parentElement.parentElement;
		}		
		table.rowToExtImg=function(row)
		{
			return row.cells[0].children[0].rows[0].lastChild.previousSibling.previousSibling.children[0];
		}
		table.txtToRow=function(obj)
		{
			return obj.parentElement.parentElement.parentElement.parentElement.parentElement.parentElement;
		}		
		table.rowToTxt=function(row)
		{
			return row.cells[0].children[0].rows[0].lastChild.children[0];
		}		
		table.extendRow=function(row,isExtend)
		{
			var node=row.node;
			var obj=row.cells[0].children[0].rows[0].cells[node.level].children[0];
			if(!isExtend)
			{
				if(!row.node.isLastNode)
					obj.src=thisObj.plus;
				else
					obj.src=thisObj.lastPlus;
			}
			else
			{
				if(!row.node.isLastNode)
					obj.src=thisObj.minus;
				else
					obj.src=thisObj.lastMinus;
			}
		}
		table.openRow=function(row,isOpen)
		{	
			var node=row.node;
			var tempimg=row.cells[0].children[0].rows[0].cells[node.level+1].children[0];
			if(!isOpen)
			{				
				if(row.node!=null&&row.node.isSecondImage)
				{
					tempimg.src=thisObj.close2Image;
				}
				else
					tempimg.src=thisObj.closeImage;
			}
			else
			{						
				if(row.node!=null&&row.node.isSecondImage)
				{
					tempimg.src=thisObj.open2Image;
				}
				else
					tempimg.src=thisObj.openImage;
			}
		}		
	}	
	//用以实现树的另一种样式的表
	function TreeUseTable2(table,imagepath)
	{	
		this.bandImage=imagepath+'band.gif';
		this.band2Image=imagepath+'band2.gif';
		this.openImage=imagepath+'Item.gif';
		this.closeImage=imagepath+'Item2.gif';
		this.selectImage=imagepath+'Item.gif';
		this.empty=imagepath+"blank.gif";
		
		var thisObj=this;//保存this对象到局部变量，供作私有成员的嵌入函数访问
		var tree=table.tree;
		//设置某结点的线状图标
		table.setRowLine=function(row)
		{	
			//这种样式里不使用线，这里仅修正结点信息
			var node=row.node;
			if(node.level==0)return;
			var txt=row.cells[0].lastChild;			
			if(node.isLeafNode)
			{
				//if(node.level==1)
				//	txt.itag="imgimg";
				//else
					txt.itag="txtfont";
			}
			else
				txt.itag="imgext";
			return;			
		}
		//插入对应于结点的表行
		table.insertNode=function(index,node)
		{	
			if(node==null)return;
			var obr=this.insertRow(index);
			var obc=obr.insertCell();			
			obc.noWrap=true;							
			var pnode=new Array();
			pnode[node.level]=node;
			for(var i=node.level-1;i>=0;i--)
			{
				pnode[i]=pnode[i+1].parentNode;
			}
			for(i=0;i<node.level;i++)
			{				
				code="<img height=15px src='"+thisObj.empty+"'>";			
				var ttt=document.createElement(code);		
				obc.appendChild(ttt);								
			}	
			//确定图标
			if(node.level>1)
			{
				var txtspan=document.createElement("span");			
				if(node.isLeafNode)
					txtspan.itag="txtfont";
				else
					txtspan.itag="imgext";
				txtspan.className="LanMouseOut";			
				txtspan.style.color="white";
				txtspan.innerText="    "+node.name;
				txtspan.style.width="140px";
				txtspan.style.backgroundImage="url("+thisObj.closeImage+")";
				obc.appendChild(txtspan);
			}			
			else
			{
				var txtspan=document.createElement("span");			
				if(node.isLeafNode)
					txtspan.itag="txtfont";//"imgimg";
				else
					txtspan.itag="imgext";
				txtspan.className="LanMouseOut";											
				txtspan.innerText="  "+node.name;
				txtspan.style.width="165px";
				txtspan.style.backgroundImage="url("+thisObj.bandImage+")";
				obc.appendChild(txtspan);
			}
			//在行对象实例上记忆显示对象及对应树结点信息
			obr.node=node;
			obr.level=node.level;
			if(obr.level==0)								
				obr.isExtend="true";
			else
				obr.isExtend="false";				
			if(obr.level!=1)
				obr.className="LanRowHide";						
			node.row=obr;
		}
		//删除表行
		table.deleteNode=function(node)
		{ 	
			var index=node.row.rowIndex;	
			node.row=null;		
			if(index>=0&&index<this.rows.length&&tree.selectedNode==this.rows[index].node)
			{
				tree.selectedNode=null;
				tree.selectedCell=null;
				this.selectedObj=null;
			}			
			this.deleteRow(index);		
		}
		table.extImgToRow=function(obj)
		{
			return obj.parentElement.parentElement;
		}	
		table.rowToExtImg=function(row)
		{
			return row.cells[0].lastChild;
		}	
		table.txtToRow=function(obj)
		{
			return obj.parentElement.parentElement;
		}		
		table.rowToTxt=function(row)
		{
			return row.cells[0].lastChild;
		}		
		table.extendRow=function(row,isExtend)
		{
			var node=row.node;
			var obj=row.cells[0].children[node.level];			
			if(!isExtend)
			{
				if(node.level==1)
				{
					obj.style.backgroundImage="url("+thisObj.bandImage+")";
					obj.style.color="black";
				}
				else
				{
					obj.style.backgroundImage="url("+thisObj.closeImage+")";
				}
			}
			else
			{
				if(node.level==1)
				{
					obj.style.backgroundImage="url("+thisObj.band2Image+")";
					obj.style.color="white";
				}
				else
				{
					obj.style.backgroundImage="url("+thisObj.openImage+")";
				}
			}
		}
		table.openRow=function(row,isOpen)
		{		
			var node=row.node;
			var obj=row.cells[0].children[node.level];			
			if(isOpen)
			{
				if(node.level==1)
				{
					obj.style.backgroundImage="url("+thisObj.band2Image+")";
					obj.style.color="white";
				}
				else
				{
					obj.style.backgroundImage="url("+thisObj.selectImage+")";
				}				
			}
			else
			{
				if(node.level==1)
				{
					obj.style.backgroundImage="url("+thisObj.bandImage+")";					
					obj.style.color="black";
				}
				else
				{
					obj.style.backgroundImage="url("+thisObj.closeImage+")";
				}				
			}
		}		
	}	
	function TreeTable2(name,table,imagepath)
	{
		this.TAS=new TreeTableArgs(TreeTableNode,TreeUseTable2);
		TreeTable.call(this,name,table,imagepath);
	}
//TabSheet控件
	function TabSheet(parent)
	{
		this.tabs=new Array(0);
		this.sheets=new Array(0);	
		this.activeIndex=-1;	
		this.table=document.createElement("<table border='0' cellspacing='0' cellpadding='0' width=100% height=100%></table>");
		var  r1=this.table.insertRow();
		r1.className="TabHeadRow";
		var r2=this.table.insertRow();
		var ht=document.createElement("<table border='0' cellspacing='0' cellpadding='0' width=100% height=100%></table>");
		var hc=r1.insertCell();
		hc.appendChild(ht);
		r1=ht.insertRow();
		this.head=r1.insertCell();		
		this.userArea=r1.insertCell();//用户定制区
		this.userArea.align="right";
		this.body=r2.insertCell();		
		this.body.className="LanFrame";
		this.body.align="center";
		this.body.vAlign="top";
		parent.tabSheet=this;//绑定到父控件		
		parent.appendChild(this.table);
		var thisObj=this;
		//内部使用函数,用作私有成员
		function addTab(tab)
		{
			var l=thisObj.tabs.length;
			thisObj.tabs[l]=tab;
			return l;
		}
		function addSheet(sheet)
		{
			var l=thisObj.sheets.length;
			thisObj.sheets[l]=sheet;
			return l;
		}
		function removeTab(index)
		{
			if(index<0)return;
			var l=thisObj.tabs.length;
			if(index>=l)return;
			thisObj.tabs.splice(index,1);
		}
		function removeSheet(index)
		{
			if(index<0)return;
			var l=thisObj.sheets.length;
			if(index>=l)return;
			thisObj.sheets.splice(index,1);
		}
		//公有方法与事件部分
		this.onActiveSheet=null;
		this.activateSheet=function(index)
		{		
			if(index<0)return;
			var l=this.tabs.length;
			if(index>=l)return;
			if(this.activeIndex>=0)
			{
				this.tabs[this.activeIndex].className="LanButtonDown";
				this.sheets[this.activeIndex].style.display="none";
			}
			this.activeIndex=index;
			this.tabs[this.activeIndex].className="LanButton";
			this.sheets[this.activeIndex].style.display="";
			if(this.onActiveSheet!=null)this.onActiveSheet(index);
		}
		this.addSheet=function(name,sheet)
		{
			var tab=document.createElement("span");
			tab.className="LanButtonDown";
			tab.innerText=name;	
			this.head.appendChild(tab);
			var i=addTab(tab);
			var obj=this;
			tab.onclick=function()
			{			
				for(var i=0;i<obj.tabs.length;i++)
				{
					if(obj.tabs[i]==this)
					{
						obj.activateSheet(i);
						break;
					}
				}
			}			
			addSheet(sheet);
			this.body.appendChild(sheet);
			sheet.style.display="none";
			if(this.sheets.length==1)this.activateSheet(0);
		}
		this.removeSheet=function(index)
		{
			this.head.removeChild(this.head.children[index]);
			this.body.removeChild(this.body.children[index]);			
			removeTab(index);
			removeSheet(index);
			if(this.activeIndex>index)this.activeIndex--;
			if(this.activeIndex==index)
			{
				this.activeIndex=-1;
				this.activateSheet(0);
			}
		}
	}
	//Table控件，很可惜，我们只能用组合的方法来封装HTML对象
	function Table(externaltable,noHead)
	{		
		this.selectedObj=null;
		if(typeof(noHead)!="undefined"&&noHead)
			this.noHead=true;
		else
			this.noHead=false;		
		this.refreshStyle=function()
		{			
			for(var i=0;i<this.table.rows.length;i++)
			{
				if(!this.noHead&&i==0)
					this.table.rows[i].className="LanHeadRow";
				else if(i%2==0)
					this.table.rows[i].className="LanOddRow";
				else
					this.table.rows[i].className="LanEvenRow";
			}		
		}
		this.setNoHead=function()
		{
			this.noHead=true;
			this.refreshStyle();
		}
		if(typeof(externaltable)!='undefined'&&externaltable!=null)
		{
			this.table=externaltable;
			this.table.capTable=this;
			this.refreshStyle();			
		}
		else
		{
			this.table=document.createElement("<table border='1' cellspacing='0' cellpadding='0'></table>");		
			this.table.capTable=this;
		}
		this.table.className="LanTable";
		this.table.onmousedown=mouseDown;
		//出于性能考虑，不进行鼠标移动的事件处理
		//this.table.onmouseover=mouseOver;
		//this.table.onmouseout=mouseOut;
		var obj=this;		
		//内部函数,用作私有成员
		function eventCell()
		{
			var cell=event.srcElement;			
			if(cell.tagName=="TD")
				return cell;
			return null;	
		}
		//内部函数,用作事件处理
		function mouseDown()
		{
			var cell=eventCell();
			if(cell==null)return;
			var ri=cell.parentElement.rowIndex;
			if(!obj.noHead&&ri<1)return;
			var ci=cell.cellIndex;
			obj.select(ri,ci,cell.innerText,cell);		
		}
		//内部函数,用作事件处理
		function mouseOver()
		{
			var cell=eventCell();
			if(cell==null)return;
			if(cell.className!="LanCellSelect")cell.className="LanCellOver";
		}
		//内部函数,用作事件处理
		function mouseOut()
		{
			var cell=eventCell();
			if(cell==null)return;
			if(cell.className!="LanCellSelect")cell.className="LanCellOut";
		}
		//选中事件
		this.onSelect=null;
		this.select=function(rowindex,colindex,text,obj)
		{
			if(this.selectedObj!=null)this.selectedObj.className="LanCellOut";
			this.selectedObj=obj;
			obj.className="LanCellSelect";
			if(this.onSelect!=null)this.onSelect(rowindex,colindex,text,obj);
		}	
		this.appendRow=function()
		{
			var row=this.table.insertRow();
			if(!this.noHead&&row.rowIndex==0)
				row.className="LanHeadRow";
			else if(row.rowIndex%2==0)
				row.className="LanOddRow";
			else
				row.className="LanEvenRow";
			return row;
		}
		this.setText=function(rindex,cindex,text)
		{			
			var l=this.table.rows.length;			
			var row=null;
			if(rindex<0||rindex>=l)
			{
				row=this.table.insertRow();
				if(!this.noHead&&row.rowIndex==0)
					row.className="LanHeadRow";
				else if(row.rowIndex%2==0)
					row.className="LanOddRow";
				else
					row.className="LanEvenRow";
			}
			else
			{
				row=this.table.rows[rindex];
			}			
			l=row.cells.length;			
			var cell=null;
			if(cindex<0||cindex>=l)
			{
				cell=row.insertCell();
			}
			else
			{
				cell=row.cells[cindex];
			}
			cell.innerText=text;
			cell.className="LanCellOut";			
			return cell;
		}
		this.getText=function(rindex,cindex)
		{
			if(rindex<0||cindex<0)return;
			var l=this.table.rows.length;
			if(rindex>=l)return;
			var row=this.table.rows[rindex];
			l=row.cells.length;
			if(cindex>=l)return;
			var cell=row.cells[cindex];
			return cell.innerText;
		}
		this.getCell=function(rindex,cindex)
		{
			if(rindex<0||cindex<0)return;
			var l=this.table.rows.length;
			if(rindex>=l)return;
			var row=this.table.rows[rindex];
			l=row.cells.length;
			if(cindex>=l)return;
			var cell=row.cells[cindex];
			return cell;
		}				
	}
	//javascript对象浏览对象
	function ObjExplorer(obj)
	{
		this.getDescription=function()
		{
			var str="";
			for(var p in obj)
			{
				str+="类型:"+typeof(p)+" 名:"+p+"\n";
			}
			alert(str);
			return str;
		}
		this.onIterate=null;
		this.iterate=function()
		{
			for(var p in obj)
			{
				var str="类型:"+typeof(p)+" 名:"+p;
				if(this.onIterate!=null)this.onIterate(str);
			}
		}
	}	
