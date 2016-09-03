function ExeLine()
{
	var ip=HookFunc.Eip;
	var paddr=HookFunc.ParamPtr;
	var CS=HookFunc.SegCs;
	var SS=HookFunc.SegSs;
	var DS=HookFunc.SegDs;
	var ES=HookFunc.SegEs;
	var p1=*paddr:int;
	HookFunc.Log(""+(*p1:pchar));
}
function Compile(n)
{
	var ip=HookFunc.Eip;
	var paddr=HookFunc.ParamPtr;
	var CS=HookFunc.SegCs;
	var SS=HookFunc.SegSs;
	var DS=HookFunc.SegDs;
	var ES=HookFunc.SegEs;
	var p1=*paddr:int;
	HookFunc.Log(""+(*p1:pchar)+" "+n);
}
function Load(n)
{
	var ip=HookFunc.Eip;
	var paddr=HookFunc.ParamPtr;
	var CS=HookFunc.SegCs;
	var SS=HookFunc.SegSs;
	var DS=HookFunc.SegDs;
	var ES=HookFunc.SegEs;
	var p1=*paddr:int;
	HookFunc.Log(""+(*p1:pchar)+" "+n);
}
function GetLine()
{
	HookFunc.CallBeforeExit("RetStr();");
}
function RetStr()
{
	var addr=HookFunc.ReturnLowInt32;
	HookFunc.Log(""+(*addr:pchar));	
}
function LoadBuffer2()
{
	var paddr=HookFunc.ParamPtr;
	var addr=*paddr:int;
	HookFunc.Log(""+(*addr:pchar));			
}
function LoadBuffer()
{
	var paddr=HookFunc.ParamPtr;
	HookFunc.Log(""+(*(paddr+4):int));			
}
function CallFunc()
{
	var paddr=HookFunc.ParamPtr;
	var addr=*paddr:int;
	var p2=*(paddr+4):int;
	var p3=*(paddr+8):int;
	var p4=*(paddr+12):int;
	HookFunc.Log("CallFunc:"+(*addr:pchar)+" "+p2+" "+(*p3:pchar)+" "+(*p4:pchar));
}
function RegFunc()
{
	var paddr=HookFunc.ParamPtr;
	var addr=*paddr:int;
	var p2=*(paddr+4):int;
	HookFunc.Log("RegFunc:"+(*addr:pchar)+" "+p2);
}
function lua_compilebuffer()
{
	var paddr=HookFunc.ParamPtr;
	var addr=*paddr:int;
	var p2=*(paddr+4):int;
	var p3=*(paddr+8):int;
	var p4=*(paddr+12):int;
	HookFunc.Log("lua_compilebuffer:"+(*addr:pchar)+" "+(*p2:pchar)+" "+(*p3:pchar)+" "+p4);	
}
function lua_call()
{
	var paddr=HookFunc.ParamPtr;
	var addr=*paddr:int;
	var p2=*(paddr+4):int;
	var p3=*(paddr+8):int;
	HookFunc.Log("lua_call:"+(*addr:pchar)+" "+p2+" "+p3);	
}
function SendMsg()
{
	var paddr=HookFunc.ParamPtr;
	var addr=*paddr:int;
	var n=*(paddr+4):int;
	HookFunc.Log("Send:"+(*addr:pchar)+" "+HookFunc.IntToHex(n));
}
function RecvMsg()
{
	var paddr=HookFunc.ParamPtr;
	var addr=*paddr:int;
	var n=*(paddr+4):int;
	HookFunc.CallBeforeExit("RetRecvMsg("+addr+","+n+");");	
}
function RetRecvMsg(addr,n)
{
	var msg=(*addr:pchar);
	msg=msg.substr(0,n);
	HookFunc.Log("Recv:"+msg+" "+HookFunc.IntToHex(n));
}
function decode()
{
	var paddr=HookFunc.ParamPtr;
	HookFunc.Log("paddr:"+HookFunc.IntToHex(paddr));
	var addr=*(paddr+4):int;
	HookFunc.CallBeforeExit("onDecoded("+addr+");");
}
function onDecoded(addr)
{
	var c=addr;
	HookFunc.Log("addr:"+HookFunc.IntToHex(addr));
	for(var i=0;i<0x00000de6;i+=4)
	{
		HookFunc.Log(""+HookFunc.IntToHex(*(addr+i):int));
	}
}