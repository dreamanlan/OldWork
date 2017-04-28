using System;
using System.Collections.Generic;
using System.Text;

namespace IL2CPP
{
    public abstract class TypeInfo
    {
        public const int Undefined = -2;
        public const int Interface = -1;
        public const int Class = 0;
        public const int Delegate = 1;
        public const int Struct = 2;
        public const int Enum = 3;
        public const int Simple = 4;
        public const int Boolean = 5;
        public const int Void = 6;
        public const int Array = 7;
        public const int Reference = 8;
        public const int Pointer = 9;

        public bool IsRef
        {
            get
            {
                return Kind == Undefined || Kind == Interface || Kind == Class || Kind == Delegate || Kind == Array || Kind == Pointer || Kind == Reference && UnderlyingType.IsRef;
            }
        }
        public bool IsValue
        {
            get
            {
                return Kind == Struct || Kind == Enum || Kind == Simple || Kind == Boolean || Kind == Reference && UnderlyingType.IsValue;
            }
        }
        public bool IsFloat
        {
            get
            {
                return TypeClause == "System::Single" || TypeClause == "System::Double" || TypeClause == "System::Decimal";
            }
        }
        public bool IsCastSimple
        {
            get
            {
                return TypeClause == "System::Char" || TypeClause == "System::IntPtr" || TypeClause == "System::UIntPtr";
            }
        }
        public bool IsUndefined
        {
            get
            {
                return Kind == Undefined;
            }
        }
        public bool IsInterface
        {
            get
            {
                return Kind == Interface;
            }
        }
        public bool IsClass
        {
            get
            {
                return Kind == Class;
            }
        }
        public bool IsDelegate
        {
            get
            {
                return Kind == Delegate;
            }
        }
        public bool IsStruct
        {
            get
            {
                return Kind == Struct;
            }
        }
        public bool IsEnum
        {
            get
            {
                return Kind == Enum;
            }
        }
        public bool IsSimple
        {
            get
            {
                return Kind == Simple;
            }
        }
        public bool IsBoolean
        {
            get
            {
                return Kind == Boolean;
            }
        }
        public bool IsVoid
        {
            get
            {
                return Kind == Void;
            }
        }
        public bool IsArray
        {
            get
            {
                return Kind == Array;
            }
        }
        public bool IsReference
        {
            get
            {
                return Kind == Reference;
            }
        }
        public bool IsPointer
        {
            get
            {
                return Kind == Pointer;
            }
        }
        /// <summary>
        /// 类型的基础类型信息，基础类型经过多次复合形成非BasicTypeInfo，这一属性反向求最原始基础信息。
        /// </summary>
        public TypeInfo BasicType
        {
            get
            {
                TypeInfo ti = this;
                while (!(ti is BasicTypeInfo))
                {
                    TypeInfo ti2 = ti.UnderlyingType;
                    if (ti2 == ti)
                        break;
                    ti = ti2;
                }
                return ti;
            }
        }
        /// <summary>
        /// 类型的底层类型信息，对非BasicTypeInfo返回构成它的最近一层的类型，比如int**返回int*,int[][]返回int[]等。
        /// 对BasicTypeInfo返回其自身。
        /// </summary>
        public TypeInfo UnderlyingType
        {
            get
            {
                return underlyingType;
            }
        }
        /// <summary>
        /// 类型的类别
        /// </summary>
        public abstract int Kind
        {
            get;
        }
        /// <summary>
        /// 类型的子句表示，用于需要类型名字的场合，比如引用静态成员时。
        /// </summary>
        public abstract string TypeClause
        {
            get;
        }
        /// <summary>
        /// 类型定义的子句表示，用于定义与使用变量类型的场合，对C++/CLI，类型与类型定义表示经常不同
        /// ，比如System::Object的语法表示常常是System::Object^
        /// </summary>
        public abstract string TypeDefClause
        {
            get;
        }
        /// <summary>
        /// 适合Type.GetType(string)调用的全名表示
        /// </summary>
        public abstract string CliFullName
        {
            get;
        }
        public override bool Equals(object obj)
        {
            if (obj is TypeInfo)
                return this == obj as TypeInfo;
            return base.Equals(obj);
        }
        public override int GetHashCode()
        {
            return base.GetHashCode();
        }
        public static bool operator == (TypeInfo t1,TypeInfo t2)
        {
            if (object.ReferenceEquals(t1,t2))
                return true;
            else if (t1 is TypeInfo && t2 is TypeInfo)
            {
                if (t1.GetType() != t2.GetType())
                    return false;
                else if (t1.IsArray && t2.IsArray)
                    return t1.UnderlyingType == t2.UnderlyingType;
                else if (t1.IsReference && t2.IsReference)
                    return t1.UnderlyingType == t2.UnderlyingType;
                else if (t1.IsPointer && t2.IsPointer)
                    return t1.UnderlyingType == t2.UnderlyingType;
                else if (t1.CliFullName == t2.CliFullName)
                    return true;
                else
                    return false;
            }
            return false;
        }
        public static bool operator != (TypeInfo t1, TypeInfo t2)
        {
            return !(t1 == t2);
        }

        public virtual void Tune()
        {
        }

        public override string ToString()
        {
            return TypeClause;
        }
        
        public static void TuneAllTypeInfos()
        {
            BasicTypeInfo.TuneAll();
            ArrayTypeInfo.TuneAll();
            ReferenceTypeInfo.TuneAll();
            PointerTypeInfo.TuneAll();
        }

        protected TypeInfo underlyingType = null;
    }
    public class UndefinedTypeInfo : TypeInfo
    {
        public override int Kind
        {
            get 
            {
                return TypeInfo.Undefined;
            }
        }

        public override string TypeClause
        {
            get { return "undefined_type"; }
        }

        public override string TypeDefClause
        {
            get { return TypeClause; }
        }

        public override string CliFullName
        {
            get { return TypeClause; }
        }

        public override void Tune()
        {
        }

        private UndefinedTypeInfo()
        {
            underlyingType = this;
        }

        public static UndefinedTypeInfo Ref
        {
            get { return UndefinedTypeInfo.instance; }
        }

        private static UndefinedTypeInfo instance = new UndefinedTypeInfo();
    }
    public class BasicTypeInfo : TypeInfo
    {
        public override int Kind
        {
            get
            {
                if (kind == TypeInfo.Undefined)
                {
                    return Context.Ref.GetTypeValue(this);
                }                
                return kind;
            }
        }

        public override string TypeClause
        {
            get 
            {
                return type;
            }
        }

        public override string TypeDefClause
        {
            get 
            {
                if (IsRef)
                    return TypeClause + "^";
                else
                    return TypeClause;
            }
        }

        public override string CliFullName
        {
            get { return TypeClause.Replace("::", "."); }
        }

        public override void Tune()
        {
            if (Context.Ref.InRenames(type))
            {
                type = Context.Ref.Rename(type);
            }
            kind = Context.Ref.GetTypeValue(this);//Tune时所有类型信息均已确定
        }

        public static void TuneAll()
        {
            foreach (TypeInfo ti in typeInfos.Values)
            {
                ti.Tune();
            }
        }

        private BasicTypeInfo(string _type)
        {
            type = _type;
            underlyingType = this;
        }

        private string type = "";
        private int kind = Undefined;

        static BasicTypeInfo()
        {
            booleanInfo = BasicTypeInfo.Create("System::Boolean");
            sbyteInfo = BasicTypeInfo.Create("System::SByte");
            byteInfo = BasicTypeInfo.Create("System::Byte");
            int16Info = BasicTypeInfo.Create("System::Int16");
            uint16Info = BasicTypeInfo.Create("System::UInt16");
            int32Info = BasicTypeInfo.Create("System::Int32");
            uint32Info = BasicTypeInfo.Create("System::UInt32");
            int64Info = BasicTypeInfo.Create("System::Int64");
            uint64Info = BasicTypeInfo.Create("System::UInt64");
            singleInfo = BasicTypeInfo.Create("System::Single");
            doubleInfo = BasicTypeInfo.Create("System::Double");
            decimalInfo = BasicTypeInfo.Create("System::Decimal");
            charInfo = BasicTypeInfo.Create("System::Char");
            intPtrInfo = BasicTypeInfo.Create("System::IntPtr");
            uintPtrInfo = BasicTypeInfo.Create("System::UIntPtr");
            objectInfo = BasicTypeInfo.Create("System::Object");
            stringInfo = BasicTypeInfo.Create("System::String");
            voidInfo = BasicTypeInfo.Create("void");
            typeInfos["System::Void"] = voidInfo;
            typedrefInfo = BasicTypeInfo.Create("System::TypedReference");

            system_enum = BasicTypeInfo.Create("System::Enum");
            system_valueType = BasicTypeInfo.Create("System::ValueType");
            system_multicastDelegate = BasicTypeInfo.Create("System::MulticastDelegate");
            system_type = BasicTypeInfo.Create("System::Type");
            system_runtime_compilerServices_runtimeHelpers = BasicTypeInfo.Create("System::Runtime::CompilerServices::RuntimeHelpers");
            system_idisposable=BasicTypeInfo.Create("System::IDisposable");
        }
        public static BasicTypeInfo Create(string _type)
        {
            if (typeInfos.ContainsKey(_type))
                return typeInfos[_type];
            BasicTypeInfo ti = new BasicTypeInfo(_type);
            typeInfos[_type] = ti;
            return ti;
        }

        public static BasicTypeInfo BooleanInfo
        {
            get { return BasicTypeInfo.booleanInfo; }
        }

        public static BasicTypeInfo SByteInfo
        {
            get { return BasicTypeInfo.sbyteInfo; }
        }

        public static BasicTypeInfo ByteInfo
        {
            get { return BasicTypeInfo.byteInfo; }
        }

        public static BasicTypeInfo Int16Info
        {
            get { return BasicTypeInfo.int16Info; }
        }

        public static BasicTypeInfo UInt16Info
        {
            get { return BasicTypeInfo.uint16Info; }
        }

        public static BasicTypeInfo Int32Info
        {
            get { return BasicTypeInfo.int32Info; }
        }

        public static BasicTypeInfo UInt32Info
        {
            get { return BasicTypeInfo.uint32Info; }
        }

        public static BasicTypeInfo Int64Info
        {
            get { return BasicTypeInfo.int64Info; }
        }

        public static BasicTypeInfo UInt64Info
        {
            get { return BasicTypeInfo.uint64Info; }
        }

        public static BasicTypeInfo SingleInfo
        {
            get { return BasicTypeInfo.singleInfo; }
        }

        public static BasicTypeInfo DoubleInfo
        {
            get { return BasicTypeInfo.doubleInfo; }
        }

        public static BasicTypeInfo DecimalInfo
        {
            get { return BasicTypeInfo.decimalInfo; }
        }

        public static BasicTypeInfo CharInfo
        {
            get { return BasicTypeInfo.charInfo; }
        }

        public static BasicTypeInfo IntPtrInfo
        {
            get { return BasicTypeInfo.intPtrInfo; }
        }

        public static BasicTypeInfo UIntPtrInfo
        {
            get { return BasicTypeInfo.uintPtrInfo; }
        }

        public static BasicTypeInfo ObjectInfo
        {
            get { return BasicTypeInfo.objectInfo; }
        }

        public static BasicTypeInfo StringInfo
        {
            get { return BasicTypeInfo.stringInfo; }
        }

        public static BasicTypeInfo VoidInfo
        {
            get { return BasicTypeInfo.voidInfo; }
        }

        public static BasicTypeInfo TypedrefInfo
        {
            get { return BasicTypeInfo.typedrefInfo; }
        } 

        public static BasicTypeInfo System_Enum
        {
            get { return BasicTypeInfo.system_enum; }
        }

        public static BasicTypeInfo System_ValueType
        {
            get { return BasicTypeInfo.system_valueType; }
        }

        public static BasicTypeInfo System_MulticastDelegateInfo
        {
            get { return BasicTypeInfo.system_multicastDelegate; }
        }

        public static BasicTypeInfo System_Type
        {
            get { return BasicTypeInfo.system_type; }
        }

        public static BasicTypeInfo System_Runtime_CompilerServices_RuntimeHelpers
        {
            get { return BasicTypeInfo.system_runtime_compilerServices_runtimeHelpers; }
        }

        public static BasicTypeInfo System_IDisposable
        {
            get { return BasicTypeInfo.system_idisposable; }
        } 

        private static Dictionary<string, BasicTypeInfo> typeInfos = new Dictionary<string, BasicTypeInfo>();
        private static readonly BasicTypeInfo booleanInfo = null;
        private static readonly BasicTypeInfo sbyteInfo = null;
        private static readonly BasicTypeInfo byteInfo = null;
        private static readonly BasicTypeInfo int16Info = null;
        private static readonly BasicTypeInfo uint16Info = null;
        private static readonly BasicTypeInfo int32Info = null;
        private static readonly BasicTypeInfo uint32Info = null;
        private static readonly BasicTypeInfo int64Info = null;
        private static readonly BasicTypeInfo uint64Info = null;
        private static readonly BasicTypeInfo singleInfo = null;
        private static readonly BasicTypeInfo doubleInfo = null;
        private static readonly BasicTypeInfo decimalInfo = null;
        private static readonly BasicTypeInfo charInfo = null;
        private static readonly BasicTypeInfo intPtrInfo = null;
        private static readonly BasicTypeInfo uintPtrInfo = null;
        private static readonly BasicTypeInfo objectInfo = null;
        private static readonly BasicTypeInfo stringInfo = null;
        private static readonly BasicTypeInfo voidInfo = null;
        private static readonly BasicTypeInfo typedrefInfo = null;

        private static readonly BasicTypeInfo system_enum = null;
        private static readonly BasicTypeInfo system_valueType = null;
        private static readonly BasicTypeInfo system_multicastDelegate = null;
        private static readonly BasicTypeInfo system_type = null;
        private static readonly BasicTypeInfo system_runtime_compilerServices_runtimeHelpers = null;
        private static readonly BasicTypeInfo system_idisposable = null;
    }
    public class ArrayTypeInfo : TypeInfo
    {
        public override int Kind
        {
            get
            {
                return Array;
            }
        }

        public override string TypeClause
        {
            get 
            {
                if (dimension == 1)
                    return "array<" + UnderlyingType.TypeDefClause + ">";
                else
                {
                    return "array<" + UnderlyingType.TypeDefClause + "," + dimension + ">";
                }
            }
        }

        public override string TypeDefClause
        {
            get 
            {
                return TypeClause + "^";
            }
        }

        public override string CliFullName
        {
            get 
            {
                string baseName = BasicType.CliFullName;
                for (int i = 0; i < dimension; i++)
                    baseName += "[]";
                return baseName;
            }
        }

        public static void TuneAll()
        {
            foreach (TypeInfo ti in typeInfos.Values)
            {
                ti.Tune();
            }
        }

        private ArrayTypeInfo(TypeInfo _underlyingType, int _dimension)
        {
            underlyingType = _underlyingType;
            dimension = _dimension;
        }

        private int dimension = 1;
        
        public static ArrayTypeInfo Create(TypeInfo _underlyingType, int _dimension)
        {
            string _type = _underlyingType.TypeClause + "@" + _dimension;
            if (typeInfos.ContainsKey(_type))
                return typeInfos[_type];
            ArrayTypeInfo ti = new ArrayTypeInfo(_underlyingType, _dimension);
            typeInfos[_type] = ti;
            return ti;
        }
        private static Dictionary<string, ArrayTypeInfo> typeInfos = new Dictionary<string, ArrayTypeInfo>();
    }
    public class ReferenceTypeInfo : TypeInfo
    {
        public override int Kind
        {
            get
            {
                return Reference;
            }
        }

        public override string TypeClause
        {
            get
            {
                return UnderlyingType.TypeDefClause + "%";
            }
        }

        public override string TypeDefClause
        {
            get
            {
                return TypeClause;
            }
        }

        public override string CliFullName
        {
            get { return UnderlyingType.CliFullName + "&"; }
        }

        public static void TuneAll()
        {
            foreach (TypeInfo ti in typeInfos.Values)
            {
                ti.Tune();
            }
        }

        private ReferenceTypeInfo(TypeInfo _underlyingType)
        {
            underlyingType = _underlyingType;
        }

        public static ReferenceTypeInfo Create(TypeInfo _underlyingType)
        {
            string _type = _underlyingType.TypeClause;
            if (typeInfos.ContainsKey(_type))
                return typeInfos[_type];
            ReferenceTypeInfo ti = new ReferenceTypeInfo(_underlyingType);
            typeInfos[_type] = ti;
            return ti;
        }
        private static Dictionary<string, ReferenceTypeInfo> typeInfos = new Dictionary<string, ReferenceTypeInfo>();
    }
    public class PointerTypeInfo : TypeInfo
    {
        public override int Kind
        {
            get
            {
                return Pointer;
            }
        }

        public override string TypeClause
        {
            get 
            {
                return UnderlyingType.TypeClause + "*";
            }
        }

        public override string TypeDefClause
        {
            get
            {
                return TypeClause;
            }
        }

        public override string CliFullName
        {
            get { return UnderlyingType.CliFullName + "*"; }
        }

        public static void TuneAll()
        {
            foreach (TypeInfo ti in typeInfos.Values)
            {
                ti.Tune();
            }
        }

        private PointerTypeInfo(TypeInfo _underlyingType)
        {
            underlyingType = _underlyingType;
        }

        public static PointerTypeInfo Create(TypeInfo _underlyingType)
        {
            string _type = _underlyingType.TypeClause;
            if (typeInfos.ContainsKey(_type))
                return typeInfos[_type];
            PointerTypeInfo ti = new PointerTypeInfo(_underlyingType);
            typeInfos[_type] = ti;
            return ti;
        }
        private static Dictionary<string, PointerTypeInfo> typeInfos = new Dictionary<string, PointerTypeInfo>();
    }

    //用作参数排列属性的类型信息
    public class NativeTypeInfo
    {
        public virtual string UnmanagedType
        {
            get
            {
                return unmanagedType;
            }
        }
        public virtual string ArraySubType
        {
            get
            {
                return "";
            }
        }
        public virtual string SafeArraySubType
        {
            get
            {
                return "";
            }
        }
        public virtual string SafeArrayUserDefinedSubType
        {
            get
            {
                return "";
            }
        }
        public virtual string SizeConst
        {
            get
            {
                return sizeConst;
            }
        }
        public virtual string SizeParamIndex
        {
            get
            {
                return sizeParamIndex;
            }
        }
        public virtual string IidParameterIndex
        {
            get
            {
                return iidParameterIndex;
            }
        }
        public virtual string CustomMarshalType
        {
            get
            {
                return customMarshalType;
            }
        }
        public virtual string CustomMarshalCookie
        {
            get
            {
                return customMarshalCookie;
            }
        }

        public override string ToString()
        {
            if(this == Null || UnmanagedType.Length<=0)return "";
            StringBuilder sb =new StringBuilder();
            sb.Append("MarshalAs("+UnmanagedType);
            if (ArraySubType.Length > 0)
            {
                sb.Append(",ArraySubType=" + ArraySubType);
            }
            if (SafeArraySubType.Length > 0)
            {
                sb.Append(",SafeArraySubType=" + SafeArraySubType);
            }
            if (SafeArrayUserDefinedSubType.Length > 0)
            {
                sb.Append(",SafeArrayUserDefinedSubType=" + SafeArrayUserDefinedSubType + "::typeid");
            }
            if (SizeConst.Length > 0)
            {
                sb.Append(",SizeConst=" + SizeConst);
            }
            if (SizeParamIndex.Length > 0)
            {
                sb.Append(",SizeParamIndex=" + SizeParamIndex);
            }
            if (IidParameterIndex.Length > 0)
            {
                sb.Append(",IidParameterIndex=" + IidParameterIndex);
            }
            if (CustomMarshalType.Length > 0)
            {
                sb.Append(",CustomMarshalType=\"" + CustomMarshalType+"\"");
            }
            if (CustomMarshalCookie.Length > 0)
            {
                sb.Append(",CustomMarshalCookie=\"" + CustomMarshalCookie+"\"");
            }
            sb.Append(")");
            return sb.ToString();
        }

        public static NativeTypeInfo Null
        {
            get
            {
                return nullInfo;
            }
        }

        public static NativeTypeInfo CreateSimple(string _unmanagedType)
        {
            return new NativeTypeInfo(_unmanagedType);
        }
        public static NativeTypeInfo CreateString(string _unmanagedType, string _sizeConst)
        {
            return new NativeTypeInfo(_unmanagedType, _sizeConst);
        }
        public static NativeTypeInfo CreateCOM(string _unmanagedType, string _iidParameterIndex)
        {
            NativeTypeInfo info = new NativeTypeInfo(_unmanagedType);
            info.iidParameterIndex = _iidParameterIndex;
            return info;
        }
        public static NativeTypeInfo CreateCustom(string _customMarshalType)
        {
            NativeTypeInfo info = new NativeTypeInfo("UnmanagedType::CustomMarshaler");
            info.customMarshalType = _customMarshalType;
            return info;
        }
        public static NativeTypeInfo CreateCustom(string _customMarshalType, string _customMarshalCookie)
        {
            NativeTypeInfo info = new NativeTypeInfo("UnmanagedType::CustomMarshaler");
            info.customMarshalType = _customMarshalType;
            info.customMarshalCookie = _customMarshalCookie;
            return info;
        }

        protected NativeTypeInfo(string _unmanagedType)
        {
            unmanagedType = _unmanagedType;
        }
        protected NativeTypeInfo(string _unmanagedType, string _sizeConst)
        {
            unmanagedType = _unmanagedType;
            sizeConst = _sizeConst;
        }
        protected NativeTypeInfo(string _unmanagedType, string _sizeConst, string _sizeParamIndex)
        {
            unmanagedType = _unmanagedType;
            sizeConst = _sizeConst;
            sizeParamIndex = _sizeParamIndex;
        }

        private string unmanagedType = "";
        private string iidParameterIndex = "";
        private string customMarshalType = "";
        private string customMarshalCookie = "";
        private string sizeConst = "";
        private string sizeParamIndex = "";

        private static NativeTypeInfo nullInfo = new NativeTypeInfo("");
    }
    public class ArrayNativeTypeInfo : NativeTypeInfo
    {
        public override string ArraySubType
        {
            get
            {
                return underlyingType.UnmanagedType;
            }
        }

        public static NativeTypeInfo CreateArray(NativeTypeInfo _underlyingType, string _unmanagedType)
        {
            return new ArrayNativeTypeInfo(_underlyingType, _unmanagedType);
        }
        public static NativeTypeInfo CreateArray(NativeTypeInfo _underlyingType, string _unmanagedType, string _sizeConst)
        {
            return new ArrayNativeTypeInfo(_underlyingType, _unmanagedType, _sizeConst);
        }
        public static NativeTypeInfo CreateArray(NativeTypeInfo _underlyingType, string _unmanagedType, string _sizeConst, string _sizeParamIndex)
        {
            return new ArrayNativeTypeInfo(_underlyingType, _unmanagedType, _sizeConst, _sizeParamIndex);
        }

        protected ArrayNativeTypeInfo(NativeTypeInfo _underlyingType, string _unmanagedType)
            : base(_unmanagedType)
        {
            underlyingType = _underlyingType;
        }
        protected ArrayNativeTypeInfo(NativeTypeInfo _underlyingType, string _unmanagedType, string _sizeConst)
            : base(_unmanagedType, _sizeConst)
        {
            underlyingType = _underlyingType;
        }
        protected ArrayNativeTypeInfo(NativeTypeInfo _underlyingType, string _unmanagedType, string _sizeConst, string _sizeParamIndex)
            : base(_unmanagedType, _sizeConst, _sizeParamIndex)
        {
            underlyingType = _underlyingType;
        }

        private NativeTypeInfo underlyingType = null;
    }
    public class SafeArrayNativeTypeInfo : NativeTypeInfo
    {
        public override string SafeArraySubType
        {
            get
            {
                return underlyingType.SafeArraySubType;
            }
        }
        public override string SafeArrayUserDefinedSubType
        {
            get
            {
                return safeArrayUserDefinedSubType;
            }
        }

        public static NativeTypeInfo CreateSafeArray(VariantTypeInfo _underlyingType)
        {
            return new SafeArrayNativeTypeInfo(_underlyingType);
        }
        public static NativeTypeInfo CreateSafeArray(VariantTypeInfo _underlyingType, string _safeArrayUserDefinedSubType)
        {
            return new SafeArrayNativeTypeInfo(_underlyingType, _safeArrayUserDefinedSubType);
        }

        protected SafeArrayNativeTypeInfo(VariantTypeInfo _underlyingType)
            : base("UnmanagedType::SafeArray")
        {
            underlyingType = _underlyingType;
        }
        protected SafeArrayNativeTypeInfo(VariantTypeInfo _underlyingType, string _safeArrayUserDefinedSubType)
            : base("UnmanagedType::SafeArray")
        {
            underlyingType = _underlyingType;
            safeArrayUserDefinedSubType = _safeArrayUserDefinedSubType;
        }

        private VariantTypeInfo underlyingType = null;
        private string safeArrayUserDefinedSubType = "";
    }
    public class VariantTypeInfo
    {
        public string SafeArraySubType
        {
            get
            {
                return safeArraySubType;
            }
        }
        public VariantTypeInfo()
        {}
        public VariantTypeInfo(string _safeArraySubType)
        {
            safeArraySubType = _safeArraySubType;
        }

        private string safeArraySubType = "";
    }
}
