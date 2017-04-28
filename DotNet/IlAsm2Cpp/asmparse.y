%{
	public Context context = null;        
%}

%using System.Globalization
%using System.IO

%namespace IL2CPP

%union
{
	public string Str;
	public object Obj;
}

        /* These are returned by the LEXER and have values */
%token ERROR_ 
%token ID             /* testing343 */
%token DOTTEDNAME     /* System.Object */
%token QSTRING        /* "Hello World\n" */
%token SQSTRING       /* 'Hello World\n' */
%token INT32          /* 3425 0x34FA  0352  */
%token INT64          /* 342534523534534      0x34FA434644554 */
%token FLOAT64        /* -334234 24E-34 */
%token HEXBYTE        /* 05 1A FA */

        /* multi-character punctuation */
%token DCOLON                   /* :: */
%token ELIPSIS                  /* ... */

        /* Keywords   Note the undersores are to avoid collisions as these are common names */
%token VOID_ BOOL_ CHAR_ UNSIGNED_ INT_ INT8_ INT16_ INT32_ INT64_ FLOAT_ FLOAT32_ FLOAT64_ BYTEARRAY_
%token UINT_ UINT8_ UINT16_ UINT32_ UINT64_  FLAGS_ CALLCONV_
%token OBJECT_ STRING_ NULLREF_
        /* misc keywords */ 
%token DEFAULT_ CDECL_ VARARG_ STDCALL_ THISCALL_ FASTCALL_ CLASS_ 
%token TYPEDREF_ UNMANAGED_ FINALLY_ CATCH_ FILTER_ FAULT_
%token EXTENDS_ IMPLEMENTS_ TO_ AT_ TLS_ TRUE_ FALSE_

        /* class, method, field attributes */

%token VALUE_ VALUETYPE_ NATIVE_ INSTANCE_ SPECIALNAME_ FORWARDER_
%token STATIC_ PUBLIC_ PRIVATE_ FAMILY_ FINAL_ SYNCHRONIZED_ INTERFACE_ SEALED_ NESTED_
%token ABSTRACT_ AUTO_ SEQUENTIAL_ EXPLICIT_ ANSI_ UNICODE_ AUTOCHAR_ IMPORT_ ENUM_
%token VIRTUAL_ NOINLINING_ UNMANAGEDEXP_ BEFOREFIELDINIT_
%token STRICT_ RETARGETABLE_
%token METHOD_ FIELD_ PINNED_ MODREQ_ MODOPT_ SERIALIZABLE_ PROPERTY_ TYPE_
%token ASSEMBLY_ FAMANDASSEM_ FAMORASSEM_ PRIVATESCOPE_ HIDEBYSIG_ NEWSLOT_ RTSPECIALNAME_ PINVOKEIMPL_
%token _CTOR _CCTOR LITERAL_ NOTSERIALIZED_ INITONLY_ REQSECOBJ_
        /* method implementation attributes: NATIVE_ and UNMANAGED_ listed above */
%token CIL_ OPTIL_ MANAGED_ FORWARDREF_ PRESERVESIG_ RUNTIME_ INTERNALCALL_
        /* PInvoke-specific keywords */
%token _IMPORT NOMANGLE_ LASTERR_ WINAPI_ AS_ BESTFIT_ ON_ OFF_ CHARMAPERROR_

        /* intruction tokens (actually instruction groupings) */
%token INSTR_NONE INSTR_VAR INSTR_I INSTR_I8 INSTR_R INSTR_BRTARGET INSTR_METHOD INSTR_FIELD 
%token INSTR_TYPE INSTR_STRING INSTR_SIG INSTR_TOK 
%token INSTR_SWITCH

        /* assember directives */
%token _CLASS _NAMESPACE _METHOD _FIELD _DATA _THIS _BASE _NESTER
%token _EMITBYTE _TRY _MAXSTACK _LOCALS _ENTRYPOINT _ZEROINIT  
%token _EVENT _ADDON _REMOVEON _FIRE _OTHER 
%token _PROPERTY _SET _GET DEFAULT_ 
%token _PERMISSION _PERMISSIONSET

                /* security actions */
%token REQUEST_ DEMAND_ ASSERT_ DENY_ PERMITONLY_ LINKCHECK_ INHERITCHECK_ 
%token REQMIN_ REQOPT_ REQREFUSE_ PREJITGRANT_ PREJITDENY_ NONCASDEMAND_
%token NONCASLINKDEMAND_ NONCASINHERITANCE_ 

        /* extern debug info specifier (to be used by precompilers only) */
%token _LINE P_LINE _LANGUAGE
        /* custom value specifier */
%token _CUSTOM
        /* local vars zeroinit specifier */
%token INIT_
        /* class layout */
%token _SIZE _PACK
%token _VTFIXUP FROMUNMANAGED_ CALLMOSTDERIVED_ _VTENTRY RETAINAPPDOMAIN_
        /* manifest */
%token _FILE NOMETADATA_ _HASH _ASSEMBLY _PUBLICKEY _PUBLICKEYTOKEN ALGORITHM_ _VER _LOCALE EXTERN_ 
%token _MRESOURCE 
%token _MODULE _EXPORT
%token LEGACY_ LIBRARY_ X86_ IA64_ AMD64_
        /* field marshaling */
%token MARSHAL_ CUSTOM_ SYSSTRING_ FIXED_ VARIANT_ CURRENCY_ SYSCHAR_ DECIMAL_ DATE_ BSTR_ TBSTR_ LPSTR_
%token LPWSTR_ LPTSTR_ OBJECTREF_ IUNKNOWN_ IDISPATCH_ STRUCT_ SAFEARRAY_ BYVALSTR_ LPVOID_ ANY_ ARRAY_ LPSTRUCT_
%token IIDPARAM_
        /* parameter attributes */
%token IN_ OUT_ OPT_ PARAM_
                /* method implementations */
%token _OVERRIDE WITH_
                /* variant type specifics */
%token NULL_ ERROR_ HRESULT_ CARRAY_ USERDEFINED_ RECORD_ FILETIME_ BLOB_ STREAM_ STORAGE_
%token STREAMED_OBJECT_ STORED_OBJECT_ BLOB_OBJECT_ CF_ CLSID_ VECTOR_
                /* header flags */
%token _SUBSYSTEM _CORFLAGS ALIGNMENT_ _IMAGEBASE _STACKRESERVE

        /* nonTerminals */
%type dottedName id methodName atOpt slashedName
%type labels
%type callConv callKind int32 customHead customHeadWithOwner vtfixupAttr paramAttr ddItemCount variantType repeatOpt truefalse typarAttrib typarAttribs
%type iidParamIndex genArity
%type float64
%type int64
%type sigArgs0 sigArgs1 sigArg type bound bounds1 bytes hexbytes nativeType initOpt compQstring
%type marshalClause
%type fieldInit fieldSerInit
%type simpleType
%type tyArgs0 tyArgs1 tyArgs2 typeList typeListNotEmpty tyBound
%type intOrWildcard
%type typars typar typarsClause
%type className typeSpec ownerType customType memberRef methodRef 
%type classAttr
%type methAttr
%type fieldAttr
%type implAttr
%type eventAttr
%type propAttr
%type pinvAttr
%type secAction
%type fileAttr
%type fileEntry
%type asmAttr
%type exptAttr
%type manresAttr
%type customDescr customDescrWithOwner
%type instr_none instr_var instr_i instr_i8 instr_r instr_brtarget instr_method instr_field
%type instr_type instr_string instr_sig instr_tok instr_switch
%type instr_r_head

%start decls

/**************************************************************************/
%%      

decls                   : /* EMPTY */
                        | decls decl                                            
                        ;
/* Module-level declarations */
decl                    : classHead '{' classDecls '}'       {context.EndClass();}                   
                        | nameSpaceHead '{' decls '}'                           
                        | methodHead  methodDecls '}'        {context.EndMethod();}
                        | fieldDecl													 {context.EndField();}
                        | dataDecl
                        | vtfixupDecl
                        | extSourceSpec
                        | fileDecl
                        | assemblyHead '{' assemblyDecls '}'                    
                        | assemblyRefHead '{' assemblyRefDecls '}'       {context.AddReference(AssemblyRef.Temp);AssemblyRef.ResetTemp();}       
                        | exptypeHead '{' exptypeDecls '}'                      
                        | manifestResHead '{' manifestResDecls '}'              
                        | moduleHead
                        | secDecl
                        | customAttrDecl
                        | _SUBSYSTEM int32                                      
                        | _CORFLAGS int32                                       
                        | _FILE ALIGNMENT_ int32                                
                        | _IMAGEBASE int64                                      
                        | _STACKRESERVE int64                                   
                        | languageDecl                                        
                        ;                       

compQstring             : QSTRING                                               
                        | compQstring '+' QSTRING        			{$$.Str=$1.Str+"+"+$3.Str;}                       
                        ;

languageDecl            : _LANGUAGE SQSTRING                                    
                        | _LANGUAGE SQSTRING ',' SQSTRING                       
                        | _LANGUAGE SQSTRING ',' SQSTRING ',' SQSTRING          
                        ;
/*  Basic tokens  */                        
id                      : ID                                  
                        | SQSTRING                            {$$.Str=$1.Str.Substring(1,$1.Str.Length-2);}
                        ;

dottedName              : id                                  
                        | DOTTEDNAME                          
                        | dottedName '.' dottedName          {$$.Str=$1.Str+"::"+$3.Str;} 
                        ;

int32                   : INT32    
												| HEXBYTE                           
                        ;

int64                   : INT64                               
                        | INT32                               
                        ;

float64                 : FLOAT64                             
                        | FLOAT32_ '(' int32 ')'              {$$=$3;}
                        | FLOAT64_ '(' int64 ')'              {$$=$3;}
                        ;
                                              
/* Custom attribute declarations  */
customAttrDecl          : customDescr
                        | customDescrWithOwner 
                        ;
                        
customDescr             : _CUSTOM customType                                 					{CustomAttribute ca=new CustomAttribute();ca.CustomType=$2.Obj as MethodOperand;$$.Obj=ca;}
                        | customHead bytes ')'                               					{
                        																																CustomAttribute ca=$1.Obj as CustomAttribute;
                        																																ca.AttrValue=$2.Str;
                        																																$$.Obj=ca;
                        																																context.EndBytes();
                        																															}
												| _CUSTOM customType '=' compQstring                    			{ $$.Obj=null; }
                        | _CUSTOM customType '=' '{' customBlobDescr '}'        			{ $$.Obj=null; }              																															
                        ;

customDescrWithOwner    : _CUSTOM '(' ownerType ')' customType               					{CustomAttribute ca=new CustomAttribute();ca.OwnerType=$3.Obj;ca.CustomType=$5.Obj as MethodOperand;$$.Obj=ca;}   
                        | customHeadWithOwner bytes ')'                         			{
                        																																CustomAttribute ca=$1.Obj as CustomAttribute;
                        																																ca.AttrValue=$2.Str;
                        																																$$.Obj=ca;
                        																																context.EndBytes();
                        																															}
												| _CUSTOM '(' ownerType ')' customType '=' compQstring  			{ $$.Obj=null; }
                        | _CUSTOM '(' ownerType ')' customType '=' '{' customBlobDescr '}' 
                        																															{ $$.Obj=null; }                       																															
                        ;
                        
customHead              : _CUSTOM customType '=' '('                            			{
																																												CustomAttribute ca=new CustomAttribute();
																																												ca.CustomType=$2.Obj as MethodOperand;
																																												$$.Obj=ca;
																																												context.StartBytes();
																																											}
                        ;

customHeadWithOwner     : _CUSTOM '(' ownerType ')' customType '=' '('        				{
																																												CustomAttribute ca=new CustomAttribute();
																																												ca.OwnerType=$3.Obj;
																																												ca.CustomType=$5.Obj as MethodOperand;
																																												$$.Obj=ca;
																																												context.StartBytes();
																																											}
                        ;

customType              : methodRef                         
                        ;

ownerType               : typeSpec     					{$$.Obj=new TypeSpecOperand($$.Obj as TypeInfo);}                     
                        | memberRef                         
                        ;
                        
/*  Verbal description of custom attribute initialization blob  */                        
customBlobDescr         : customBlobArgs customBlobNVPairs                      
                        ;
                        
customBlobArgs          : /* EMPTY */                                           
                        | customBlobArgs serInit                     
                        ;
                        
customBlobNVPairs       : /* EMPTY */                                           
                        | customBlobNVPairs fieldOrProp serializType dottedName '=' serInit
                        ;      
                        
fieldOrProp             : FIELD_                                                
                        | PROPERTY_                                             
                        ;  
                        
serializType            : simpleType                          
                        | TYPE_                               
                        | OBJECT_                             
                        | ENUM_ CLASS_ SQSTRING               
                        | ENUM_ className                    
                        | serializType '[' ']'                
                        ;                                                                
                        
/*  Module declaration */
moduleHead              : _MODULE                                               
                        | _MODULE dottedName                                    
                        | _MODULE EXTERN_ dottedName                            
                        ;
                        
/*  VTable Fixup table declaration  */
vtfixupDecl             : _VTFIXUP '[' int32 ']' vtfixupAttr AT_ id             
                        ;

vtfixupAttr             : /* EMPTY */                                           
                        | vtfixupAttr INT32_                                    
                        | vtfixupAttr INT64_                                    
                        | vtfixupAttr FROMUNMANAGED_                            
                        | vtfixupAttr CALLMOSTDERIVED_                          
                        | vtfixupAttr RETAINAPPDOMAIN_                          
                        ;

/*  Namespace and class declaration  */                         
nameSpaceHead           : _NAMESPACE dottedName                                 
                        ;

_class                  : _CLASS {context.NewClass();}                                         
                        ;
                        
classHeadBegin          : _class classAttr dottedName typarsClause      		{context.CurClassInfo.FullName=$3.Str;}
                        ;
classHead               : classHeadBegin extendsClause implClause          	{context.BeginClass();}
                        ;

classAttr               : /* EMPTY */                       
                        | classAttr PUBLIC_                 {context.CurClassInfo.Accesses.Add($2.Str);}							
                        | classAttr PRIVATE_                {context.CurClassInfo.Accesses.Add($2.Str);}
                        | classAttr VALUE_                  {context.CurClassInfo.Type="value";}
                        | classAttr ENUM_                   {context.CurClassInfo.Type="enum";}
                        | classAttr INTERFACE_              {context.CurClassInfo.Type="interface";}
                        | classAttr SEALED_                 {context.CurClassInfo.PostAttrs.Add($2.Str);}
                        | classAttr ABSTRACT_               {context.CurClassInfo.PostAttrs.Add($2.Str);}
                        | classAttr AUTO_                   {context.CurClassInfo.LayoutKind="LayoutKind::Auto";}
                        | classAttr SEQUENTIAL_             {context.CurClassInfo.LayoutKind="LayoutKind::Sequential";}
                        | classAttr EXPLICIT_               {context.CurClassInfo.LayoutKind="LayoutKind::Explicit";}
                        | classAttr ANSI_                   {context.CurClassInfo.LayoutAttrs.Add("CharSet=CharSet::Ansi");}
                        | classAttr UNICODE_                {context.CurClassInfo.LayoutAttrs.Add("CharSet=CharSet::Unicode");}
                        | classAttr AUTOCHAR_               {context.CurClassInfo.LayoutAttrs.Add("CharSet=CharSet::Auto");}
                        | classAttr IMPORT_                 {context.CurClassInfo.IsImport=true;}
                        | classAttr SERIALIZABLE_           {context.CurClassInfo.IsSerializable=true;}
                        | classAttr NESTED_ PUBLIC_         		{context.CurClassInfo.Accesses.Add($3.Str);}			
                        | classAttr NESTED_ PRIVATE_        		{context.CurClassInfo.Accesses.Add("private");}	
                        | classAttr NESTED_ FAMILY_         		{context.CurClassInfo.Accesses.Add("protected");}					
                        | classAttr NESTED_ ASSEMBLY_       		{context.CurClassInfo.Accesses.Add("internal");}					
                        | classAttr NESTED_ FAMANDASSEM_    		{context.CurClassInfo.Accesses.Add("private protected");}
                        | classAttr NESTED_ FAMORASSEM_     		{context.CurClassInfo.Accesses.Add("public protected");}					
                        | classAttr BEFOREFIELDINIT_        				
                        | classAttr SPECIALNAME_            		{context.CurClassInfo.IsSpecial=true;}		
                        | classAttr RTSPECIALNAME_          		{context.CurClassInfo.IsRTSpecial=true;}	
                        | classAttr FLAGS_ '(' int32 ')'    		
                        ;

extendsClause           : /* EMPTY */                       {context.CurClassInfo.BaseClass=UndefinedTypeInfo.Ref;}                   
                        | EXTENDS_ typeSpec           			{context.CurClassInfo.BaseClass=$2.Obj as TypeInfo;}                      
                        ;

implClause              : /* EMPTY */	
                        | IMPLEMENTS_ implList				
                        ;

classDecls              : /* EMPTY */
                        | classDecls classDecl
                        ;
                        
implList                : implList ',' typeSpec       			{context.CurClassInfo.ImplIntfs.Add($3.Obj as TypeInfo);}
                        | typeSpec                    			{context.CurClassInfo.ImplIntfs.Add($1.Obj as TypeInfo);}      
                                        ;

/* Generic type parameters declaration  */                         
typeList                : /* EMPTY */                       
                        | typeListNotEmpty                  
                        ;
                        
typeListNotEmpty        : typeSpec                          {TypeParams.TempParam.ConstraintTypes.Add($1.Obj as TypeInfo);}
                        | typeListNotEmpty ',' typeSpec     {TypeParams.TempParam.ConstraintTypes.Add($3.Obj as TypeInfo);}
                        ;

typarsClause            : /* EMPTY */                       
                        | '<' typars '>'                    
                        ;

typarAttrib             : '+'   											      
                        | '-'                               
                        | CLASS_           									{TypeParams.TempParam.ConstraintAttrs.Add("ref class");}                 
                        | VALUETYPE_                				{TypeParams.TempParam.ConstraintAttrs.Add("value class");}
                        | _CTOR                     				{TypeParams.TempParam.ConstraintAttrs.Add("gcnew()");}
                        ;
                  
typarAttribs            : /* EMPTY */                       
                        | typarAttribs typarAttrib          
                        ;

typars									: typar															{TypeParams.Add();}
												| typars ',' typar									{TypeParams.Add();}
												;

typar                   : typarAttribs tyBound dottedName		{TypeParams.TempParam.Id=$3.Str;}
                        | typarAttribs dottedName						{TypeParams.TempParam.Id=$2.Str;}
                        ;

tyBound                 : '(' typeList ')'                  
                        ;
                        
genArity                : /* EMPTY */                   	 {$$.Str="0";}    
                        | '<' '[' int32 ']' '>'            {$$=$3;}
                        ;                        

/*  Class body declarations  */                         
classDecl               : methodHead  methodDecls '}'      {context.EndMethod();} 
                        | classHead '{' classDecls '}'     {context.EndClass();}
                        | eventHead '{' eventDecls '}'     {context.EndEvent();} 
                        | propHead '{' propDecls '}'       {context.EndProperty();}
                        | fieldDecl												 {context.EndField();}
                        | dataDecl
                        | secDecl													 {
                        																		if($1.Obj!=null)
                        																		{
                        																			context.CurClassInfo.AddPermission($1.Obj);
                        																		}
                        																	 }
                        | extSourceSpec
                        | customAttrDecl									 {
                        																		if($1.Obj!=null)
                        																		{
                        																			context.CurClassInfo.CustomAttrs.Add($1.Obj as CustomAttribute);
                        																		}
                        																	 }
                        | _SIZE int32                      {context.CurClassInfo.LayoutAttrs.Add("Size="+$2.Str);}     
                        | _PACK int32                      {context.CurClassInfo.LayoutAttrs.Add("Pack="+$2.Str);}
                        | exportHead '{' exptypeDecls '}'       
                        | _OVERRIDE typeSpec DCOLON methodName WITH_ callConv type typeSpec DCOLON methodName '(' sigArgs0 ')'  
                        																	 {
                        																	 		ClassOverrideInfo coi=new ClassOverrideInfo();
                        																	 		
                        																	 		coi.OverridedMethod.TypeSpec=$2.Obj as TypeInfo;
                        																	 		coi.OverridedMethod.Name=$4.Str;
                        																	 		
                        																	 		Context.ListAddList(coi.OverrideMethod.CallConvs,$6.Obj);
                        																	 		coi.OverrideMethod.RetType=$7.Obj as TypeInfo;
                        																	 		coi.OverrideMethod.TypeSpec=$8.Obj as TypeInfo;
                        																	 		coi.OverrideMethod.Name=$10.Str;
                        																	 		coi.OverrideMethod.Args.AddRange(($12.Obj as Params).Args);
                        																	 		
                        																	 		context.CurClassInfo.OverrideAttrs.Add(coi);
                        																	 }
                        | _OVERRIDE METHOD_ callConv type typeSpec DCOLON methodName genArity '(' sigArgs0 ')' WITH_ METHOD_ callConv type typeSpec DCOLON methodName genArity '(' sigArgs0 ')'                                                             
                        																	 {
                        																	 		ClassOverrideInfo coi=new ClassOverrideInfo();     
                        																	 		                   																	 		
                        																	 		Context.ListAddList(coi.OverridedMethod.CallConvs,$3.Obj);
                        																	 		coi.OverridedMethod.RetType=$4.Obj as TypeInfo;
                        																	 		coi.OverridedMethod.TypeSpec=$5.Obj as TypeInfo;
                        																	 		coi.OverridedMethod.Name=$7.Str;
                        																	 		coi.OverridedMethod.GenArity=$8.Str;
                        																	 		coi.OverridedMethod.Args.AddRange(($10.Obj as Params).Args);
                        																	 		
                        																	 		Context.ListAddList(coi.OverrideMethod.CallConvs,$14.Obj);
                        																	 		coi.OverrideMethod.RetType=$15.Obj as TypeInfo;
                        																	 		coi.OverrideMethod.TypeSpec=$16.Obj as TypeInfo;
                        																	 		coi.OverrideMethod.Name=$18.Str;
                        																	 		coi.OverrideMethod.GenArity=$19.Str;
                        																	 		coi.OverrideMethod.Args.AddRange(($21.Obj as Params).Args);
                        																	 		context.CurClassInfo.OverrideAttrs.Add(coi);
                        																	 }
                        | languageDecl
                        | PARAM_ TYPE_ '[' int32 ']'       {context.CurClassInfo.LastParamTypeDirective=$4.Str;} 
                        | PARAM_ TYPE_ dottedName          {context.CurClassInfo.LastParamTypeDirective=$3.Str;} 
                        ;

/*  Field declaration  */                        
fieldDecl               : fieldPart1 repeatOpt fieldAttr type dottedName atOpt initOpt     	{
																																															context.CurFieldInfo.Type=$4.Obj as TypeInfo;
																																															context.CurFieldInfo.Name=$5.Str;
																																															context.CurFieldInfo.Init=$7.Str;
																																															context.BeginField();
																																														}
                        ;
                        
fieldPart1  						: _FIELD			{context.NewField();}
												;                        

fieldAttr               : /* EMPTY */                       
                        | fieldAttr STATIC_             		{context.CurFieldInfo.PreAttrs.Add($2.Str);}    
                        | fieldAttr PUBLIC_                 {context.CurFieldInfo.Accesses.Add($2.Str);}    
                        | fieldAttr PRIVATE_                {context.CurFieldInfo.Accesses.Add($2.Str);}    
                        | fieldAttr FAMILY_                 {context.CurFieldInfo.Accesses.Add("protected");}    
                        | fieldAttr INITONLY_               {context.CurFieldInfo.PreAttrs.Add("initonly");}    
                        | fieldAttr RTSPECIALNAME_          {context.CurFieldInfo.IsRTSpecial=true;}    
                        | fieldAttr SPECIALNAME_            {context.CurFieldInfo.IsSpecial=true;}   
                        | fieldAttr marshalClause      			{context.CurFieldInfo.MarshalAs=$2.Obj as NativeTypeInfo;}
                        | fieldAttr ASSEMBLY_               {context.CurFieldInfo.Accesses.Add("internal");}    
                        | fieldAttr FAMANDASSEM_            {context.CurFieldInfo.Accesses.Add("private protected");}        
                        | fieldAttr FAMORASSEM_             {context.CurFieldInfo.Accesses.Add("public protected");}    
                        | fieldAttr PRIVATESCOPE_               
                        | fieldAttr LITERAL_                {context.CurFieldInfo.PreAttrs.Add("literal");}    
                        | fieldAttr NOTSERIALIZED_          {context.CurFieldInfo.IsNotSerialized=true;}   
                        | fieldAttr FLAGS_ '(' int32 ')'        
                        ;

atOpt                   : /* EMPTY */                       
                        | AT_ id                            {context.CurFieldInfo.At=$2.Str;}
                        ;

initOpt                 : /* EMPTY */                       {$$.Str="";}
                        | '=' fieldInit                     {$$=$2;}
                                                ;

repeatOpt               : /* EMPTY */                       
                        | '[' int32 ']'                     
                                                ;

/*  Method referencing  */
methodRef               : callConv type typeSpec DCOLON methodName tyArgs0 '(' sigArgs0 ')'     {
																																																	MethodOperand r=new MethodOperand();
																																																	Context.ListAddList(r.CallConvs,$1.Obj);
																																																	r.RetType=$2.Obj as TypeInfo;
																																																	r.TypeSpec=$3.Obj as TypeInfo;
																																																	r.Name=$5.Str;
																																																	r.TypeArgs.AddRange($6.Obj as List<TypeInfo>);
																																																	r.Args.AddRange(($8.Obj as Params).Args);
																																																	r.CalcSig();
																																																	$$.Obj=r;
																																																	$$.Str=r.Value;
																																																}
                        | callConv type methodName tyArgs0 '(' sigArgs0 ')'				 							{
																																																	MethodOperand r=new MethodOperand();
																																																	Context.ListAddList(r.CallConvs,$1.Obj);
																																																	r.RetType=$2.Obj as TypeInfo;
																																																	r.Name=$3.Str;
																																																	r.TypeArgs.AddRange($4.Obj as List<TypeInfo>);
																																																	r.Args.AddRange(($6.Obj as Params).Args);
																																																	r.CalcSig();
																																																	$$.Obj=r;
																																																	$$.Str=r.Value;
																																																}
                        ;
                        
callConv                : INSTANCE_ callConv                  		{
																																		Context.ListAddStrings($2.Obj,$1.Str);
																																		$$.Obj=$2.Obj;
																																	}
                        | EXPLICIT_ callConv                  		{
																																		Context.ListAddStrings($2.Obj,$1.Str);
																																		$$.Obj=$2.Obj;
                        																					}
                        | callKind                            		{
                        																						if($1.Str.Length>0)
                        																							$$.Obj=Context.CreateStringList($1.Str);
                        																						else
                        																							$$.Obj=Context.CreateStringList();
                        																					}
                        | CALLCONV_ '(' int32 ')'             		
                        ;

callKind                : /* EMPTY */                         		{$$.Str="";}
                        | DEFAULT_                            		
                        | VARARG_                             		
                        | UNMANAGED_ CDECL_                   		{$$=$2;}
                        | UNMANAGED_ STDCALL_                 		{$$=$2;}
                        | UNMANAGED_ THISCALL_                		{$$=$2;}
                        | UNMANAGED_ FASTCALL_                		{$$=$2;}
                        ;

                        
fieldRef								: type typeSpec DCOLON dottedName					{
																															 			FieldOperand op=new FieldOperand();
																															 			op.Type=$1.Obj as TypeInfo;
																															 			op.TypeSpec=$2.Obj as TypeInfo;
																															 			op.Name=$4.Str;
																															 			$$.Obj=op;
																															 			$$.Str=op.Value;
																															 		}
																															 			
												| type dottedName													{
																															 			FieldOperand op=new FieldOperand();
																															 			op.Type=$1.Obj as TypeInfo;
																															 			op.Name=$2.Str;
																															 			$$.Obj=op;
																															 			$$.Str=op.Value;
																															 		}
												;

memberRef               : methodSpec methodRef               			{$$=$2;}
                        | FIELD_ fieldRef													{$$=$2;}
                        ;

/*  Event declaration  */                        
eventHead               : eventHeadPart1 eventAttr typeSpec dottedName   	{
																																						context.CurEventInfo.Type=$3.Obj as TypeInfo;
																																						context.CurEventInfo.Name=$4.Str;
																																						context.BeginEvent();
																																				  }
                        | eventHeadPart1 eventAttr dottedName            	{
																																						context.CurEventInfo.Name=$3.Str;
                        																										context.BeginEvent();
                        																									}
                        ;
                        
eventHeadPart1					: _EVENT					{context.NewEvent();context.CurEventInfo.Accesses.Add("public");}
												;                        


eventAttr               : /* EMPTY */                       
                        | eventAttr RTSPECIALNAME_         {context.CurEventInfo.IsRTSpecial=true;}
                        | eventAttr SPECIALNAME_           {context.CurEventInfo.IsSpecial=true;} 
                        ;

eventDecls              : /* EMPTY */
                        | eventDecls eventDecl
                        ;

eventDecl               : _ADDON methodRef                 {context.CurEventInfo.AddMethod=context.DecideRefedMethod($2.Obj as MethodOperand,MethodInfo.AddMethod);}
                        | _REMOVEON methodRef              {context.CurEventInfo.RemoveMethod=context.DecideRefedMethod($2.Obj as MethodOperand,MethodInfo.RemoveMethod);}
                        | _FIRE methodRef                  {context.CurEventInfo.RaiseMethod=context.DecideRefedMethod($2.Obj as MethodOperand,MethodInfo.RaiseMethod);}
                        | _OTHER methodRef                 
                        | extSourceSpec
                        | customAttrDecl									 {
                        																		if($1.Obj!=null)
                        																		{
                        																			context.CurEventInfo.CustomAttrs.Add($1.Obj as CustomAttribute);
                        																		}
                        																	 }
                        | languageDecl
                        ;

/*  Property declaration  */                         
propHead                : propHeadPart1 propAttr callConv type dottedName '(' sigArgs0 ')' initOpt  {
																																																			Context.ListAddList(context.CurPropertyInfo.CallConvs,$3.Obj);
																																																			context.CurPropertyInfo.Type=$4.Obj as TypeInfo;
																																																			context.CurPropertyInfo.Name=$5.Str;
																																																			context.CurPropertyInfo.Args.AddRange(($7.Obj as Params).Args);
																																																			context.BeginProperty();
																																																		}                                                            
                        ;
                        
propHeadPart1						: _PROPERTY			{context.NewProperty();context.CurPropertyInfo.Accesses.Add("public");}
												;                        

propAttr                : /* EMPTY */                       
                        | propAttr RTSPECIALNAME_           {context.CurPropertyInfo.IsRTSpecial=true;}
                        | propAttr SPECIALNAME_             {context.CurPropertyInfo.IsSpecial=true;}
                        ;

propDecls               : /* EMPTY */
                        | propDecls propDecl
                        ;


propDecl                : _SET methodRef                    {context.CurPropertyInfo.SetMethod=context.DecideRefedMethod($2.Obj as MethodOperand,MethodInfo.SetMethod);}
                        | _GET methodRef                    {context.CurPropertyInfo.GetMethod=context.DecideRefedMethod($2.Obj as MethodOperand,MethodInfo.GetMethod);}
                        | _OTHER methodRef                  
                        | customAttrDecl										{
	                        																		if($1.Obj!=null)
	                        																		{
	                        																			context.CurPropertyInfo.CustomAttrs.Add($1.Obj as CustomAttribute);
	                        																		}
                        																	 	}
                        | extSourceSpec
                        | languageDecl
                        ;

/*  Method declaration  */
methodHeadPart1         : _METHOD     {context.NewMethod();}             
                        ;
                        
marshalClause           : /* EMPTY */                       {$$.Obj=NativeTypeInfo.Null;}
                        | MARSHAL_ '(' nativeType ')'       {$$=$3;}
                        ;

methodHead              : methodHeadPart1 methAttr callConv paramAttr type marshalClause methodName typarsClause '(' sigArgs0 ')' implAttr '{'		 	{																																																																											
																																																																											Context.ListAddList(context.CurMethodInfo.CallConvs,$3.Obj);
																																																																											Context.ListAddList(context.CurMethodInfo.RetAttrs,$4.Obj);
																																																																											context.CurMethodInfo.RetType=$5.Obj as TypeInfo;
																																																																											context.CurMethodInfo.MarshalAs=$6.Obj as NativeTypeInfo;
																																																																											context.CurMethodInfo.Name=$7.Str;
																																																																											context.CurMethodInfo.Args.AddRange(($10.Obj as Params).Args);
																																																																											context.BeginMethod();
																																																																										}
                        ;

methAttr                : /* EMPTY */                       
                        | methAttr STATIC_              		{context.CurMethodInfo.PreAttrs.Add($2.Str);}    
                        | methAttr PUBLIC_              		{context.CurMethodInfo.Accesses.Add($2.Str);}    
                        | methAttr PRIVATE_                 {context.CurMethodInfo.Accesses.Add($2.Str);}    
                        | methAttr FAMILY_                  {context.CurMethodInfo.Accesses.Add("protected");}
                        | methAttr FINAL_                   {context.CurMethodInfo.PostAttrs.Add("sealed");}
                        | methAttr SPECIALNAME_             {context.CurMethodInfo.IsSpecial=true;}    
                        | methAttr VIRTUAL_                 {context.CurMethodInfo.PreAttrs.Add("virtual");}    
                        | methAttr STRICT_                      
                        | methAttr ABSTRACT_                {context.CurMethodInfo.PostAttrs.Add($2.Str);}    
                        | methAttr ASSEMBLY_                {context.CurMethodInfo.Accesses.Add("internal");}    
                        | methAttr FAMANDASSEM_             {context.CurMethodInfo.Accesses.Add("private protected");}
                        | methAttr FAMORASSEM_              {context.CurMethodInfo.Accesses.Add("public protected");}
                        | methAttr PRIVATESCOPE_            {context.CurMethodInfo.Accesses.Add("private");}    
                        | methAttr HIDEBYSIG_                   
                        | methAttr NEWSLOT_                     
                        | methAttr RTSPECIALNAME_           {context.CurMethodInfo.IsRTSpecial=true;}     
                        | methAttr UNMANAGEDEXP_                
                        | methAttr REQSECOBJ_               
                        | methAttr FLAGS_ '(' int32 ')'     
                        | methAttr PINVOKEIMPL_ '(' compQstring AS_ compQstring pinvAttr ')'    
                        																		{
                        																			context.CurMethodInfo.PinvokeDll=$4.Str;
                        																			context.CurMethodInfo.PinvokeAttrs.Add("EntryPoint="+$6.Str);
                        																		}                
                                                            
                        | methAttr PINVOKEIMPL_ '(' compQstring  pinvAttr ')'    
                        																		{
                        																			context.CurMethodInfo.PinvokeDll=$4.Str;
                        																		}                                      
                                                            
                        | methAttr PINVOKEIMPL_ '(' pinvAttr ')'                        
                                                            
                        ;                      

pinvAttr                : /* EMPTY */                       
                        | pinvAttr NOMANGLE_                
                        | pinvAttr ANSI_                    {context.CurMethodInfo.PinvokeAttrs.Add("CharSet=CharSet::Ansi");}
                        | pinvAttr UNICODE_                 {context.CurMethodInfo.PinvokeAttrs.Add("CharSet=CharSet::Unicode");}
                        | pinvAttr AUTOCHAR_                {context.CurMethodInfo.PinvokeAttrs.Add("CharSet=CharSet::Auto");}
                        | pinvAttr LASTERR_                 {context.CurMethodInfo.PinvokeAttrs.Add("SetLastError=true");}
                        | pinvAttr WINAPI_                  {context.CurMethodInfo.PinvokeAttrs.Add("CallingConvention=CallingConvention::Winapi");}
                        | pinvAttr CDECL_                   {context.CurMethodInfo.PinvokeAttrs.Add("CallingConvention=CallingConvention::Cdecl");}
                        | pinvAttr STDCALL_                 {context.CurMethodInfo.PinvokeAttrs.Add("CallingConvention=CallingConvention::StdCall");}
                        | pinvAttr THISCALL_                {context.CurMethodInfo.PinvokeAttrs.Add("CallingConvention=CallingConvention::ThisCall");}
                        | pinvAttr FASTCALL_                {context.CurMethodInfo.PinvokeAttrs.Add("CallingConvention=CallingConvention::FastCall");}
                        | pinvAttr BESTFIT_ ':' ON_         {context.CurMethodInfo.PinvokeAttrs.Add("BestFitMapping=true");}
                        | pinvAttr BESTFIT_ ':' OFF_        {context.CurMethodInfo.PinvokeAttrs.Add("BestFitMapping=false");}
                        | pinvAttr CHARMAPERROR_ ':' ON_    {context.CurMethodInfo.PinvokeAttrs.Add("ThrowOnUnmappableChar=true");}
                        | pinvAttr CHARMAPERROR_ ':' OFF_   {context.CurMethodInfo.PinvokeAttrs.Add("ThrowOnUnmappableChar=false");}
                        | pinvAttr FLAGS_ '(' int32 ')'     
                        ;

methodName              : _CTOR                             
                        | _CCTOR                            
                        | dottedName                        
                        ;

paramAttr               : /* EMPTY */                       {$$.Obj=Context.CreateStringList();}
                        | paramAttr '[' IN_ ']'             {Context.ListAddStrings($1.Obj,"In");$$.Obj=$1.Obj;}
                        | paramAttr '[' OUT_ ']'            {Context.ListAddStrings($1.Obj,"Out");$$.Obj=$1.Obj;}
                        | paramAttr '[' OPT_ ']'            {Context.ListAddStrings($1.Obj,"Optional");$$.Obj=$1.Obj;}
                        | paramAttr '[' int32 ']'           {$$=$1;}
                        ;
        
implAttr                : /* EMPTY */                       
                        | implAttr NATIVE_                  {context.CurMethodInfo.ImplCodeType="MethodCodeType=MethodCodeType::Native";}
                        | implAttr CIL_                     {/*context.CurMethodInfo.ImplCodeType="MethodCodeType=MethodCodeType::IL";*/}
                        | implAttr OPTIL_                   {context.CurMethodInfo.ImplCodeType="MethodCodeType=MethodCodeType::OPTIL";}
                        | implAttr MANAGED_                 
                        | implAttr UNMANAGED_               {context.CurMethodInfo.ImplOptions.Add("MethodImplOptions::Unmanaged");}
                        | implAttr FORWARDREF_              {context.CurMethodInfo.ImplOptions.Add("MethodImplOptions::ForwardRef");}
                        | implAttr PRESERVESIG_             {context.CurMethodInfo.IsPreserveSig=true;}
                        | implAttr RUNTIME_                 {context.CurMethodInfo.ImplCodeType="MethodCodeType=MethodCodeType::Runtime";}
                        | implAttr INTERNALCALL_            {context.CurMethodInfo.ImplOptions.Add("MethodImplOptions::InternalCall");}
                        | implAttr SYNCHRONIZED_            {context.CurMethodInfo.ImplOptions.Add("MethodImplOptions::Synchronized");}
                        | implAttr NOINLINING_              {context.CurMethodInfo.ImplOptions.Add("MethodImplOptions::NoInlining");}
                        | implAttr FLAGS_ '(' int32 ')'     
                        ;

localsHead              : _LOCALS                           
                        ;

methodDecls             : /* EMPTY */
                        | methodDecls methodDecl
                        ;

methodDecl              : _EMITBYTE int32                   					
                        | sehBlock                          
                        | _MAXSTACK int32                   
                        | localsHead '(' sigArgs0 ')'       					{context.CurMethodInfo.Body.Locals.AddRange(($3.Obj as Params).Args);}
                        | localsHead INIT_ '(' sigArgs0 ')' 					{context.CurMethodInfo.Body.Locals.AddRange(($4.Obj as Params).Args);}
                        | _ENTRYPOINT                       					{context.CurMethodInfo.IsEntryPoint=true;}
                        | _ZEROINIT                         
                        | dataDecl
                        | instr																				{context.CurMethodInfo.Body.AddIl();}
                        | id ':'                            					{MethodBody.TempIl.Label=$1.Str+":";}
                        | secDecl																			{context.CurMethodInfo.AddPermission($1.Obj);}
                        | extSourceSpec
                        | languageDecl
                        | customAttrDecl															{
						                        																		if($1.Obj!=null)
						                        																		{
						                        																			context.CurMethodInfo.CustomAttrs.Add($1.Obj as CustomAttribute);
						                        																		}
						                        																	}
                        | _EXPORT '[' int32 ']'             
                        | _EXPORT '[' int32 ']' AS_ id      
                        | _VTENTRY int32 ':' int32          
                        | _OVERRIDE typeSpec DCOLON methodName 				{
                        																								MethodOverrideInfo moi=new MethodOverrideInfo();
					                        																	 		moi.TypeSpec=$2.Obj as TypeInfo;
					                        																	 		moi.Name=$4.Str;
                        																	 		          context.CurMethodInfo.OverrideAttrs.Add(moi);            																								
                        																							}																							 
                                                            

                        | _OVERRIDE METHOD_ callConv type typeSpec DCOLON methodName genArity '(' sigArgs0 ')'     	 
                        																							{
                        																								MethodOverrideInfo moi=new MethodOverrideInfo();
                        																								Context.ListAddList(moi.CallConvs,$3.Obj);
					                        																	 		moi.RetType=$4.Obj as TypeInfo;
					                        																	 		moi.TypeSpec=$5.Obj as TypeInfo;
					                        																	 		moi.Name=$7.Str;
					                        																	 		moi.GenArity=$8.Str;
					                        																	 		moi.Args.AddRange(($10.Obj as Params).Args);
                        																	 		          context.CurMethodInfo.OverrideAttrs.Add(moi);            											                        																	 		
                        																							}	                                                     
                        | scopeBlock																	
                        | PARAM_ TYPE_ '[' int32 ']'        					{context.CurMethodInfo.LastParamTypeDirective=$4.Str;}
                        | PARAM_ TYPE_ dottedName           					{context.CurMethodInfo.LastParamTypeDirective=$3.Str;}
                        | PARAM_ '[' int32 ']' initOpt         				{context.CurMethodInfo.LastParamDirective=$3.Str;context.CurMethodInfo.SetParamValue($3.Str,$5.Str);}
                        ;

scopeBlock              : scopeOpen methodDecls '}'         					
                        ;

scopeOpen               : '{'																					
                        ;

/* Structured exception handling directives  */                          
sehBlock                : tryBlock sehClauses
                        ;

sehClauses              : sehClause sehClauses
                        | sehClause
                        ;

tryBlock                : tryHead scopeBlock                					{
																																				context.CurMethodInfo.Body.AddEHClause(".endtry");
																																			}
                        ;

tryHead                 : _TRY                              					{
																																				context.CurMethodInfo.Body.AddEHClause(".try");
																																			}
                        ;


sehClause               : catchClause scopeBlock           						{
																																				context.CurMethodInfo.Body.AddEHClause(".endcatch");
																																			}
                        | filterClause scopeBlock          						{
                        																								context.CurMethodInfo.Body.AddEHClause(".endfilter");
                        																							}
                        | finallyClause scopeBlock         						{
                        																								context.CurMethodInfo.Body.AddEHClause(".endfinally");
                        																							}
                        | faultClause scopeBlock           						{
                        																								context.CurMethodInfo.Body.AddEHClause(".endfault");
                        																							}
                        ;

                                                                                                                                
filterClause            : FILTER_                            					{
																																				context.CurMethodInfo.Body.AddEHClause(".filter");
																																			}
                        ;

catchClause             : CATCH_ typeSpec                   					{
																																				context.CurMethodInfo.Body.AddCatch(new TypeSpecOperand($2.Obj as TypeInfo));
																																			}
                        ;

finallyClause           : FINALLY_                           					{
																																				context.CurMethodInfo.Body.AddEHClause(".finally");
																																			}
                        ;

faultClause             : FAULT_                             					{
																																				context.CurMethodInfo.Body.AddEHClause(".fault");
																																			}
                        ;

/*  Data declaration  */
dataDecl                : ddHead ddBody											 {context.DefineData($1.Str,$2.Str);}
                        ;

ddHead                  : _DATA tls id '='                   {$$=$3;context.DefineDataTLS($$.Str,$2.Str);}
                        | _DATA tls  												 {$$.Str="Noname_"+context.NonameDataIndex;context.NonameDataIndex++;context.DefineDataTLS($$.Str,$2.Str);}
                        ;

tls                     : /* EMPTY */                        {$$.Str="";}
                        | TLS_                               
                        | CIL_                               
                        ;

ddBody                  : '{' ddItemList '}'				{$$.Str=context.PopSequence();}
                        | ddItem										
                        ;

ddItemList              : ddItemList ',' ddItem							{context.AddSequenceItem($2.Str,",");}
                        | ddItem														{context.PushSequence();context.AddSequenceItem($1.Str,",");}
                        ;

ddItemCount             : /* EMPTY */                        				{$$.Str="1";}
                        | '[' int32 ']'                     				{$$=$2;} 
                        ;

ddItem                  : CHAR_ '*' '(' compQstring ')'      				{$$=$4;}
                        | '&' '(' id ')'                     				{$$.Str="&"+$3.Str;}
                        | bytearrayhead bytes ')'            				{$$.Str=Context.BytesToArray($2.Str);context.EndBytes();}
                        | FLOAT32_ '(' float64 ')' ddItemCount			{$$.Str="gcnew System::Single[]{"+Context.BuildRepeatSequence($3.Str,int.Parse($5.Str),",")+"}";}
                        | FLOAT64_ '(' float64 ')' ddItemCount			{$$.Str="gcnew System::Double[]{"+Context.BuildRepeatSequence($3.Str,int.Parse($5.Str),",")+"}";}
                        | INT64_ '(' int64 ')' ddItemCount					{$$.Str="gcnew System::Int64[]{"+Context.BuildRepeatSequence($3.Str,int.Parse($5.Str),",")+"}";}
                        | INT32_ '(' int32 ')' ddItemCount					{$$.Str="gcnew System::Int32[]{"+Context.BuildRepeatSequence($3.Str,int.Parse($5.Str),",")+"}";}
                        | INT16_ '(' int32 ')' ddItemCount					{$$.Str="gcnew System::Int16[]{"+Context.BuildRepeatSequence($3.Str,int.Parse($5.Str),",")+"}";}
                        | INT8_ '(' int32 ')' ddItemCount						{$$.Str="gcnew System::SByte[]{"+Context.BuildRepeatSequence($3.Str,int.Parse($5.Str),",")+"}";}
                        | FLOAT32_ ddItemCount               				{$$.Str="gcnew System::Single["+$2.Str+"]";}
                        | FLOAT64_ ddItemCount               				{$$.Str="gcnew System::Double["+$2.Str+"]";}
                        | INT64_ ddItemCount                 				{$$.Str="gcnew System::Int64["+$2.Str+"]";}
                        | INT32_ ddItemCount                 				{$$.Str="gcnew System::Int32["+$2.Str+"]";}
                        | INT16_ ddItemCount                 				{$$.Str="gcnew System::Int16["+$2.Str+"]";}
                        | INT8_ ddItemCount                  				{$$.Str="gcnew System::SByte["+$2.Str+"]";}
                        ;

/*  Default values declaration for fields, parameters and verbal form of CA blob description  */
fieldSerInit            : FLOAT32_ '(' float64 ')'           {$$.Str="(System::Single)"+$3.Str;}
                        | FLOAT64_ '(' float64 ')'           {$$.Str="(System::Double)"+$3.Str;}
                        | FLOAT32_ '(' int32 ')'             {$$.Str="(System::Single)"+$3.Str;}
                        | FLOAT64_ '(' int64 ')'             {$$.Str="(System::Double)"+$3.Str;}
                        | INT64_ '(' int64 ')'               {$$.Str="(System::Int64)"+$3.Str;}
                        | INT32_ '(' int32 ')'               {$$.Str="(System::Int32)"+$3.Str;}
                        | INT16_ '(' int32 ')'               {$$.Str="(System::Int16)"+$3.Str;}
                        | INT8_ '(' int32 ')'                {$$.Str="(System::SByte)"+$3.Str;}
                        | UNSIGNED_ INT64_ '(' int64 ')'     {$$.Str="(System::UInt64)"+$4.Str;}
                        | UNSIGNED_ INT32_ '(' int32 ')'     {$$.Str="(System::UInt32)"+$4.Str;}
                        | UNSIGNED_ INT16_ '(' int32 ')'     {$$.Str="(System::UInt16)"+$4.Str;}
                        | UNSIGNED_ INT8_ '(' int32 ')'      {$$.Str="(System::Byte)"+$4.Str;}
                        | UINT64_ '(' int64 ')'              {$$.Str="(System::UInt64)"+$3.Str;}
                        | UINT32_ '(' int32 ')'              {$$.Str="(System::UInt32)"+$3.Str;}
                        | UINT16_ '(' int32 ')'              {$$.Str="(System::UInt16)"+$3.Str;}
                        | UINT8_ '(' int32 ')'               {$$.Str="(System::Byte)"+$3.Str;}
                        | CHAR_ '(' int32 ')'                {$$.Str="(System::Char)"+$3.Str;}
                        | BOOL_ '(' truefalse ')'            {$$.Str="(System::Boolean)"+$3.Str;}
                        | bytearrayhead bytes ')'            {$$.Str=Context.BytesToArray($2.Str);context.EndBytes();}
                        ;
                        
bytearrayhead           : BYTEARRAY_ '('                     {context.StartBytes();}
                        ;

bytes                   : /* EMPTY */                        {$$.Str="";}
                        | hexbytes                           {$$.Str=context.PopSequence();}
                        ;

hexbytes                : HEXBYTE                            {context.PushSequence();context.AddSequenceItem($1.Str,",");}
                        | hexbytes HEXBYTE                   {context.AddSequenceItem($2.Str,",");}
                        ;

/*  Field/parameter initialization  */
fieldInit               : fieldSerInit                       
                        | compQstring                        
                        | NULLREF_   												 {$$.Str="nullptr";}               
                        ;
                        
/*  Values for verbal form of CA blob description  */
serInit                 : fieldSerInit                       
                        | STRING_ '(' NULLREF_ ')'           
                        | STRING_ '(' SQSTRING ')'           
                        | TYPE_ '(' CLASS_ SQSTRING ')'      
                        | TYPE_ '(' className ')'            
                        | TYPE_ '(' NULLREF_ ')'             
                        | OBJECT_ '(' serInit ')'            
                        | FLOAT32_ '[' int32 ']' '(' f32seq ')'
                        | FLOAT64_ '[' int32 ']' '(' f64seq ')'
                        | INT64_ '[' int32 ']' '(' i64seq ')'
                        | INT32_ '[' int32 ']' '(' i32seq ')'
                        | INT16_ '[' int32 ']' '(' i16seq ')'
                        | INT8_ '[' int32 ']' '(' i8seq ')'
                        | UINT64_ '[' int32 ']' '(' i64seq ')'
                        | UINT32_ '[' int32 ']' '(' i32seq ')'
                        | UINT16_ '[' int32 ']' '(' i16seq ')'
                        | UINT8_ '[' int32 ']' '(' i8seq ')'
                        | UNSIGNED_ INT64_ '[' int32 ']' '(' i64seq ')'
                        | UNSIGNED_ INT32_ '[' int32 ']' '(' i32seq ')'
                        | UNSIGNED_ INT16_ '[' int32 ']' '(' i16seq ')'
                        | UNSIGNED_ INT8_ '[' int32 ']' '(' i8seq ')'
                        | CHAR_ '[' int32 ']' '(' i16seq ')'
                        | BOOL_ '[' int32 ']' '(' boolSeq ')'
                        | STRING_ '[' int32 ']' '(' sqstringSeq ')'
                        | TYPE_ '[' int32 ']' '(' classSeq ')'
                        | OBJECT_ '[' int32 ']' '(' objSeq ')'
                        ;


f32seq                  : /* EMPTY */                        
                        | f32seq float64                     
                        | f32seq int32                       
                        ;
                                                               
f64seq                  : /* EMPTY */                        
                        | f64seq float64                     
                        | f64seq int64                       
                        ;
                        
i64seq                  : /* EMPTY */                        
                        | i64seq int64                       
                        ;
                        
i32seq                  : /* EMPTY */                        
                        | i32seq int32                       
                        ;
                        
i16seq                  : /* EMPTY */                        
                        | i16seq int32                       
                        ;
                        
i8seq                   : /* EMPTY */                        
                        | i8seq int32                        
                        ;
                        
boolSeq                 : /* EMPTY */                        
                        | boolSeq truefalse                  
                        ;
                        
sqstringSeq             : /* EMPTY */                        
                        | sqstringSeq NULLREF_               
                        | sqstringSeq SQSTRING               
                        ;
                        
classSeq                : /* EMPTY */                        
                        | classSeq NULLREF_                  
                        | classSeq CLASS_ SQSTRING           
                        | classSeq className                 
                        ;
                        
objSeq                  : /* EMPTY */                        
                        | objSeq serInit                     
                        ;                        
                        
/*  IL instructions and associated definitions  */
methodSpec              : METHOD_                            
                        ;
                        
instr_none              : INSTR_NONE                         
                        ;

instr_var               : INSTR_VAR                          
                        ;

instr_i                 : INSTR_I                            
                        ;

instr_i8                : INSTR_I8                           
                        ;

instr_r                 : INSTR_R                            
                        ;

instr_brtarget          : INSTR_BRTARGET                     
                        ;

instr_method            : INSTR_METHOD                       
                        ;

instr_field             : INSTR_FIELD                        
                        ;

instr_type              : INSTR_TYPE                         
                        ;

instr_string            : INSTR_STRING                       
                        ;

instr_sig               : INSTR_SIG                          
                        ;

instr_tok               : INSTR_TOK                          
                        ;

instr_switch            : INSTR_SWITCH                       
                        ;

instr_r_head            : instr_r '('               				 {$$=$1;context.StartBytes();}      
                        ;


instr                   : instr_none                         {
																															 MethodBody.TempIl.Opcode=$1.Str;
																														 }    
                        | instr_var int32                    {
																															 MethodBody.TempIl.Opcode=$1.Str;
																															 MethodBody.TempIl.Value=$2.Str;
																														 }
                        | instr_var id                       {
																															 MethodBody.TempIl.Opcode=$1.Str;
																															 MethodBody.TempIl.Value=$2.Str;
																														 }
                        | instr_i int32                      {
																															 MethodBody.TempIl.Opcode=$1.Str;
																															 MethodBody.TempIl.Value=$2.Str;
																														 }
                        | instr_i8 int64                     {
																															 MethodBody.TempIl.Opcode=$1.Str;
																															 MethodBody.TempIl.Value=$2.Str;
																														 }
                        | instr_r float64                    {
																															 MethodBody.TempIl.Opcode=$1.Str;
																															 MethodBody.TempIl.Value=$2.Str;
																														 }
                        | instr_r int64                      {
																															 MethodBody.TempIl.Opcode=$1.Str;
																															 MethodBody.TempIl.Value=$2.Str;
																														 }
                        | instr_r_head bytes ')'             {
																															 MethodBody.TempIl.Opcode=$1.Str;
																															 MethodBody.TempIl.Value=Context.BytesToArray($2.Str);
																															 context.EndBytes();
																														 }
                        | instr_brtarget int32               {
																															 MethodBody.TempIl.Opcode=$1.Str;
																															 MethodBody.TempIl.Value=$2.Str;
																														 }
                        | instr_brtarget id                  {
																															 MethodBody.TempIl.Opcode=$1.Str;
																															 MethodBody.TempIl.Value=$2.Str;
																														 }
                        | instr_method methodRef                                        {
                        																																	MethodBody.TempIl.Opcode=$1.Str;
																															 														MethodBody.TempIl.Operand=$2.Obj as MethodOperand;
																															 													}
                        | instr_field fieldRef											                   {
                        																																	MethodBody.TempIl.Opcode=$1.Str;
																															 														MethodBody.TempIl.Operand=$2.Obj as FieldOperand;
																															 													}  
                        | instr_type typeSpec                {
																															 MethodBody.TempIl.Opcode=$1.Str;
																															 MethodBody.TempIl.Operand=new TypeSpecOperand($2.Obj as TypeInfo);
																														 }
                        | instr_string compQstring           {
																															 MethodBody.TempIl.Opcode=$1.Str;
																															 MethodBody.TempIl.Value=$2.Str;
																														 }
                        | instr_string ANSI_ '(' compQstring ')'                        {
																																													MethodBody.TempIl.Opcode=$1.Str;
																																													MethodBody.TempIl.Value=$4.Str;
																																												}                                     
                        | instr_string bytearrayhead bytes ')'                          {
																																													MethodBody.TempIl.Opcode=$1.Str;
																																													MethodBody.TempIl.Value=Context.BytesToString($3.Str);
																																													context.EndBytes();
																																												}              
                        | instr_sig callConv type '(' sigArgs0 ')'                      {
																																													MethodBody.TempIl.Opcode=$1.Str;
																																													SigOperand op=new SigOperand();
																																													Context.ListAddList(op.CallConvs,$2.Obj);
																																													op.RetType=$3.Obj as TypeInfo;
																																													op.Args.AddRange(($5.Obj as Params).Args);
																																													MethodBody.TempIl.Operand=op;																																													
																																												}              
                        | instr_tok ownerType /* ownerType ::= memberRef | typeSpec */  {
																																													MethodBody.TempIl.Opcode=$1.Str;
																																													if($2.Obj is FieldOperand)
																																														MethodBody.TempIl.Operand=$2.Obj as FieldOperand;
																																													else if($2.Obj is MethodOperand)
																																														MethodBody.TempIl.Operand=$2.Obj as MethodOperand;
																																													else
																																														MethodBody.TempIl.Operand=$2.Obj as TypeSpecOperand;
																																												}
                        | instr_switch '(' labels ')'        														{
                        																																	MethodBody.TempIl.Opcode=$1.Str;
                        																																	SwitchOperand.Set(MethodBody.TempIl);
                        																																}    
                        ;
                        
labels                  : /* empty */                        
                        | labels ',' id                       {SwitchOperand.Temp.Labels.Add($3.Str);}
                        | labels ',' int32                   {SwitchOperand.Temp.Labels.Add($3.Str);}
                        | id                                 {SwitchOperand.Temp.Labels.Add($1.Str);} 
                        | int32                              {SwitchOperand.Temp.Labels.Add($1.Str);} 
                        ;

/*  Signatures  */
tyArgs0                 : /* EMPTY */                        {$$.Obj=new List<TypeInfo>();}
                        | tyArgsNotEmpty                     
                        ;
                        
tyArgsNotEmpty					: '<' tyArgs1 '>'										 {$$=$2;}
												;                        

tyArgs1                 : /* EMPTY */                        {$$.Obj=new List<TypeInfo>();}
                        | type                               {List<TypeInfo> tis=new List<TypeInfo>();tis.Add($1.Obj as TypeInfo);$$.Obj=tis;}
                        | tyArgs2                            
                        ;

tyArgs2                 : tyArgs1 ',' type                   {List<TypeInfo> tis=$1.Obj as List<TypeInfo>;tis.Add($3.Obj as TypeInfo);$$.Obj=tis;}
                        | tyArgs1 ','                        {List<TypeInfo> tis=$1.Obj as List<TypeInfo>;tis.Add(null);$$.Obj=tis;}
                        ;

sigArgs0                : /* EMPTY */                         {$$.Str="";$$.Obj=new Params();}
                        | sigArgs1                            {$$.Str=Params.CalcClause(($1.Obj as Params).Args);$$.Obj=$1.Obj;}
                        ;

sigArgs1                : sigArg                              {Params ps=new Params();ps.Add($1.Obj as Param);$$.Obj=ps;}
                        | sigArgs1 ',' sigArg                 {Params ps=$1.Obj as Params;ps.Add($3.Obj as Param);$$.Obj=$1.Obj;}
                        ;

sigArg                  : ELIPSIS                             
                        | paramAttr type marshalClause        {Param p=new Param();Context.ListAddList(p.Attrs,$1.Obj);p.Type=$2.Obj as TypeInfo;p.MarshalAs=$3.Obj as NativeTypeInfo;$$.Obj=p;}
                        | paramAttr type marshalClause id     {Param p=new Param();Context.ListAddList(p.Attrs,$1.Obj);p.Type=$2.Obj as TypeInfo;p.MarshalAs=$3.Obj as NativeTypeInfo;p.Id=$4.Str;$$.Obj=p;}
                        ;

/*  Class referencing  */
className               : '[' dottedName ']' slashedName      			{$$=$4;}
                        | '[' '*' ']' slashedName             			{$$=$4;}
                        | '[' _MODULE dottedName ']' slashedName   	{$$=$5;}
                        | slashedName                         			
                        | _THIS                              
                        | _BASE                               
                        | _NESTER                             
                        ;

slashedName             : dottedName                          			
                        | slashedName '/' dottedName          			{$$.Str=$1.Str+"::"+$3.Str;}
                        ;

typeSpec                : className											{$$.Obj=BasicTypeInfo.Create($1.Str);$$.Str=""+$$.Obj;}                           
                        | '[' dottedName ']'            {$$.Obj=BasicTypeInfo.Create($2.Str);$$.Str=""+$$.Obj;}                           
                        | '[' _MODULE dottedName ']'    {$$.Obj=BasicTypeInfo.Create($3.Str);$$.Str=""+$$.Obj;}                                 
                        | type                          {$$=$1;}                                 
                        ;

/*  Native types for marshaling signatures  */                         
nativeType              : /* EMPTY */                   						{$$.Obj=NativeTypeInfo.Null;}     
                        | CUSTOM_ '(' compQstring ',' compQstring ',' compQstring ',' compQstring ')'   
                        																						{$$.Obj=NativeTypeInfo.CreateCustom($3.Str+","+$5.Str,$7.Str+"="+$9.Str);}                                                           
                        | CUSTOM_ '(' compQstring ',' compQstring ')'                                                              
                        																						{$$.Obj=NativeTypeInfo.CreateCustom($3.Str+","+$5.Str);} 
                        | FIXED_ SYSSTRING_ '[' int32 ']'     			{$$.Obj=NativeTypeInfo.CreateString("UnmanagedType::ByValTStr",$4.Str);}
                        | FIXED_ ARRAY_ '[' int32 ']' nativeType    {$$.Obj=ArrayNativeTypeInfo.CreateArray($6.Obj as NativeTypeInfo,"UnmanagedType::LPArray",$4.Str);}
                        | VARIANT_                            			{$$.Obj=NativeTypeInfo.CreateSimple("UnmanagedType::AsAny");}
                        | CURRENCY_                           			{$$.Obj=NativeTypeInfo.CreateSimple("UnmanagedType::Currency");}
                        | SYSCHAR_                            			{$$.Obj=NativeTypeInfo.CreateSimple("UnmanagedType::TBStr");}
                        | VOID_                               			{$$.Obj=NativeTypeInfo.CreateSimple("UnmanagedType::Void");}
                        | BOOL_                               			{$$.Obj=NativeTypeInfo.CreateSimple("UnmanagedType::Bool");}
                        | INT8_                               			{$$.Obj=NativeTypeInfo.CreateSimple("UnmanagedType::I1");}
                        | INT16_                              			{$$.Obj=NativeTypeInfo.CreateSimple("UnmanagedType::I2");}
                        | INT32_                              			{$$.Obj=NativeTypeInfo.CreateSimple("UnmanagedType::I4");}
                        | INT64_                              			{$$.Obj=NativeTypeInfo.CreateSimple("UnmanagedType::I8");}
                        | FLOAT32_                            			{$$.Obj=NativeTypeInfo.CreateSimple("UnmanagedType::R4");}
                        | FLOAT64_                            			{$$.Obj=NativeTypeInfo.CreateSimple("UnmanagedType::R8");}
                        | ERROR_                              			{$$.Obj=NativeTypeInfo.CreateSimple("UnmanagedType::Error");}
                        | UNSIGNED_ INT8_                     			{$$.Obj=NativeTypeInfo.CreateSimple("UnmanagedType::U1");}
                        | UNSIGNED_ INT16_                    			{$$.Obj=NativeTypeInfo.CreateSimple("UnmanagedType::U2");}
                        | UNSIGNED_ INT32_                    			{$$.Obj=NativeTypeInfo.CreateSimple("UnmanagedType::U4");}
                        | UNSIGNED_ INT64_                    			{$$.Obj=NativeTypeInfo.CreateSimple("UnmanagedType::U8");}
                        | UINT8_                              			{$$.Obj=NativeTypeInfo.CreateSimple("UnmanagedType::U1");}
                        | UINT16_                             			{$$.Obj=NativeTypeInfo.CreateSimple("UnmanagedType::U2");}
                        | UINT32_                             			{$$.Obj=NativeTypeInfo.CreateSimple("UnmanagedType::U4");}
                        | UINT64_                             			{$$.Obj=NativeTypeInfo.CreateSimple("UnmanagedType::U8");}
                        | nativeType '*'                      			{$$.Obj=ArrayNativeTypeInfo.CreateArray($1.Obj as NativeTypeInfo,"UnmanagedType::LPArray","");}
                        | nativeType '[' ']'                  			{$$.Obj=ArrayNativeTypeInfo.CreateArray($1.Obj as NativeTypeInfo,"UnmanagedType::LPArray","");}
                        | nativeType '[' int32 ']'            			{$$.Obj=ArrayNativeTypeInfo.CreateArray($1.Obj as NativeTypeInfo,"UnmanagedType::LPArray",$3.Str);}
                        | nativeType '[' int32 '+' int32 ']'  			{$$.Obj=ArrayNativeTypeInfo.CreateArray($1.Obj as NativeTypeInfo,"UnmanagedType::LPArray",$3.Str,$5.Str);}
                        | nativeType '[' '+' int32 ']'        			{$$.Obj=ArrayNativeTypeInfo.CreateArray($1.Obj as NativeTypeInfo,"UnmanagedType::LPArray","",$4.Str);}
                        | DECIMAL_                            			{$$.Obj=NativeTypeInfo.CreateSimple("UnmanagedType::R4");}
                        | DATE_                               			{$$.Obj=NativeTypeInfo.CreateSimple("UnmanagedType::U8");}
                        | BSTR_                               			{$$.Obj=NativeTypeInfo.CreateSimple("UnmanagedType::BStr");}
                        | LPSTR_                              			{$$.Obj=NativeTypeInfo.CreateSimple("UnmanagedType::LPStr");}
                        | LPWSTR_                             			{$$.Obj=NativeTypeInfo.CreateSimple("UnmanagedType::LPWStr");}
                        | LPTSTR_                             			{$$.Obj=NativeTypeInfo.CreateSimple("UnmanagedType::LPTStr");}
                        | OBJECTREF_                          			{$$.Obj=NativeTypeInfo.CreateSimple("UnmanagedType::AsAny");}
                        | IUNKNOWN_  iidParamIndex            			{$$.Obj=NativeTypeInfo.CreateCOM("UnmanagedType::IUnknown",$2.Str);}
                        | IDISPATCH_ iidParamIndex            			{$$.Obj=NativeTypeInfo.CreateCOM("UnmanagedType::IDispatch",$2.Str);}
                        | STRUCT_                             			{$$.Obj=NativeTypeInfo.CreateSimple("UnmanagedType::LPStruct");}
                        | INTERFACE_ iidParamIndex            			{$$.Obj=NativeTypeInfo.CreateCOM("UnmanagedType::Interface",$2.Str);}
                        | SAFEARRAY_ variantType              			{$$.Obj=SafeArrayNativeTypeInfo.CreateSafeArray($2.Obj as VariantTypeInfo);}
                        | SAFEARRAY_ variantType ',' compQstring 		{$$.Obj=SafeArrayNativeTypeInfo.CreateSafeArray($2.Obj as VariantTypeInfo,$4.Str);}
                        | INT_                                			{$$.Obj=NativeTypeInfo.CreateSimple("UnmanagedType::SysInt");}
                        | UNSIGNED_ INT_                      			{$$.Obj=NativeTypeInfo.CreateSimple("UnmanagedType::SysUInt");}
                        | UINT_                               			{$$.Obj=NativeTypeInfo.CreateSimple("UnmanagedType::SysUInt");}
                        | NESTED_ STRUCT_                     			{$$.Obj=NativeTypeInfo.CreateSimple("UnmanagedType::LPStruct");}
                        | BYVALSTR_                           			{$$.Obj=NativeTypeInfo.CreateSimple("UnmanagedType::ByValTStr");}
                        | ANSI_ BSTR_                         			{$$.Obj=NativeTypeInfo.CreateSimple("UnmanagedType::AnsiBStr");}
                        | TBSTR_                              			{$$.Obj=NativeTypeInfo.CreateSimple("UnmanagedType::TBStr");}
                        | VARIANT_ BOOL_                      			{$$.Obj=NativeTypeInfo.CreateSimple("UnmanagedType::VariantBool");}
                        | METHOD_                             			{$$.Obj=NativeTypeInfo.CreateSimple("UnmanagedType::FunctionPtr");}
                        | AS_ ANY_                            			{$$.Obj=NativeTypeInfo.CreateSimple("UnmanagedType::AsAny");}
                        | LPSTRUCT_                           			{$$.Obj=NativeTypeInfo.CreateSimple("UnmanagedType::LPStruct");}
                        ;
                        
iidParamIndex           : /* EMPTY */                         			{$$.Str="";}
                        | '(' IIDPARAM_ '=' int32 ')'         			{$$=$4;}
                        ;                        

variantType             : /* EMPTY */                         			{$$.Obj=new VariantTypeInfo();}
                        | NULL_                               			{$$.Obj=new VariantTypeInfo("VarEnum::VT_NULL");}
                        | VARIANT_                            			{$$.Obj=new VariantTypeInfo("VarEnum::VT_VARIANT");}
                        | CURRENCY_                           			{$$.Obj=new VariantTypeInfo("VarEnum::VT_CURRENCY");}
                        | VOID_                               			{$$.Obj=new VariantTypeInfo("VarEnum::VT_VOID");}
                        | BOOL_                               			{$$.Obj=new VariantTypeInfo("VarEnum::VT_BOOL");}
                        | INT8_                               			{$$.Obj=new VariantTypeInfo("VarEnum::VT_I1");}
                        | INT16_                              			{$$.Obj=new VariantTypeInfo("VarEnum::VT_I2");}
                        | INT32_                              			{$$.Obj=new VariantTypeInfo("VarEnum::VT_I4");}
                        | INT64_                              			{$$.Obj=new VariantTypeInfo("VarEnum::VT_I8");}
                        | FLOAT32_                            			{$$.Obj=new VariantTypeInfo("VarEnum::VT_R4");}
                        | FLOAT64_                            			{$$.Obj=new VariantTypeInfo("VarEnum::VT_R8");}
                        | UNSIGNED_ INT8_                     			{$$.Obj=new VariantTypeInfo("VarEnum::VT_UI1");}
                        | UNSIGNED_ INT16_                    			{$$.Obj=new VariantTypeInfo("VarEnum::VT_UI2");}
                        | UNSIGNED_ INT32_                    			{$$.Obj=new VariantTypeInfo("VarEnum::VT_UI4");}
                        | UNSIGNED_ INT64_                    			{$$.Obj=new VariantTypeInfo("VarEnum::VT_UI8");}
                        | UINT8_                              			{$$.Obj=new VariantTypeInfo("VarEnum::VT_UI1");}
                        | UINT16_                             			{$$.Obj=new VariantTypeInfo("VarEnum::VT_UI2");}
                        | UINT32_                             			{$$.Obj=new VariantTypeInfo("VarEnum::VT_UI4");}
                        | UINT64_                             			{$$.Obj=new VariantTypeInfo("VarEnum::VT_UI8");}
                        | '*'                                 			{$$.Obj=new VariantTypeInfo("VarEnum::VT_PTR");}
                        | variantType '[' ']'                 			{$$.Obj=new VariantTypeInfo("VarEnum::VT_ARRAY");}
                        | variantType VECTOR_                 			{$$.Obj=new VariantTypeInfo("VarEnum::VT_VECTOR");}
                        | variantType '&'                     			{$$.Obj=new VariantTypeInfo("VarEnum::VT_BYREF");}
                        | DECIMAL_                            			{$$.Obj=new VariantTypeInfo("VarEnum::VT_DECIMAL");}
                        | DATE_                               			{$$.Obj=new VariantTypeInfo("VarEnum::VT_DATE");}
                        | BSTR_                               			{$$.Obj=new VariantTypeInfo("VarEnum::VT_BSTR");}
                        | LPSTR_                              			{$$.Obj=new VariantTypeInfo("VarEnum::VT_LPSTR");}
                        | LPWSTR_                             			{$$.Obj=new VariantTypeInfo("VarEnum::VT_LPWSTR");}
                        | IUNKNOWN_                           			{$$.Obj=new VariantTypeInfo("VarEnum::VT_UNKNOWN");}
                        | IDISPATCH_                          			{$$.Obj=new VariantTypeInfo("VarEnum::VT_DISPATCH");}
                        | SAFEARRAY_                          			{$$.Obj=new VariantTypeInfo("VarEnum::VT_SAFEARRAY");}
                        | INT_                                			{$$.Obj=new VariantTypeInfo("VarEnum::VT_INT");}
                        | UNSIGNED_ INT_                      			{$$.Obj=new VariantTypeInfo("VarEnum::VT_UINT");}
                        | UINT_                               			{$$.Obj=new VariantTypeInfo("VarEnum::VT_UINT");}
                        | ERROR_                              			{$$.Obj=new VariantTypeInfo("VarEnum::VT_ERROR");}
                        | HRESULT_                            			{$$.Obj=new VariantTypeInfo("VarEnum::VT_HRESULT");}
                        | CARRAY_                             			{$$.Obj=new VariantTypeInfo("VarEnum::VT_CARRAY");}
                        | USERDEFINED_                        			{$$.Obj=new VariantTypeInfo("VarEnum::VT_USERDEFINED");}
                        | RECORD_                             			{$$.Obj=new VariantTypeInfo("VarEnum::VT_RECORD");}
                        | FILETIME_                           			{$$.Obj=new VariantTypeInfo("VarEnum::VT_FILETIME");}
                        | BLOB_                               			{$$.Obj=new VariantTypeInfo("VarEnum::VT_BLOB");}
                        | STREAM_                             			{$$.Obj=new VariantTypeInfo("VarEnum::VT_STREAM");}
                        | STORAGE_                            			{$$.Obj=new VariantTypeInfo("VarEnum::VT_STORAGE");}
                        | STREAMED_OBJECT_                    			{$$.Obj=new VariantTypeInfo("VarEnum::VT_STREAMED_OBJECT");}
                        | STORED_OBJECT_                      			{$$.Obj=new VariantTypeInfo("VarEnum::VT_STORED_OBJECT");}
                        | BLOB_OBJECT_                        			{$$.Obj=new VariantTypeInfo("VarEnum::VT_BLOB_OBJECT");}
                        | CF_                                 			{$$.Obj=new VariantTypeInfo("VarEnum::VT_CF");}
                        | CLSID_                              			{$$.Obj=new VariantTypeInfo("VarEnum::VT_CLSID");}
                        ;

/*  Managed types for signatures  */     
type										: _type																{$$.Str=""+$$.Obj;}
												;
                   
_type                    : CLASS_ className                   {$$.Obj=BasicTypeInfo.Create($2.Str);}
                        | OBJECT_                             {$$.Obj=BasicTypeInfo.ObjectInfo;}
                        | VALUE_ CLASS_ className             {$$.Obj=BasicTypeInfo.Create($3.Str);}
                        | VALUETYPE_ className                {$$.Obj=BasicTypeInfo.Create($2.Str);}
                        | type '[' ']'                        {$$.Obj=ArrayTypeInfo.Create($1.Obj as TypeInfo,1);}
                        | type '[' bounds1 ']'                {$$.Obj=ArrayTypeInfo.Create($1.Obj as TypeInfo,(int)$3.Obj);}
                        | type '&'                            {$$.Obj=ReferenceTypeInfo.Create($1.Obj as TypeInfo);}
                        | type '*'                            {$$.Obj=PointerTypeInfo.Create($1.Obj as TypeInfo);}
                        | type PINNED_                        {$$=$1;}
                        | type MODREQ_ '(' typeSpec ')'       {$$=$1;}
                        | type MODOPT_ '(' typeSpec ')'       {$$=$1;}
                        | methodSpec callConv type '*' '(' sigArgs0 ')'		{$$=$3;}
                        | type tyArgsNotEmpty	                {$$=$1;}
                        | '!' '!' int32                       {$$=$3;}
                        | '!' int32                          	{$$=$2;}
                        | '!' '!' dottedName                 	{$$=$3;}
                        | '!' dottedName                      {$$=$2;}
                        | TYPEDREF_                           {$$.Obj=BasicTypeInfo.TypedrefInfo;}
                        | VOID_                               {$$.Obj=BasicTypeInfo.VoidInfo;}
                        | NATIVE_ INT_                        {$$.Obj=BasicTypeInfo.IntPtrInfo;}
                        | NATIVE_ UNSIGNED_ INT_              {$$.Obj=BasicTypeInfo.UIntPtrInfo;}
                        | NATIVE_ UINT_                       {$$.Obj=BasicTypeInfo.UIntPtrInfo;}
                        | NATIVE_ FLOAT_                      {$$.Obj=BasicTypeInfo.SingleInfo;}
                        | simpleType                          {$$=$1;}
                        ;
                        
simpleType              : CHAR_                               {$$.Obj=BasicTypeInfo.CharInfo;}
                        | STRING_                             {$$.Obj=BasicTypeInfo.StringInfo;}
                        | BOOL_                               {$$.Obj=BasicTypeInfo.BooleanInfo;}
                        | INT8_                               {$$.Obj=BasicTypeInfo.SByteInfo;}
                        | INT16_                              {$$.Obj=BasicTypeInfo.Int16Info;}
                        | INT32_                              {$$.Obj=BasicTypeInfo.Int32Info;}
                        | INT64_                              {$$.Obj=BasicTypeInfo.Int64Info;}
                        | FLOAT32_                            {$$.Obj=BasicTypeInfo.SingleInfo;}
                        | FLOAT64_                            {$$.Obj=BasicTypeInfo.DoubleInfo;}
                        | UNSIGNED_ INT8_                     {$$.Obj=BasicTypeInfo.ByteInfo;}
                        | UNSIGNED_ INT16_                    {$$.Obj=BasicTypeInfo.UInt16Info;}                        
                        | UNSIGNED_ INT32_                    {$$.Obj=BasicTypeInfo.UInt32Info;}                        
                        | UNSIGNED_ INT64_                    {$$.Obj=BasicTypeInfo.UInt64Info;}                        
                        | UINT8_                              {$$.Obj=BasicTypeInfo.ByteInfo;}                        
                        | UINT16_                             {$$.Obj=BasicTypeInfo.UInt16Info;}
                        | UINT32_                             {$$.Obj=BasicTypeInfo.UInt32Info;}
                        | UINT64_                             {$$.Obj=BasicTypeInfo.UInt64Info;}
                        ;
                        
bounds1                 : bound                               {$$.Obj=1;}
                        | bounds1 ',' bound                   {$$.Obj=(int)$1.Obj+1;}
                        ;

bound                   : /* EMPTY */                         
                        | ELIPSIS                             
                        | int32                               
                        | int32 ELIPSIS int32                 
                        | int32 ELIPSIS                       
                        ;

truefalse               : TRUE_                               
                        | FALSE_                              
                        ;                        

/*  Security declarations  */                        
secDecl                 : _PERMISSIONSET secAction compQstring   
																															{
																																PermissionSetAttribute psa=new PermissionSetAttribute();
																																psa.SecurityAction=$2.Str;
																																psa.AttrValue=$3.Str;
																																$$.Obj=psa;
																															}
											  | _PERMISSION secAction typeSpec '(' nameValPairs ')'			
											  																			{$$.Obj=null;}
											  | _PERMISSION secAction typeSpec      			
											  																			{$$.Obj=null;}
                        | psetHead bytes ')'			
											  																			{
											  																				$$.Obj=null;
                        																				context.EndBytes();
                        																			}
                        | _PERMISSION secAction typeSpec '=' '{' customBlobDescr '}'
                        																			{$$.Obj=null;}
                        | _PERMISSIONSET secAction '=' '{' secAttrSetBlob '}'
                        																			{$$.Obj=null;}
                        ;
                        
secAttrSetBlob          : /* EMPTY */                         
                        | secAttrBlob                         
                        | secAttrBlob ',' secAttrSetBlob      
                        ;
                        
secAttrBlob             : typeSpec '=' '{' customBlobNVPairs '}'                                           
                        | CLASS_ SQSTRING '=' '{' customBlobNVPairs '}'
                        ;                                                                    

psetHead                : _PERMISSIONSET secAction '=' '('    
																															{ context.StartBytes(); }
                        | _PERMISSIONSET secAction BYTEARRAY_ '(' 
                                                              { context.StartBytes(); }
                        ;
                        
nameValPairs            : nameValPair                         
                        | nameValPair ',' nameValPairs        
                        ;

nameValPair             : compQstring '=' caValue             
                        ;

caValue                 : truefalse                           
                        | int32                               
                        | INT32_ '(' int32 ')'                
                        | compQstring                         
                        | className '(' INT8_ ':' int32 ')'   
                        | className '(' INT16_ ':' int32 ')'  
                        | className '(' INT32_ ':' int32 ')'  
                        | className '(' int32 ')'             
                        ;
                        

secAction               : REQUEST_                            
                        | DEMAND_                             {$$.Str="SecurityAction::Demand";}
                        | ASSERT_                             {$$.Str="SecurityAction::Assert";}
                        | DENY_                               {$$.Str="SecurityAction::Deny";}
                        | PERMITONLY_                         {$$.Str="SecurityAction::PermitOnly";}
                        | LINKCHECK_                          {$$.Str="SecurityAction::LinkDemand";}
                        | INHERITCHECK_                       {$$.Str="SecurityAction::InheritanceDemand";}
                        | REQMIN_                             {$$.Str="SecurityAction::RequestMinimum";}
                        | REQOPT_                             {$$.Str="SecurityAction::RequestOptional";}
                        | REQREFUSE_                          {$$.Str="SecurityAction::RequestRefuse";}
                        | PREJITGRANT_                        
                        | PREJITDENY_                         
                        | NONCASDEMAND_                       
                        | NONCASLINKDEMAND_                   
                        | NONCASINHERITANCE_                  
                        ;

/*  External source declarations  */                        
esHead                  : _LINE                               
                        | P_LINE                              
                        ;
                        
extSourceSpec           : esHead int32 SQSTRING               
                        | esHead int32                        
                        | esHead int32 ':' int32 SQSTRING     
                        | esHead int32 ':' int32              
                        | esHead int32 ':' int32 ',' int32 SQSTRING                                                                   
                        | esHead int32 ':' int32 ',' int32                                                                   
                        | esHead int32 ',' int32 ':' int32 SQSTRING                                                                   
                        | esHead int32 ',' int32 ':' int32                                                                   
                        | esHead int32 ',' int32 ':' int32 ',' int32 SQSTRING                                                                  
                        | esHead int32 ',' int32 ':' int32 ',' int32                                                                   
                        | esHead int32 QSTRING                
                        ;

/*  Manifest declarations  */                         
fileDecl                : _FILE fileAttr dottedName fileEntry hashHead bytes ')' fileEntry 			{context.EndBytes();}
                        | _FILE fileAttr dottedName fileEntry 
                        ;

fileAttr                : /* EMPTY */                         
                        | fileAttr NOMETADATA_                
                        ;

fileEntry               : /* EMPTY */                         
                        | _ENTRYPOINT                         
                        ;

hashHead                : _HASH '=' '('   									{context.StartBytes();}                    
                        ;

assemblyHead            : _ASSEMBLY asmAttr dottedName        
                        ;

asmAttr                 : /* EMPTY */                         
                        | asmAttr RETARGETABLE_               
                        | asmAttr LEGACY_ LIBRARY_            
                        | asmAttr CIL_                        
                        | asmAttr X86_                        
                        | asmAttr IA64_                       
                        | asmAttr AMD64_                      
                        ;

assemblyDecls           : /* EMPTY */
                        | assemblyDecls assemblyDecl
                        ;

assemblyDecl            : _HASH ALGORITHM_ int32              
                        | secDecl        
                        | _VER intOrWildcard ':' intOrWildcard ':' intOrWildcard ':' intOrWildcard
                        | publicKeyHead bytes ')'			{context.EndBytes();}
                        | _LOCALE compQstring                 
                        | localeHead bytes ')'        {context.EndBytes();}    
                        | customAttrDecl
                        ;
                        
intOrWildcard           : int32                               
                        | '*'                                 
                        ;                      

publicKeyHead           : _PUBLICKEY '=' '('          {context.StartBytes();}     
                        ;

publicKeyTokenHead      : _PUBLICKEYTOKEN '=' '('     {context.StartBytes();}    
                        ;

localeHead              : _LOCALE '=' '('             {context.StartBytes();}
                        ;

assemblyRefHead         : _ASSEMBLY EXTERN_ asmAttr dottedName                             {AssemblyRef.Temp.Name=$4.Str;}                                      
                        | _ASSEMBLY EXTERN_ asmAttr dottedName AS_ dottedName              {AssemblyRef.Temp.Name=$6.Str;}                                                   
                        ;

assemblyRefDecls        : /* EMPTY */
                        | assemblyRefDecls assemblyRefDecl
                        ;

assemblyRefDecl         : _VER intOrWildcard ':' intOrWildcard ':' intOrWildcard ':' intOrWildcard    {
                        																																								AssemblyRef.Temp.Ver=$2.Str+"."+$4.Str+"."+$6.Str+"."+$8.Str;
                        																																							}
                        | publicKeyTokenHead bytes ')'        		{
                        																						AssemblyRef.Temp.PublicKeyToken=$2.Str;
                        																						context.EndBytes();
                        																					}
                        | publicKeyHead bytes ')'									{context.EndBytes();}
                        | _LOCALE compQstring                 
                        | localeHead bytes ')'                		{context.EndBytes();}
                        | customAttrDecl
                        | hashHead bytes ')'       								{context.EndBytes();}
                        | AUTO_     
                        ;

exptypeHead             : _CLASS EXTERN_ exptAttr dottedName  
                        ;

exportHead              : _EXPORT exptAttr dottedName   /* deprecated */      
                        ;

exptAttr                : /* EMPTY */                         
                        | exptAttr PRIVATE_                   
                        | exptAttr PUBLIC_                    
                        | exptAttr FORWARDER_                 
                        | exptAttr NESTED_ PUBLIC_            
                        | exptAttr NESTED_ PRIVATE_           
                        | exptAttr NESTED_ FAMILY_            
                        | exptAttr NESTED_ ASSEMBLY_          
                        | exptAttr NESTED_ FAMANDASSEM_       
                        | exptAttr NESTED_ FAMORASSEM_        
                        ;

exptypeDecls            : /* EMPTY */
                        | exptypeDecls exptypeDecl
                        ;

exptypeDecl             : _FILE dottedName                    
                        | _CLASS EXTERN_ dottedName           
                        | _ASSEMBLY EXTERN_ dottedName        
                        | customAttrDecl
                       ;

manifestResHead         : _MRESOURCE manresAttr dottedName    
                        | _MRESOURCE manresAttr dottedName AS_ dottedName                                                              
                        ;

manresAttr              : /* EMPTY */                         
                        | manresAttr PUBLIC_                  
                        | manresAttr PRIVATE_                 
                        ;

manifestResDecls        : /* EMPTY */
                        | manifestResDecls manifestResDecl
                        ;

manifestResDecl         : _FILE dottedName AT_ int32          
                        | _ASSEMBLY EXTERN_ dottedName        
                        | customAttrDecl
                        ;


%%

static void Main(string[] args)
{
  Parser parser = new Parser();
  if (args.Length <= 0)
  {
  	System.Console.Out.WriteLine("Usage: asmparse ilfile");
  	return;
  }
  
  parser.context = Context.Ref;
  parser.scanner = new Scanner(args[0],Context.Ref);
  //parser.Trace=true;
  
  parser.Parse();
  string dir=Path.GetDirectoryName(System.Windows.Forms.Application.ExecutablePath);
  dir=Path.Combine(dir,"il2cpp");
  Context.Ref.Generate(dir);
}
	
	