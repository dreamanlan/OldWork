#pragma once

namespace Root
{
	[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
	public 
	ref class T_x135  : Reflector::CodeModel::IArrayType
	{
		ref class T_x1;
	internal:
		[System::Reflection::DefaultMember("Item")]
		[StructLayout(LayoutKind::Auto , CharSet=CharSet::Ansi)]
		ref class T_x1  : Reflector::CodeModel::IArrayDimensionCollection
		{
		private:
			static Reflector::CodeModel::IArrayDimensionCollection^ F_x1;
		private:
			array<Reflector::CodeModel::IArrayDimension^>^ F_x2;
		public:
			T_x1(array<Reflector::CodeModel::IArrayDimension^>^ A_0);
		public:
			virtual System::Collections::IEnumerator^ GetEnumerator() sealed;
		public:
			virtual void M_x2() sealed  = Reflector::CodeModel::IArrayDimensionCollection::Clear;
			//Reflector::CodeModel::IArrayDimensionCollection^::Clear by M_x2
		public:
			virtual void M_x12(Reflector::CodeModel::IArrayDimension^ A_0) sealed  = Reflector::CodeModel::IArrayDimensionCollection::Add;
			//Reflector::CodeModel::IArrayDimensionCollection^::Add by M_x12
		public:
			virtual void M_x1(System::Collections::ICollection^ A_0) sealed  = Reflector::CodeModel::IArrayDimensionCollection::AddRange;
			//Reflector::CodeModel::IArrayDimensionCollection^::AddRange by M_x1
		public:
			virtual void M_x13(Reflector::CodeModel::IArrayDimension^ A_0) sealed  = Reflector::CodeModel::IArrayDimensionCollection::Remove;
			//Reflector::CodeModel::IArrayDimensionCollection^::Remove by M_x13
		public:
			virtual void M_x1(System::Int32 A_0,Reflector::CodeModel::IArrayDimension^ A_1) sealed  = Reflector::CodeModel::IArrayDimensionCollection::Insert;
			//Reflector::CodeModel::IArrayDimensionCollection^::Insert by M_x1
		public:
			virtual void M_x2(System::Int32 A_0) sealed  = Reflector::CodeModel::IArrayDimensionCollection::RemoveAt;
			//Reflector::CodeModel::IArrayDimensionCollection^::RemoveAt by M_x2
		public:
			virtual System::Boolean M_x2(Reflector::CodeModel::IArrayDimension^ A_0) sealed  = Reflector::CodeModel::IArrayDimensionCollection::Contains;
			//Reflector::CodeModel::IArrayDimensionCollection^::Contains by M_x2
		public:
			virtual System::Int32 M_x1(Reflector::CodeModel::IArrayDimension^ A_0) sealed  = Reflector::CodeModel::IArrayDimensionCollection::IndexOf;
			//Reflector::CodeModel::IArrayDimensionCollection^::IndexOf by M_x1
		public:
			virtual Reflector::CodeModel::IArrayDimension^ M_x1(System::Int32 A_0) sealed  = Reflector::CodeModel::IArrayDimensionCollection::default::get;
			//Reflector::CodeModel::IArrayDimensionCollection^::get_Item by M_x1
		public:
			virtual void M_x2(System::Int32 A_0,Reflector::CodeModel::IArrayDimension^ A_1) sealed  = Reflector::CodeModel::IArrayDimensionCollection::default::set;
			//Reflector::CodeModel::IArrayDimensionCollection^::set_Item by M_x2
		public:
			virtual void CopyTo(System::Array^ array_1,System::Int32 index) sealed;
		public:
			static Reflector::CodeModel::IArrayDimensionCollection^ M_x1();
		private:
			static T_x1();
		public:
			property virtual System::Int32 Count
			{
				virtual System::Int32 get() sealed;
			}
		public:
			property virtual System::Boolean IsSynchronized
			{
				virtual System::Boolean get() sealed;
			}
		public:
			property virtual System::Object^ SyncRoot
			{
				virtual System::Object^ get() sealed;
			}
		};
	private:
		Reflector::CodeModel::IType^ F_x1;
	private:
		Reflector::CodeModel::IArrayDimensionCollection^ F_x2;
	public:
		T_x135(Reflector::CodeModel::IType^ A_0);
	public:
		T_x135(Reflector::CodeModel::IType^ A_0,array<Reflector::CodeModel::IArrayDimension^>^ A_1);
	public:
		virtual Reflector::CodeModel::IType^ M_x13() sealed  = Reflector::CodeModel::IArrayType::ElementType::get;
		//Reflector::CodeModel::IArrayType^::get_ElementType by M_x13
	public:
		virtual void M_x1(Reflector::CodeModel::IType^ A_0) sealed  = Reflector::CodeModel::IArrayType::ElementType::set;
		//Reflector::CodeModel::IArrayType^::set_ElementType by M_x1
	public:
		virtual Reflector::CodeModel::IArrayDimensionCollection^ M_x2() sealed  = Reflector::CodeModel::IArrayType::Dimensions::get;
		//Reflector::CodeModel::IArrayType^::get_Dimensions by M_x2
	public:
		virtual System::Int32 M_x1()  = System::Object::GetHashCode;
		//System::Object^::GetHashCode by M_x1
	public:
		virtual System::Boolean M_x1(System::Object^ A_0)  = System::Object::Equals;
		//System::Object^::Equals by M_x1
	public:
		virtual System::Int32 CompareTo(System::Object^ obj) sealed;
	public:
		virtual System::String^ M_x12()  = System::Object::ToString;
		//System::Object^::ToString by M_x12
	};
}
