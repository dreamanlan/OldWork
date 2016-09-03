var shell=new ActiveXObject("WScript.Shell");
var fso=new ActiveXObject("Scripting.FileSystemObject");
for(var j=0;j<10;j++)
{
	var f=fso.OpenTextFile("input.txt",8,true);
	for(var i=0;i<100000;i++)
		f.WriteLine("test"+(j*100000+i));
	f.Close();
}
shell.Popup("finish");