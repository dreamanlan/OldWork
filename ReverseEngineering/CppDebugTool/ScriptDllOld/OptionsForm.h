#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace ScriptDllOld
{
	/// <summary> 
	/// OptionsForm 摘要
	///
	/// 警告: 如果您更改该类的名称，则将需要更改 
	///          与该类所依赖的所有 .resx 文件关联的托管资源编译器工具的 
	///          “资源文件名”属性。  否则，
	///          设计器将不能与此窗体关联的
	///          本地化资源正确交互。
	/// </summary>
	public __gc class OptionsForm : public System::Windows::Forms::Form
	{
	public: 
		OptionsForm(void)
		{
			InitializeComponent();
		}
        __property Object* get_OptionObject(void)
		{
			return optionsGrid->SelectedObject;
		}
		__property void set_OptionObject(Object* obj)
		{
			optionsGrid->SelectedObject=obj;
		}
	protected: 
		void Dispose(Boolean disposing)
		{
			if (disposing && components)
			{
				components->Dispose();
			}
			__super::Dispose(disposing);
		}
	private: 
		System::Windows::Forms::PropertyGrid *  optionsGrid;
	private:
		/// <summary>
		/// 必需的设计器变量。
		/// </summary>
		System::ComponentModel::Container* components;

		/// <summary>
		/// 设计器支持所需的方法 - 不要使用代码编辑器修改
		/// 此方法的内容。
		/// </summary>
		void InitializeComponent(void)
		{
			this->optionsGrid = new System::Windows::Forms::PropertyGrid();
			this->SuspendLayout();
			// 
			// optionsGrid
			// 
			this->optionsGrid->CommandsVisibleIfAvailable = true;
			this->optionsGrid->Dock = System::Windows::Forms::DockStyle::Fill;
			this->optionsGrid->LargeButtons = false;
			this->optionsGrid->LineColor = System::Drawing::SystemColors::ScrollBar;
			this->optionsGrid->Location = System::Drawing::Point(0, 0);
			this->optionsGrid->Name = S"optionsGrid";
			this->optionsGrid->Size = System::Drawing::Size(292, 262);
			this->optionsGrid->TabIndex = 0;
			this->optionsGrid->Text = S"propertyGrid1";
			this->optionsGrid->ViewBackColor = System::Drawing::SystemColors::Window;
			this->optionsGrid->ViewForeColor = System::Drawing::SystemColors::WindowText;
			// 
			// OptionsForm
			// 
			this->AutoScaleBaseSize = System::Drawing::Size(6, 14);
			this->ClientSize = System::Drawing::Size(292, 262);
			this->Controls->Add(this->optionsGrid);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::SizableToolWindow;
			this->Name = S"OptionsForm";
			this->ShowInTaskbar = false;
			this->Text = S"OptionsForm";
			this->Closing += new System::ComponentModel::CancelEventHandler(this, OptionsForm_Closing);
			this->ResumeLayout(false);

		}		

	private: 
		System::Void OptionsForm_Closing(System::Object *  sender, System::ComponentModel::CancelEventArgs *  e)
		{
            e->Cancel = true;
            Hide();
		}
	};
}
