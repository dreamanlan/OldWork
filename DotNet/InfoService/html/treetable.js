	//用表行显示的树结点
	function TreeTableNode(name)
	{
		TreeNode.call(this,name);
		
		this.row=null;//对应显示行
		this.isSecondImage=false;//是否用第二类图标表示此结点
		
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
			table.setRowLine(this.row);
			if(l<=1)
				table.tree.iterateBefore(node,this.row.rowIndex);
			else
			{
				var prevNode=this.nodes[l-2];
				while(prevNode.nodes.length>0)prevNode=prevNode.nodes[prevNode.nodes.length-1];
				table.tree.iterateBefore(node,prevNode.row.rowIndex);
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
			var rowi=node.row.rowIndex;
			node.row=null;
			var row=table.rows[rowi];
			table.deleteNode(rowi);
			var level=row.level;
			while(table.rows.length>rowi)
			{
				var row=table.rows[rowi];
				if(row.level>level)
					table.deleteNode(rowi);
				else
					break;
			}
			table.setRowLine(this.row);
		}
	}
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
		function addLevel(node,level)//内部函数,因为对象方法不能私有,故用嵌入函数替代.
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
	function Tree(name)
	{
		this.rootNode=new TreeNode(name);
		this.onIterateBefore=null;
		this.onIterateAfter=null;
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
		this.iterateAfter=function(startnode,nexti)//后序遍历树结点
		{
			var stack=new Array(0);
			var i=nexti;
			var node=startnode;			
			stack.push(node);
			while(stack.length>0)
			{
				node=stack.pop();								
				if(!node.isLeafNode)
				{
					for(var j=0;j<node.nodes.length;j++)
					{
						stack.push(node.nodes[j]);
					}
				}
				else
				{
					i--;
					if(this.onIterateAfter!=null)
					{
						if(!this.onIterateAfter(i,node))break;
					}
				}
			}
		}	
		//构造一个新结点
		this.newNode=function(name)
		{
			var node=new TreeNode(name);
			return node;
		}
		//返回描述信息
		this.toString=function ()
		{	
			return ""+this.rootNode;
		}
	}
	//用表作树容器的树
	function TreeTable(name,table)
	{	
		table.finished=false;
		Tree.call(this,name);		
		this.rootNode=new TreeTableNode(name);//重新创建对应于此对象的根结点
		this.selectedNode=null;
		this.rootImage='../treeimage/treetop.gif';
		this.openImage='../treeimage/openfolder.gif';
		this.closeImage='../treeimage/folder.gif';
		this.open2Image='../treeimage/yellow.gif';
		this.close2Image='../treeimage/green.gif';
		this.line="../treeimage/blank.gif";
		this.minus="../treeimage/minus.gif";
		this.plus="../treeimage/plus.gif";
		this.empty="../treeimage/blank.gif";
		
		table.tree=this;//将树绑定到表上
		//下面为传入表对象实例定义几个新方法
		//设置某结点的线状图标
		table.setRowLine=function(row)
		{	
			var node=row.node;
			if(node.level<=0)return;
			var line=row.cells[0].children[0].rows[0].cells[node.level-1].children[0];
			if(node.isLeafNode)
			{
				line.itag="imgimg";
				line.src=table.tree.line;
			}
			else
			{
				line.itag="imgext";
				if(row.isExtend=="true")
					line.src=table.tree.minus;
				else
					line.src=table.tree.plus;
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
			for(i=0;i<node.level-1;i++)
			{				
				var ttt=table.tree.empty;
				code="<img src='"+ttt+"'>";			
				var ttt2=document.createElement(code);
				obc=obr2.insertCell();						
				obc.width=width;
				obc.style.fontSize=fontSize;
				obc.appendChild(ttt2);								
			}			
			if(node==table.tree.rootNode)
			{					
				var co=document.createElement("<img src='"+table.tree.rootImage+"'>");
				co.itag="imgext";
				obc=obr2.insertCell();						
				obc.width=width;
				obc.style.fontSize=fontSize;
				obc.appendChild(co);
			}
			else
			{				
				var line="";
				var img="";
				if(node.isLeafNode)
				{
					line=table.tree.line;
				}
				else
				{
					line=table.tree.minus;
				}
				if(node==table.tree.selectedNode)
				{
					if(node.isSecondImage)
						img=table.tree.open2Image;
					else
						img=table.tree.openImage;				
				}
				else
				{
					if(node.isSecondImage)
						img=table.tree.close2Image;
					else
						img=table.tree.closeImage;			
				}
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
			}
			var co3=document.createElement("span");
			co3.itag="txtfont";
			co3.className="LanMouseOut";			
			if(table.tree.selectedNode==node)co3.className="LanSelected";
			co3.innerText=node.name;						
			var obc=obr2.insertCell();
			obc.noWrap=true;						
			obc.appendChild(co3);
			//在行对象实例上记忆显示对象及对应树结点信息
			obr.node=node;					
			obr.isExtend="true";
			obr.level=node.level+1;
			node.row=obr;
		}
		//删除表行
		table.deleteNode=function(index)
		{ 	
			if(index>=0&&index<this.rows.length&&table.tree.selectedNode==this.rows[index].node)
			{
				table.tree.selectedNode=null;
				table.tree.selectedCell=null;
				this.selectedObj=null;
			}			
			this.deleteRow(index);
		}	
		//内部函数，用于展开/隐藏树
		function ExtendSubTree(obj)
		{			
			var row=obj.parentElement.parentElement.parentElement.parentElement.parentElement.parentElement;
			var layer=parseInt(row.level,10);
			var curRow=row;					
			if(row.isExtend=='true')
			{			
				row.isExtend='false';
				if(layer==1)
					obj.src=table.tree.rootImage;
				else
					obj.src=table.tree.plus;
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
				if(layer==1)
					obj.src=table.tree.rootImage;
				else
					obj.src=table.tree.minus;
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
				ExtendSubTree(obj);
			}
			else if(obj.itag=='txtfont')
			{			
				var tempimg=null;					
				var row=obj.parentElement.parentElement.parentElement.parentElement.parentElement.parentElement;
				if(typeof(this.selectedObj)=='undefined'||this.selectedObj==null)this.selectedObj=obj;
				if(this.selectedObj!=obj)
				{
					var oldRow=this.selectedObj.parentElement.parentElement.parentElement.parentElement.parentElement.parentElement;
					tempimg=this.selectedObj.parentElement.previousSibling.children[0];			
					var oldLayer=parseInt(oldRow.level,10);
					if(table.tree.selectedNode!=null && table.tree.selectedNode.isSecondImage)
					{
						if(oldLayer>1)			
							tempimg.src=table.tree.close2Image;
					}
					else
					{
						if(oldLayer>1)			
							tempimg.src=table.tree.closeImage;
					}
					this.selectedObj.className='LanMouseOut';										
					this.selectedObj=obj;
				}
				var layer=parseInt(row.level,10);
				this.selectedObj.className='LanSelected';
				tempimg=this.selectedObj.parentElement.previousSibling.children[0];					
				if(typeof(row.node)!='undefined'&&row.node.isSecondImage)
				{
					if(layer>1)			
						tempimg.src=table.tree.open2Image;
				}
				else
				{
					if(layer>1)			
						tempimg.src=table.tree.openImage;
				}
				table.tree.selectedNode=row.node;
				if(table.tree.onSelect!=null)table.tree.onSelect(row.rowIndex,row.node);	
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
		this.onSelect=null;
		//触发展开/收缩事件
		this.exchange=function(rowIndex)
		{
			if(rowIndex==0)
				table.rows[rowIndex].cells[0].children[0].rows[0].cells[0].children[0].click();
			else
				table.rows[rowIndex].cells[0].children[0].rows[0].cells[table.rows[rowIndex].node.level-1].children[0].click();
		}
		//触发选中事件
		this.select=function(rowIndex)
		{
			table.rows[rowIndex].cells[0].children[0].rows[0].cells[table.rows[rowIndex].node.level+1].children[0].click();	
		}	
		//构造一个新结点
		this.newNode=function(name)
		{
			var node=new TreeTableNode(name);
			return node;
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
			if(typeof(table.onFinished)!='undefined'&&table.onFinished!=null)table.onFinished(table.tree);
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
				var txt=row.cells[0].children[0].rows[0].lastChild.children[0].innerText;				
				if(curNode!=null)
				{
					if(lvl>curNode.level)
					{
						curPNode=curNode;
					}
					if(lvl<curNode.level)
					{
						for(var ii=lvl;ii<curNode.level;ii++)
						{
							if(curPNode)
								curPNode=curPNode.parentNode;
						}
					}
				}
				curNode=table.tree.newNode(txt);
				if(row.useSecondImage=="true")curNode.useSecondImage();
				curNode.row=row;				
				row.node=curNode;					
				if(curPNode==null)
				{
					//alert("root:"+curNode.name);
					table.tree.rootNode=curNode;
				}
				else
				{
					//alert("node:"+curPNode.name+" subnode:"+curNode.name);
					curPNode.addNode(curNode);		
				}						
				curi++;
				if(curi<table.rows.length)
				{
					setTimeout(attach,1);
				}
				else
				{
					table.finished=true;
					if(typeof(table.onFinished)!='undefined'&&table.onFinished!=null)table.onFinished(table.tree);
				}
			}			
			attach();			
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
				str+="类型:"+typeof(eval("obj."+p))+" 名:"+p+"\n";
			}
			alert(str);
			return str;
		}
		this.onIterate=null;
		this.iterate=function()
		{
			for(var p in obj)
			{
				var str="类型:"+typeof(eval("obj."+p))+" 名:"+p;
				if(this.onIterate!=null)this.onIterate(str);
			}
		}
	}	
	//可以用"this.constructor.prototype.方法名=function(){...}"来
	//定义在prototype上的方法（也可以是特性），这样产生的对象仍可
	//以用上面提出的继承方法派生子对象。
