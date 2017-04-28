using System;
using System.Collections.Generic;
using System.Text;
using gppg;
using System.Globalization;

namespace IL2CPP
{
    class Scanner : gppg.IScanner<ValueType, LexLocation>
    {
        private Context context = null;
        
        private Dictionary<string, int> keywords = new Dictionary<string, int>();
        private System.IO.StreamReader reader;

        private StringBuilder builder;
        private char next;
        private int pos;
        private string line;
        private int linenr;

        public Scanner(string path,Context _context)
        {
            context = _context;
            
            keywords["void"] = (int)Tokens.VOID_;
            keywords["bool"] = (int)Tokens.BOOL_;
            keywords["char"] = (int)Tokens.CHAR_;
            keywords["wchar"] = (int)Tokens.CHAR_;
            keywords["int"] = (int)Tokens.INT_;
            keywords["int8"] = (int)Tokens.INT8_;
            keywords["int16"] = (int)Tokens.INT16_;
            keywords["int32"] = (int)Tokens.INT32_;
            keywords["int64"] = (int)Tokens.INT64_;
            keywords["uint"] = (int)Tokens.UINT_;
            keywords["uint8"] = (int)Tokens.UINT8_;
            keywords["uint16"] = (int)Tokens.UINT16_;
            keywords["uint32"] = (int)Tokens.UINT32_;
            keywords["uint64"] = (int)Tokens.UINT64_;
            keywords["float"] = (int)Tokens.FLOAT_;
            keywords["float32"] = (int)Tokens.FLOAT32_;
            keywords["float64"] = (int)Tokens.FLOAT64_;
            keywords["refany"] = (int)Tokens.TYPEDREF_;
            keywords["typedref"] = (int)Tokens.TYPEDREF_;
            keywords["object"] = (int)Tokens.OBJECT_;
            keywords["string"] = (int)Tokens.STRING_;
            keywords["native"] = (int)Tokens.NATIVE_;
            keywords["unsigned"] = (int)Tokens.UNSIGNED_;
            keywords["value"] = (int)Tokens.VALUE_;
            keywords["valuetype"] = (int)Tokens.VALUETYPE_;
            keywords["class"] = (int)Tokens.CLASS_;
            keywords["vararg"] = (int)Tokens.VARARG_;
            keywords["default"] = (int)Tokens.DEFAULT_;
            keywords["stdcall"] = (int)Tokens.STDCALL_;
            keywords["thiscall"] = (int)Tokens.THISCALL_;
            keywords["fastcall"] = (int)Tokens.FASTCALL_;
            keywords["unmanaged"] = (int)Tokens.UNMANAGED_;
            keywords["beforefieldinit"] = (int)Tokens.BEFOREFIELDINIT_;
            keywords["instance"] = (int)Tokens.INSTANCE_;
            keywords["filter"] = (int)Tokens.FILTER_;
            keywords["catch"] = (int)Tokens.CATCH_;
            keywords["static"] = (int)Tokens.STATIC_;
            keywords["public"] = (int)Tokens.PUBLIC_;
            keywords["private"] = (int)Tokens.PRIVATE_;
            keywords["forwarder"] = (int)Tokens.FORWARDER_;
            keywords["synchronized"] = (int)Tokens.SYNCHRONIZED_;
            keywords["interface"] = (int)Tokens.INTERFACE_;
            keywords["extends"] = (int)Tokens.EXTENDS_;
            keywords["implements"] = (int)Tokens.IMPLEMENTS_;
            keywords["finally"] = (int)Tokens.FINALLY_;
            keywords["fault"] = (int)Tokens.FAULT_;
            keywords["to"] = (int)Tokens.TO_;
            keywords["abstract"] = (int)Tokens.ABSTRACT_;
            keywords["auto"] = (int)Tokens.AUTO_;
            keywords["sequential"] = (int)Tokens.SEQUENTIAL_;
            keywords["explicit"] = (int)Tokens.EXPLICIT_;
            keywords["ansi"] = (int)Tokens.ANSI_;
            keywords["unicode"] = (int)Tokens.UNICODE_;
            keywords["autochar"] = (int)Tokens.AUTOCHAR_;
            keywords["import"] = (int)Tokens.IMPORT_;
            keywords["enum"] = (int)Tokens.ENUM_;
            keywords["virtual"] = (int)Tokens.VIRTUAL_;
            keywords["strict"] = (int)Tokens.STRICT_;
            keywords["il"] = (int)Tokens.CIL_;
            keywords["cil"] = (int)Tokens.CIL_;
            keywords["optil"] = (int)Tokens.OPTIL_;
            keywords["managed"] = (int)Tokens.MANAGED_;
            keywords["preservesig"] = (int)Tokens.PRESERVESIG_;
            keywords["runtime"] = (int)Tokens.RUNTIME_;
            keywords["method"] = (int)Tokens.METHOD_;
            keywords["field"] = (int)Tokens.FIELD_;
            keywords["property"] = (int)Tokens.PROPERTY_;
            keywords["bytearray"] = (int)Tokens.BYTEARRAY_;
            keywords["final"] = (int)Tokens.FINAL_;
            keywords["sealed"] = (int)Tokens.SEALED_;
            keywords["specialname"] = (int)Tokens.SPECIALNAME_;
            keywords["family"] = (int)Tokens.FAMILY_;
            keywords["assembly"] = (int)Tokens.ASSEMBLY_;
            keywords["famandassem"] = (int)Tokens.FAMANDASSEM_;
            keywords["famorassem"] = (int)Tokens.FAMORASSEM_;
            keywords["privatescope"] = (int)Tokens.PRIVATESCOPE_;
            keywords["nested"] = (int)Tokens.NESTED_;
            keywords["hidebysig"] = (int)Tokens.HIDEBYSIG_;
            keywords["newslot"] = (int)Tokens.NEWSLOT_;
            keywords["rtspecialname"] = (int)Tokens.RTSPECIALNAME_;
            keywords["pinvokeimpl"] = (int)Tokens.PINVOKEIMPL_;
            keywords["unmanagedexp"] = (int)Tokens.UNMANAGEDEXP_;
            keywords["reqsecobj"] = (int)Tokens.REQSECOBJ_;
            keywords[".ctor"] = (int)Tokens._CTOR;
            keywords[".cctor"] = (int)Tokens._CCTOR;
            keywords["initonly"] = (int)Tokens.INITONLY_;
            keywords["literal"] = (int)Tokens.LITERAL_;
            keywords["notserialized"] = (int)Tokens.NOTSERIALIZED_;
            keywords["forwardref"] = (int)Tokens.FORWARDREF_;
            keywords["internalcall"] = (int)Tokens.INTERNALCALL_;
            keywords["noinlining"] = (int)Tokens.NOINLINING_;
            keywords["nomangle"] = (int)Tokens.NOMANGLE_;
            keywords["lasterr"] = (int)Tokens.LASTERR_;
            keywords["winapi"] = (int)Tokens.WINAPI_;
            keywords["cdecl"] = (int)Tokens.CDECL_;
            keywords["as"] = (int)Tokens.AS_;
            keywords["pinned"] = (int)Tokens.PINNED_;
            keywords["modreq"] = (int)Tokens.MODREQ_;
            keywords["modopt"] = (int)Tokens.MODOPT_;
            keywords["serializable"] = (int)Tokens.SERIALIZABLE_;
            keywords["at"] = (int)Tokens.AT_;
            keywords["tls"] = (int)Tokens.TLS_;
            keywords["true"] = (int)Tokens.TRUE_;
            keywords["false"] = (int)Tokens.FALSE_;
            keywords["on"] = (int)Tokens.ON_;
            keywords["off"] = (int)Tokens.OFF_;
            keywords["bestfit"] = (int)Tokens.BESTFIT_;
            keywords["charmaperror"] = (int)Tokens.CHARMAPERROR_;

            /* assembler directives */
            keywords[".class"] = (int)Tokens._CLASS;
            keywords[".this"] = (int)Tokens._THIS;
            keywords[".base"] = (int)Tokens._BASE;
            keywords[".nester"] = (int)Tokens._NESTER;
            keywords[".namespace"] = (int)Tokens._NAMESPACE;
            keywords[".method"] = (int)Tokens._METHOD;
            keywords[".field"] = (int)Tokens._FIELD;
            keywords[".emitbyte"] = (int)Tokens._EMITBYTE;
            keywords[".try"] = (int)Tokens._TRY;
            keywords[".maxstack"] = (int)Tokens._MAXSTACK;
            keywords[".locals"] = (int)Tokens._LOCALS;
            keywords[".entrypoint"] = (int)Tokens._ENTRYPOINT;
            keywords[".zeroinit"] = (int)Tokens._ZEROINIT;
            keywords[".data"] = (int)Tokens._DATA;

            keywords[".event"] = (int)Tokens._EVENT;
            keywords[".addon"] = (int)Tokens._ADDON;
            keywords[".removeon"] = (int)Tokens._REMOVEON;
            keywords[".fire"] = (int)Tokens._FIRE;
            keywords[".other"] = (int)Tokens._OTHER;

            keywords[".property"] = (int)Tokens._PROPERTY;
            keywords[".set"] = (int)Tokens._SET;
            keywords[".get"] = (int)Tokens._GET;

            keywords[".permissionset"] = (int)Tokens._PERMISSIONSET;

            /* security actions */
            keywords["request"] = (int)Tokens.REQUEST_;
            keywords["demand"] = (int)Tokens.DEMAND_;
            keywords["assert"] = (int)Tokens.ASSERT_;
            keywords["deny"] = (int)Tokens.DENY_;
            keywords["permitonly"] = (int)Tokens.PERMITONLY_;
            keywords["linkcheck"] = (int)Tokens.LINKCHECK_;
            keywords["inheritcheck"] = (int)Tokens.INHERITCHECK_;
            keywords["reqmin"] = (int)Tokens.REQMIN_;
            keywords["reqopt"] = (int)Tokens.REQOPT_;
            keywords["reqrefuse"] = (int)Tokens.REQREFUSE_;
            keywords["prejitgrant"] = (int)Tokens.PREJITGRANT_;
            keywords["prejitdeny"] = (int)Tokens.PREJITDENY_;
            keywords["noncasdemand"] = (int)Tokens.NONCASDEMAND_;
            keywords["noncaslinkdemand"] = (int)Tokens.NONCASLINKDEMAND_;
            keywords["noncasinheritance"] = (int)Tokens.NONCASINHERITANCE_;

            /* extern debug data specifier */
            keywords[".line"] = (int)Tokens._LINE;
            keywords[".language"] = (int)Tokens._LANGUAGE;
            keywords["#line"] = (int)Tokens.P_LINE;
            /* custom value specifier */
            keywords[".custom"] = (int)Tokens._CUSTOM;
            /* IL method attribute */
            keywords["init"] = (int)Tokens.INIT_;
            /* Class layout directives */
            keywords[".size"] = (int)Tokens._SIZE;
            keywords[".pack"] = (int)Tokens._PACK;
            /* Manifest-related keywords */
            keywords[".file"] = (int)Tokens._FILE;
            keywords["nometadata"] = (int)Tokens.NOMETADATA_;
            keywords[".hash"] = (int)Tokens._HASH;
            keywords[".assembly"] = (int)Tokens._ASSEMBLY;
            keywords["retargetable"] = (int)Tokens.RETARGETABLE_;
            keywords["legacy"] = (int)Tokens.LEGACY_;
            keywords["library"] = (int)Tokens.LIBRARY_;
            keywords["x86"] = (int)Tokens.X86_;
            keywords["ia64"] = (int)Tokens.IA64_;
            keywords["amd64"] = (int)Tokens.AMD64_;
            keywords[".publickey"] = (int)Tokens._PUBLICKEY;
            keywords[".publickeytoken"] = (int)Tokens._PUBLICKEYTOKEN;
            keywords["algorithm"] = (int)Tokens.ALGORITHM_;
            keywords[".ver"] = (int)Tokens._VER;
            keywords[".locale"] = (int)Tokens._LOCALE;
            keywords["extern"] = (int)Tokens.EXTERN_;
            keywords[".export"] = (int)Tokens._EXPORT;
            keywords[".manifestres"] = (int)Tokens._MRESOURCE;
            keywords[".mresource"] = (int)Tokens._MRESOURCE;
            keywords[".module"] = (int)Tokens._MODULE;
            /* Field marshaling keywords */
            keywords["marshal"] = (int)Tokens.MARSHAL_;
            keywords["custom"] = (int)Tokens.CUSTOM_;
            keywords["sysstring"] = (int)Tokens.SYSSTRING_;
            keywords["fixed"] = (int)Tokens.FIXED_;
            keywords["variant"] = (int)Tokens.VARIANT_;
            keywords["currency"] = (int)Tokens.CURRENCY_;
            keywords["syschar"] = (int)Tokens.SYSCHAR_;
            keywords["decimal"] = (int)Tokens.DECIMAL_;
            keywords["date"] = (int)Tokens.DATE_;
            keywords["bstr"] = (int)Tokens.BSTR_;
            keywords["tbstr"] = (int)Tokens.TBSTR_;
            keywords["lpstr"] = (int)Tokens.LPSTR_;
            keywords["lpwstr"] = (int)Tokens.LPWSTR_;
            keywords["lptstr"] = (int)Tokens.LPTSTR_;
            keywords["objectref"] = (int)Tokens.OBJECTREF_;
            keywords["iunknown"] = (int)Tokens.IUNKNOWN_;
            keywords["idispatch"] = (int)Tokens.IDISPATCH_;
            keywords["iidparam"] = (int)Tokens.IIDPARAM_;
            keywords["struct"] = (int)Tokens.STRUCT_;
            keywords["safearray"] = (int)Tokens.SAFEARRAY_;
            keywords["byvalstr"] = (int)Tokens.BYVALSTR_;
            keywords["lpvoid"] = (int)Tokens.LPVOID_;
            keywords["any"] = (int)Tokens.ANY_;
            keywords["array"] = (int)Tokens.ARRAY_;
            keywords["lpstruct"] = (int)Tokens.LPSTRUCT_;
            /* VTable fixup keywords */
            keywords[".vtfixup"] = (int)Tokens._VTFIXUP;
            keywords["fromunmanaged"] = (int)Tokens.FROMUNMANAGED_;
            keywords["retainappdomain"] = (int)Tokens.RETAINAPPDOMAIN_;
            keywords["callmostderived"] = (int)Tokens.CALLMOSTDERIVED_;
            keywords[".vtentry"] = (int)Tokens._VTENTRY;
            /* Parameter attributes */
            keywords["in"] = (int)Tokens.IN_;
            keywords["out"] = (int)Tokens.OUT_;
            keywords["opt"] = (int)Tokens.OPT_;
            keywords[".param"] = (int)Tokens.PARAM_;
            /* Method implementations */
            keywords[".override"] = (int)Tokens._OVERRIDE;
            keywords["with"] = (int)Tokens.WITH_;
            /* VariantType keywords */
            keywords["null"] = (int)Tokens.NULL_;
            keywords["error"] = (int)Tokens.ERROR_;
            keywords["hresult"] = (int)Tokens.HRESULT_;
            keywords["carray"] = (int)Tokens.CARRAY_;
            keywords["userdefined"] = (int)Tokens.USERDEFINED_;
            keywords["record"] = (int)Tokens.RECORD_;
            keywords["filetime"] = (int)Tokens.FILETIME_;
            keywords["blob"] = (int)Tokens.BLOB_;
            keywords["stream"] = (int)Tokens.STREAM_;
            keywords["storage"] = (int)Tokens.STORAGE_;
            keywords["streamed_object"] = (int)Tokens.STREAMED_OBJECT_;
            keywords["stored_object"] = (int)Tokens.STORED_OBJECT_;
            keywords["blob_object"] = (int)Tokens.BLOB_OBJECT_;
            keywords["cf"] = (int)Tokens.CF_;
            keywords["clsid"] = (int)Tokens.CLSID_;
            keywords["vector"] = (int)Tokens.VECTOR_;
            /* Null reference keyword for InitOpt */
            keywords["nullref"] = (int)Tokens.NULLREF_;
            keywords["type"] = (int)Tokens.TYPE_;
            /* Header flags keywords */
            keywords[".subsystem"] = (int)Tokens._SUBSYSTEM;
            keywords[".corflags"] = (int)Tokens._CORFLAGS;
            keywords["alignment"] = (int)Tokens.ALIGNMENT_;
            keywords[".imagebase"] = (int)Tokens._IMAGEBASE;
            keywords[".stackreserve"] = (int)Tokens._STACKRESERVE;
            /* Explicit binary flag specification keywords */
            keywords["flags"] = (int)Tokens.FLAGS_;
            keywords["callconv"] = (int)Tokens.CALLCONV_;

            keywords["nop"] = (int)Tokens.INSTR_NONE;
            keywords["break"] = (int)Tokens.INSTR_NONE;
            keywords["ldarg.0"] = (int)Tokens.INSTR_NONE;
            keywords["ldarg.1"] = (int)Tokens.INSTR_NONE;
            keywords["ldarg.2"] = (int)Tokens.INSTR_NONE;
            keywords["ldarg.3"] = (int)Tokens.INSTR_NONE;
            keywords["ldloc.0"] = (int)Tokens.INSTR_NONE;
            keywords["ldloc.1"] = (int)Tokens.INSTR_NONE;
            keywords["ldloc.2"] = (int)Tokens.INSTR_NONE;
            keywords["ldloc.3"] = (int)Tokens.INSTR_NONE;
            keywords["stloc.0"] = (int)Tokens.INSTR_NONE;
            keywords["stloc.1"] = (int)Tokens.INSTR_NONE;
            keywords["stloc.2"] = (int)Tokens.INSTR_NONE;
            keywords["stloc.3"] = (int)Tokens.INSTR_NONE;
            keywords["ldarg.s"] = (int)Tokens.INSTR_VAR;
            keywords["ldarga.s"] = (int)Tokens.INSTR_VAR;
            keywords["starg.s"] = (int)Tokens.INSTR_VAR;
            keywords["ldloc.s"] = (int)Tokens.INSTR_VAR;
            keywords["ldloca.s"] = (int)Tokens.INSTR_VAR;
            keywords["stloc.s"] = (int)Tokens.INSTR_VAR;
            keywords["ldnull"] = (int)Tokens.INSTR_NONE;
            keywords["ldc.i4.m1"] = (int)Tokens.INSTR_NONE;
            keywords["ldc.i4.0"] = (int)Tokens.INSTR_NONE;
            keywords["ldc.i4.1"] = (int)Tokens.INSTR_NONE;
            keywords["ldc.i4.2"] = (int)Tokens.INSTR_NONE;
            keywords["ldc.i4.3"] = (int)Tokens.INSTR_NONE;
            keywords["ldc.i4.4"] = (int)Tokens.INSTR_NONE;
            keywords["ldc.i4.5"] = (int)Tokens.INSTR_NONE;
            keywords["ldc.i4.6"] = (int)Tokens.INSTR_NONE;
            keywords["ldc.i4.7"] = (int)Tokens.INSTR_NONE;
            keywords["ldc.i4.8"] = (int)Tokens.INSTR_NONE;
            keywords["ldc.i4.s"] = (int)Tokens.INSTR_I;
            keywords["ldc.i4"] = (int)Tokens.INSTR_I;
            keywords["ldc.i8"] = (int)Tokens.INSTR_I8;
            keywords["ldc.r4"] = (int)Tokens.INSTR_R;
            keywords["ldc.r8"] = (int)Tokens.INSTR_R;
            keywords["dup"] = (int)Tokens.INSTR_NONE;
            keywords["pop"] = (int)Tokens.INSTR_NONE;
            keywords["jmp"] = (int)Tokens.INSTR_METHOD;
            keywords["call"] = (int)Tokens.INSTR_METHOD;
            keywords["calli"] = (int)Tokens.INSTR_SIG;
            keywords["ret"] = (int)Tokens.INSTR_NONE;
            keywords["br.s"] = (int)Tokens.INSTR_BRTARGET;
            keywords["brfalse.s"] = (int)Tokens.INSTR_BRTARGET;
            keywords["brtrue.s"] = (int)Tokens.INSTR_BRTARGET;
            keywords["beq.s"] = (int)Tokens.INSTR_BRTARGET;
            keywords["bge.s"] = (int)Tokens.INSTR_BRTARGET;
            keywords["bgt.s"] = (int)Tokens.INSTR_BRTARGET;
            keywords["ble.s"] = (int)Tokens.INSTR_BRTARGET;
            keywords["blt.s"] = (int)Tokens.INSTR_BRTARGET;
            keywords["bne.un.s"] = (int)Tokens.INSTR_BRTARGET;
            keywords["bge.un.s"] = (int)Tokens.INSTR_BRTARGET;
            keywords["bgt.un.s"] = (int)Tokens.INSTR_BRTARGET;
            keywords["ble.un.s"] = (int)Tokens.INSTR_BRTARGET;
            keywords["blt.un.s"] = (int)Tokens.INSTR_BRTARGET;
            keywords["br"] = (int)Tokens.INSTR_BRTARGET;
            keywords["brfalse"] = (int)Tokens.INSTR_BRTARGET;
            keywords["brtrue"] = (int)Tokens.INSTR_BRTARGET;
            keywords["beq"] = (int)Tokens.INSTR_BRTARGET;
            keywords["bge"] = (int)Tokens.INSTR_BRTARGET;
            keywords["bgt"] = (int)Tokens.INSTR_BRTARGET;
            keywords["ble"] = (int)Tokens.INSTR_BRTARGET;
            keywords["blt"] = (int)Tokens.INSTR_BRTARGET;
            keywords["bne.un"] = (int)Tokens.INSTR_BRTARGET;
            keywords["bge.un"] = (int)Tokens.INSTR_BRTARGET;
            keywords["bgt.un"] = (int)Tokens.INSTR_BRTARGET;
            keywords["ble.un"] = (int)Tokens.INSTR_BRTARGET;
            keywords["blt.un"] = (int)Tokens.INSTR_BRTARGET;
            keywords["switch"] = (int)Tokens.INSTR_SWITCH;
            keywords["ldind.i1"] = (int)Tokens.INSTR_NONE;
            keywords["ldind.u1"] = (int)Tokens.INSTR_NONE;
            keywords["ldind.i2"] = (int)Tokens.INSTR_NONE;
            keywords["ldind.u2"] = (int)Tokens.INSTR_NONE;
            keywords["ldind.i4"] = (int)Tokens.INSTR_NONE;
            keywords["ldind.u4"] = (int)Tokens.INSTR_NONE;
            keywords["ldind.i8"] = (int)Tokens.INSTR_NONE;
            keywords["ldind.i"] = (int)Tokens.INSTR_NONE;
            keywords["ldind.r4"] = (int)Tokens.INSTR_NONE;
            keywords["ldind.r8"] = (int)Tokens.INSTR_NONE;
            keywords["ldind.ref"] = (int)Tokens.INSTR_NONE;
            keywords["stind.ref"] = (int)Tokens.INSTR_NONE;
            keywords["stind.i1"] = (int)Tokens.INSTR_NONE;
            keywords["stind.i2"] = (int)Tokens.INSTR_NONE;
            keywords["stind.i4"] = (int)Tokens.INSTR_NONE;
            keywords["stind.i8"] = (int)Tokens.INSTR_NONE;
            keywords["stind.r4"] = (int)Tokens.INSTR_NONE;
            keywords["stind.r8"] = (int)Tokens.INSTR_NONE;
            keywords["add"] = (int)Tokens.INSTR_NONE;
            keywords["sub"] = (int)Tokens.INSTR_NONE;
            keywords["mul"] = (int)Tokens.INSTR_NONE;
            keywords["div"] = (int)Tokens.INSTR_NONE;
            keywords["div.un"] = (int)Tokens.INSTR_NONE;
            keywords["rem"] = (int)Tokens.INSTR_NONE;
            keywords["rem.un"] = (int)Tokens.INSTR_NONE;
            keywords["and"] = (int)Tokens.INSTR_NONE;
            keywords["or"] = (int)Tokens.INSTR_NONE;
            keywords["xor"] = (int)Tokens.INSTR_NONE;
            keywords["shl"] = (int)Tokens.INSTR_NONE;
            keywords["shr"] = (int)Tokens.INSTR_NONE;
            keywords["shr.un"] = (int)Tokens.INSTR_NONE;
            keywords["neg"] = (int)Tokens.INSTR_NONE;
            keywords["not"] = (int)Tokens.INSTR_NONE;
            keywords["conv.i1"] = (int)Tokens.INSTR_NONE;
            keywords["conv.i2"] = (int)Tokens.INSTR_NONE;
            keywords["conv.i4"] = (int)Tokens.INSTR_NONE;
            keywords["conv.i8"] = (int)Tokens.INSTR_NONE;
            keywords["conv.r4"] = (int)Tokens.INSTR_NONE;
            keywords["conv.r8"] = (int)Tokens.INSTR_NONE;
            keywords["conv.u4"] = (int)Tokens.INSTR_NONE;
            keywords["conv.u8"] = (int)Tokens.INSTR_NONE;
            keywords["callvirt"] = (int)Tokens.INSTR_METHOD;
            keywords["cpobj"] = (int)Tokens.INSTR_TYPE;
            keywords["ldobj"] = (int)Tokens.INSTR_TYPE;
            keywords["ldstr"] = (int)Tokens.INSTR_STRING;
            keywords["newobj"] = (int)Tokens.INSTR_METHOD;
            keywords["castclass"] = (int)Tokens.INSTR_TYPE;
            keywords["isinst"] = (int)Tokens.INSTR_TYPE;
            keywords["conv.r.un"] = (int)Tokens.INSTR_NONE;
            keywords["unbox"] = (int)Tokens.INSTR_TYPE;
            keywords["throw"] = (int)Tokens.INSTR_NONE;
            keywords["ldfld"] = (int)Tokens.INSTR_FIELD;
            keywords["ldflda"] = (int)Tokens.INSTR_FIELD;
            keywords["stfld"] = (int)Tokens.INSTR_FIELD;
            keywords["ldsfld"] = (int)Tokens.INSTR_FIELD;
            keywords["ldsflda"] = (int)Tokens.INSTR_FIELD;
            keywords["stsfld"] = (int)Tokens.INSTR_FIELD;
            keywords["stobj"] = (int)Tokens.INSTR_TYPE;
            keywords["conv.ovf.i1.un"] = (int)Tokens.INSTR_NONE;
            keywords["conv.ovf.i2.un"] = (int)Tokens.INSTR_NONE;
            keywords["conv.ovf.i4.un"] = (int)Tokens.INSTR_NONE;
            keywords["conv.ovf.i8.un"] = (int)Tokens.INSTR_NONE;
            keywords["conv.ovf.u1.un"] = (int)Tokens.INSTR_NONE;
            keywords["conv.ovf.u2.un"] = (int)Tokens.INSTR_NONE;
            keywords["conv.ovf.u4.un"] = (int)Tokens.INSTR_NONE;
            keywords["conv.ovf.u8.un"] = (int)Tokens.INSTR_NONE;
            keywords["conv.ovf.i.un"] = (int)Tokens.INSTR_NONE;
            keywords["conv.ovf.u.un"] = (int)Tokens.INSTR_NONE;
            keywords["box"] = (int)Tokens.INSTR_TYPE;
            keywords["newarr"] = (int)Tokens.INSTR_TYPE;
            keywords["ldlen"] = (int)Tokens.INSTR_NONE;
            keywords["ldelema"] = (int)Tokens.INSTR_TYPE;
            keywords["ldelem.i1"] = (int)Tokens.INSTR_NONE;
            keywords["ldelem.u1"] = (int)Tokens.INSTR_NONE;
            keywords["ldelem.i2"] = (int)Tokens.INSTR_NONE;
            keywords["ldelem.u2"] = (int)Tokens.INSTR_NONE;
            keywords["ldelem.i4"] = (int)Tokens.INSTR_NONE;
            keywords["ldelem.u4"] = (int)Tokens.INSTR_NONE;
            keywords["ldelem.i8"] = (int)Tokens.INSTR_NONE;
            keywords["ldelem.i"] = (int)Tokens.INSTR_NONE;
            keywords["ldelem.r4"] = (int)Tokens.INSTR_NONE;
            keywords["ldelem.r8"] = (int)Tokens.INSTR_NONE;
            keywords["ldelem.ref"] = (int)Tokens.INSTR_NONE;
            keywords["stelem.i"] = (int)Tokens.INSTR_NONE;
            keywords["stelem.i1"] = (int)Tokens.INSTR_NONE;
            keywords["stelem.i2"] = (int)Tokens.INSTR_NONE;
            keywords["stelem.i4"] = (int)Tokens.INSTR_NONE;
            keywords["stelem.i8"] = (int)Tokens.INSTR_NONE;
            keywords["stelem.r4"] = (int)Tokens.INSTR_NONE;
            keywords["stelem.r8"] = (int)Tokens.INSTR_NONE;
            keywords["stelem.ref"] = (int)Tokens.INSTR_NONE;
            keywords["ldelem"] = (int)Tokens.INSTR_TYPE;
            keywords["stelem"] = (int)Tokens.INSTR_TYPE;
            keywords["unbox.any"] = (int)Tokens.INSTR_TYPE;
            keywords["conv.ovf.i1"] = (int)Tokens.INSTR_NONE;
            keywords["conv.ovf.u1"] = (int)Tokens.INSTR_NONE;
            keywords["conv.ovf.i2"] = (int)Tokens.INSTR_NONE;
            keywords["conv.ovf.u2"] = (int)Tokens.INSTR_NONE;
            keywords["conv.ovf.i4"] = (int)Tokens.INSTR_NONE;
            keywords["conv.ovf.u4"] = (int)Tokens.INSTR_NONE;
            keywords["conv.ovf.i8"] = (int)Tokens.INSTR_NONE;
            keywords["conv.ovf.u8"] = (int)Tokens.INSTR_NONE;
            keywords["refanyval"] = (int)Tokens.INSTR_TYPE;
            keywords["ckfinite"] = (int)Tokens.INSTR_NONE;
            keywords["mkrefany"] = (int)Tokens.INSTR_TYPE;
            keywords["ldtoken"] = (int)Tokens.INSTR_TOK;
            keywords["conv.u2"] = (int)Tokens.INSTR_NONE;
            keywords["conv.u1"] = (int)Tokens.INSTR_NONE;
            keywords["conv.i"] = (int)Tokens.INSTR_NONE;
            keywords["conv.ovf.i"] = (int)Tokens.INSTR_NONE;
            keywords["conv.ovf.u"] = (int)Tokens.INSTR_NONE;
            keywords["add.ovf"] = (int)Tokens.INSTR_NONE;
            keywords["add.ovf.un"] = (int)Tokens.INSTR_NONE;
            keywords["mul.ovf"] = (int)Tokens.INSTR_NONE;
            keywords["mul.ovf.un"] = (int)Tokens.INSTR_NONE;
            keywords["sub.ovf"] = (int)Tokens.INSTR_NONE;
            keywords["sub.ovf.un"] = (int)Tokens.INSTR_NONE;
            keywords["endfinally"] = (int)Tokens.INSTR_NONE;
            keywords["leave"] = (int)Tokens.INSTR_BRTARGET;
            keywords["leave.s"] = (int)Tokens.INSTR_BRTARGET;
            keywords["stind.i"] = (int)Tokens.INSTR_NONE;
            keywords["conv.u"] = (int)Tokens.INSTR_NONE;
            keywords["prefix7"] = (int)Tokens.INSTR_NONE;
            keywords["prefix6"] = (int)Tokens.INSTR_NONE;
            keywords["prefix5"] = (int)Tokens.INSTR_NONE;
            keywords["prefix4"] = (int)Tokens.INSTR_NONE;
            keywords["prefix3"] = (int)Tokens.INSTR_NONE;
            keywords["prefix2"] = (int)Tokens.INSTR_NONE;
            keywords["prefix1"] = (int)Tokens.INSTR_NONE;
            keywords["prefixref"] = (int)Tokens.INSTR_NONE;

            keywords["arglist"] = (int)Tokens.INSTR_NONE;
            keywords["ceq"] = (int)Tokens.INSTR_NONE;
            keywords["cgt"] = (int)Tokens.INSTR_NONE;
            keywords["cgt.un"] = (int)Tokens.INSTR_NONE;
            keywords["clt"] = (int)Tokens.INSTR_NONE;
            keywords["clt.un"] = (int)Tokens.INSTR_NONE;
            keywords["ldftn"] = (int)Tokens.INSTR_METHOD;
            keywords["ldvirtftn"] = (int)Tokens.INSTR_METHOD;
            keywords["ldarg"] = (int)Tokens.INSTR_VAR;
            keywords["ldarga"] = (int)Tokens.INSTR_VAR;
            keywords["starg"] = (int)Tokens.INSTR_VAR;
            keywords["ldloc"] = (int)Tokens.INSTR_VAR;
            keywords["ldloca"] = (int)Tokens.INSTR_VAR;
            keywords["stloc"] = (int)Tokens.INSTR_VAR;
            keywords["localloc"] = (int)Tokens.INSTR_NONE;
            keywords["endfilter"] = (int)Tokens.INSTR_NONE;
            keywords["unaligned."] = (int)Tokens.INSTR_I;
            keywords["volatile."] = (int)Tokens.INSTR_NONE;
            keywords["tail."] = (int)Tokens.INSTR_NONE;
            keywords["initobj"] = (int)Tokens.INSTR_TYPE;
            keywords["constrained."] = (int)Tokens.INSTR_TYPE;
            keywords["cpblk"] = (int)Tokens.INSTR_NONE;
            keywords["initblk"] = (int)Tokens.INSTR_NONE;
            keywords["rethrow"] = (int)Tokens.INSTR_NONE;
            keywords["sizeof"] = (int)Tokens.INSTR_TYPE;
            keywords["refanytype"] = (int)Tokens.INSTR_NONE;
            keywords["readonly."] = (int)Tokens.INSTR_NONE;

            keywords["illegal"] = (int)Tokens.INSTR_NONE;
            keywords["endmac"] = (int)Tokens.INSTR_NONE;
            keywords["codelabel"] = (int)Tokens.INSTR_NONE;

            keywords["brnull"] = -1;
            keywords["brnull.s"] = -1;
            keywords["brzero"] = -1;
            keywords["brzero.s"] = -1;
            keywords["brinst"] = -1;
            keywords["brinst.s"] = -1;
            keywords["ldind.u8"] = -1;
            keywords["ldelem.u8"] = -1;
            keywords["ldelem.any"] = -1;
            keywords["stelem.any"] = -1;
            keywords["ldc.i4.M1"] = -1;
            keywords["endfault"] = -1;

            yylloc = new LexLocation();
            reader = new System.IO.StreamReader(path);

            builder = new StringBuilder();
            pos = 0;
            linenr = 0;
            line = "";
            Advance();
        }

        public override int yylex()
        {
            return Next();
        }

        public override void yyerror(string format, params object[] args)
        {
            Console.Error.WriteLine("[line:{0} col:{1} - line:{2} col:{3}]", yylloc.sLin, yylloc.sCol, yylloc.eLin, yylloc.eCol);
            if(args.Length<=0)
                Console.Error.WriteLine(format);
            else
                Console.Error.WriteLine(format, args);
        }

        private int Next()
        {
            yylloc = new LexLocation();
            yylloc.sLin = linenr;
            yylloc.sCol = pos+1;
            try
            {
                if (next == 0)
                    return (int)Tokens.EOF;
                switch (next)
                {
                    case '/':					// Comments
                        Advance();
                        if (next == '/')		// C++ style comment
                        {
                            while (next != 0 && next != '\n')
                            {
                                Advance();
                            }
                            return Next();
                        }
                        else if (next == '*')	// C style comment
                        {
                            Advance();
                            do
                            {
                                while (next != 0 && next != '*')
                                    Advance();
                                Advance();
                            }
                            while (next != 0 && next != '/');
                            Advance();

                            return Next();
                        }
                        else
                        {
                            yylval.Str = "/";
                            return '/';
                        }

                    case '\'':		// Character literal
                        {
                            char lastCh = next;
                            builder.Length = 0;
                            builder.Append(next);
                            Advance();
                            while (next != 0 && next != '\'')
                            {
                                if (next == '\\')//遇到转义修饰则连续读入两个字符
                                {
                                    builder.Append(next);
                                    Advance();
                                }
                                builder.Append(next);
                                Advance();
                            }
                            builder.Append(next);
                            yylval.Str = builder.ToString();
                            Advance();
                            return (int)Tokens.SQSTRING;
                        }
                    case '"':		// Character literal
                        {
                            char lastCh = next;
                            builder.Length = 0;
                            builder.Append(next);
                            Advance();
                            while (next != 0 && next != '"')
                            {
                                if (next == '\\')//遇到转义修饰则连续读入两个字符
                                {
                                    builder.Append(next);
                                    Advance();
                                }
                                builder.Append(next);
                                Advance();
                            }
                            builder.Append(next);
                            yylval.Str = builder.ToString();
                            Advance();
                            return (int)Tokens.QSTRING;
                        }

                    case ' ':		// skip Whitespace
                    case '\t':
                    case '\n':
                        Advance();
                        return Next();
                        
                    default:
                        if (Char.IsLetterOrDigit(next) || next == '_' || next == '$' || next == '@' || next == '?' || next == '`' || next == '.' || next == '#' || next == '-')
                        {
                            builder.Length = 0;
                            builder.Append(next);
                            Advance();
                            while (Char.IsLetterOrDigit(next) || next == '_' || next == '$' || next == '@' || next == '?' || next == '`' || next == '.' || next == '-' || next == '+')
                            {
                                builder.Append(next);
                                Advance();
                            }
                            string word = builder.ToString();
                            int ix = word.IndexOf("$");
                            if (ix > 0)
                            {
                                yylval.Str = word.Substring(0, ix);
                                return (int)Tokens.ID;
                            }
                            yylval.Str = word;
                            if (word == "...")
                                return (int)Tokens.ELIPSIS;
                            int d = CheckNumber(word, context.IsBytes);
                            if (d >= 0)
                                return d;
                            if (keywords.ContainsKey(word))
                                return keywords[word];
                            else if (word.IndexOf(".") > 0)
                            {
                                yylval.Str = word.Replace(".", "::");
                                return (int)Tokens.DOTTEDNAME;
                            }
                            else if (word.IndexOf("#") < 0 && word.IndexOf("-") < 0 && word.IndexOf("+") < 0 && word.Length > 0 && !Char.IsDigit(word[0]))
                                return (int)Tokens.ID;
                            else
                                return (int)Tokens.error;
                        }
                        else
                        {
                            char ch = next;
                            Advance();
                            if (ch == ':' && next == ':')
                            {
                                Advance();
                                yylval.Str = "::";
                                return (int)Tokens.DCOLON;
                            }
                            yylval.Str = ch.ToString();
                            return ch;
                        }
                }
            }
            finally
            {
                yylloc.eLin = linenr;
                yylloc.eCol = pos+1;
            }
        }

        private static int CheckNumber(string s,bool isBytes)
        {
            if (s.Length <= 0)
                return -1;
            else if (isBytes && s.Length == 2 && IsHexChar(s[0]) && IsHexChar(s[1]))
                return (int)Tokens.HEXBYTE;
            else
            {
                if (s.Length > 2 && s[0] == '0' && s[1] == 'x')
                {
                    UInt64 v = 0;
                    try
                    {
                        v = UInt64.Parse(s.Substring(2), NumberStyles.AllowHexSpecifier);
                    }
                    catch (Exception)
                    {
                        return -1;
                    }
                    if (v > UInt32.MaxValue || v < UInt32.MinValue)
                        return (int)Tokens.INT64;
                    else
                        return (int)Tokens.INT32;
                }
                else if (Char.IsDigit(s[0]) || s[0] == '.' || s[0] == '-')
                {
                    Int64 v = 0;
                    double dv = 0;
                    if (s.IndexOf('.') >= 0 || s.IndexOf('E') > 0 || s.IndexOf('e') > 0)
                    {
                        try
                        {
                            dv = double.Parse(s, NumberStyles.AllowExponent | NumberStyles.AllowDecimalPoint | NumberStyles.AllowLeadingSign);
                            return (int)Tokens.FLOAT64;
                        }
                        catch (Exception)
                        {
                            return -1;
                        }
                    }
                    else
                    {
                        try
                        {
                            v = Int64.Parse(s, NumberStyles.AllowLeadingSign);
                            if (v > Int32.MaxValue || v < Int32.MinValue)
                                return (int)Tokens.INT64;
                            else
                                return (int)Tokens.INT32;
                        }
                        catch (Exception)
                        {
                            return -1;
                        }
                    }
                }
                else
                {
                    return -1;
                }
            }
        }

        private static bool IsHexChar(char c)
        {
            if (Char.IsDigit(c) || c >= 'a' && c <= 'f' || c >= 'A' && c <= 'F')
                return true;
            else
                return false;
        }

        private void Advance()
        {
            if (pos + 1 < line.Length)
                next = line[++pos];
            else
            {
                if (reader.EndOfStream)
                    next = (char)0;
                else
                {
                    line = reader.ReadLine() + "\n";
                    //Console.WriteLine("\"{0}\"", line);
                    //line = line + "\n";
                    linenr++;
                    pos = 0;
                    next = line[pos];
                }
            }
        }

        private void ReportError(string format, params object[] args)
        {
            yyerror(format, args);
        }
    }
}
