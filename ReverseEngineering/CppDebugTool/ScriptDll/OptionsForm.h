#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;

namespace ScriptDll {

	/// <summary>
	/// OptionsForm 摘要
	///
	/// 警告: 如果更改此类的名称，则需要更改
	///          与此类所依赖的所有 .resx 文件关联的托管资源编译器工具的
	///          “资源文件名”属性。否则，
	///          设计器将不能与此窗体的关联
	///          本地化资源正确交互。
	/// </summary>
	public ref class OptionsForm : public System::Windows::Forms::Form
	{
	public:
		OptionsForm(void)
		{
			InitializeComponent();
			//
			//TODO: 在此处添加构造函数代码
			//
		}
	public:
		property Object^ OptionObject
		{
			Object^ get(void)
			{
				return optionsGrid->SelectedObject;
			}
			void set(Object^ obj)
			{
				optionsGrid->SelectedObject=obj;
			}
		}
	protected:
		/// <summary>
		/// 清理所有正在使用的资源。
		/// </summary>
		~OptionsForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: 
		System::Windows::Forms::PropertyGrid^  optionsGrid;
	private:
		/// <summary>
		/// 必需的设计器变量。
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// 设计器支持所需的方法 - 不要
		/// 使用代码编辑器修改此方法的内容。
		/// </summary>
		void InitializeComponent(void)
		{
			this->optionsGrid = (gcnew System::Windows::Forms::PropertyGrid());
			this->SuspendLayout();
			// 
			// optionsGrid
			// 
			this->optionsGrid->Dock = System::Windows::Forms::DockStyle::Fill;
			this->optionsGrid->Location = System::Drawing::Point(0, 0);
			this->optionsGrid->Name = L"optionsGrid";
			this->optionsGrid->Size = System::Drawing::Size(292, 262);
			this->optionsGrid->TabIndex = 0;
			// 
			// OptionsForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(292, 262);
			this->Controls->Add(this->optionsGrid);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::SizableToolWindow;
			this->Name = L"OptionsForm";
			this->ShowIcon = false;
			this->ShowInTaskbar = false;
			this->Text = L"OptionsForm";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &OptionsForm::OptionsForm_FormClosing);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: 
		System::Void OptionsForm_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e) 
		{
			if (e->CloseReason == System::Windows::Forms::CloseReason::UserClosing)
            {
                e->Cancel = true;
                Hide();
            }
		}
	};
}
