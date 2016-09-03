#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace System::Threading;
using namespace Microsoft::CSharp;
using namespace Microsoft::VisualC;
using namespace ICSharpCode::TextEditor;

#include "ScriptIntepreter.h"
#include "OptionsForm.h"

namespace ScriptDll 
{
	/// <summary>
	/// MainForm 摘要
	///
	/// 警告: 如果更改此类的名称，则需要更改
	///          与此类所依赖的所有 .resx 文件关联的托管资源编译器工具的
	///          “资源文件名”属性。否则，
	///          设计器将不能与此窗体的关联
	///          本地化资源正确交互。
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
		static MainForm^ mainForm;

		Options^ options;
		OptionsForm^ optionsForm;
	public:
		static void Start(void)
		{   
			mainForm=gcnew MainForm();
			mainForm->Show();
			Application::Run();

			//脚本编辑控件只能在创建它的线程里运行，这样无法使用线程池，如果将全部创建的代码放到池中，则出现无效操作异常
			//可能与GUI线程的要求有关。
			//ThreadPool::QueueUserWorkItem(gcnew WaitCallback(mainForm,&MainForm::Loop));
		}
		void Loop(Object^ stateInfo)
		{
			mainForm->Show();
			Application::Run();
		}

		MainForm(void)
		{
			InitializeComponent();
			options=gcnew Options();
			optionsForm=gcnew OptionsForm();

			scriptCtrl->Encoding = System::Text::Encoding::Default;
			resultCtrl->Encoding = System::Text::Encoding::Default;
			scriptCtrl->Document->HighlightingStrategy = ICSharpCode::TextEditor::Document::HighlightingStrategyFactory::CreateHighlightingStrategy("C#");
		}

	protected:
		/// <summary>
		/// 清理所有正在使用的资源。
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: 
		System::Windows::Forms::ToolStripContainer^  toolStripContainer1;
		System::Windows::Forms::SplitContainer^  splitContainer1;
		ICSharpCode::TextEditor::TextEditorControl^  scriptCtrl;
		ICSharpCode::TextEditor::TextEditorControl^  resultCtrl;
		System::Windows::Forms::ToolStrip^  toolStrip1;
		System::Windows::Forms::ToolStripButton^  loadBtn;
		System::Windows::Forms::ToolStripButton^  saveBtn;
		System::Windows::Forms::ToolStripButton^  runBtn;
		System::Windows::Forms::ToolStripSeparator^  toolStripSeparator1;
		System::Windows::Forms::ToolStripButton^  optionBtn;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MainForm::typeid));
			this->toolStripContainer1 = (gcnew System::Windows::Forms::ToolStripContainer());
			this->splitContainer1 = (gcnew System::Windows::Forms::SplitContainer());
			this->scriptCtrl = (gcnew ICSharpCode::TextEditor::TextEditorControl());
			this->resultCtrl = (gcnew ICSharpCode::TextEditor::TextEditorControl());
			this->toolStrip1 = (gcnew System::Windows::Forms::ToolStrip());
			this->loadBtn = (gcnew System::Windows::Forms::ToolStripButton());
			this->saveBtn = (gcnew System::Windows::Forms::ToolStripButton());
			this->runBtn = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripSeparator1 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->optionBtn = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripContainer1->ContentPanel->SuspendLayout();
			this->toolStripContainer1->TopToolStripPanel->SuspendLayout();
			this->toolStripContainer1->SuspendLayout();
			this->splitContainer1->Panel1->SuspendLayout();
			this->splitContainer1->Panel2->SuspendLayout();
			this->splitContainer1->SuspendLayout();
			this->toolStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// toolStripContainer1
			// 
			// 
			// toolStripContainer1.ContentPanel
			// 
			this->toolStripContainer1->ContentPanel->Controls->Add(this->splitContainer1);
			this->toolStripContainer1->ContentPanel->Size = System::Drawing::Size(792, 537);
			this->toolStripContainer1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->toolStripContainer1->Location = System::Drawing::Point(0, 0);
			this->toolStripContainer1->Name = L"toolStripContainer1";
			this->toolStripContainer1->Size = System::Drawing::Size(792, 562);
			this->toolStripContainer1->TabIndex = 0;
			this->toolStripContainer1->Text = L"toolStripContainer1";
			// 
			// toolStripContainer1.TopToolStripPanel
			// 
			this->toolStripContainer1->TopToolStripPanel->Controls->Add(this->toolStrip1);
			// 
			// splitContainer1
			// 
			this->splitContainer1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->splitContainer1->Location = System::Drawing::Point(0, 0);
			this->splitContainer1->Name = L"splitContainer1";
			this->splitContainer1->Orientation = System::Windows::Forms::Orientation::Horizontal;
			// 
			// splitContainer1.Panel1
			// 
			this->splitContainer1->Panel1->Controls->Add(this->scriptCtrl);
			// 
			// splitContainer1.Panel2
			// 
			this->splitContainer1->Panel2->Controls->Add(this->resultCtrl);
			this->splitContainer1->Size = System::Drawing::Size(792, 537);
			this->splitContainer1->SplitterDistance = 324;
			this->splitContainer1->TabIndex = 0;
			// 
			// scriptCtrl
			// 
			this->scriptCtrl->Dock = System::Windows::Forms::DockStyle::Fill;
			this->scriptCtrl->Location = System::Drawing::Point(0, 0);
			this->scriptCtrl->Name = L"scriptCtrl";
			this->scriptCtrl->ShowEOLMarkers = true;
			this->scriptCtrl->ShowSpaces = true;
			this->scriptCtrl->ShowTabs = true;
			this->scriptCtrl->ShowVRuler = true;
			this->scriptCtrl->Size = System::Drawing::Size(792, 324);
			this->scriptCtrl->TabIndex = 0;
			// 
			// resultCtrl
			// 
			this->resultCtrl->Dock = System::Windows::Forms::DockStyle::Fill;
			this->resultCtrl->Location = System::Drawing::Point(0, 0);
			this->resultCtrl->Name = L"resultCtrl";
			this->resultCtrl->ShowEOLMarkers = true;
			this->resultCtrl->ShowHRuler = true;
			this->resultCtrl->ShowInvalidLines = false;
			this->resultCtrl->ShowSpaces = true;
			this->resultCtrl->ShowTabs = true;
			this->resultCtrl->ShowVRuler = true;
			this->resultCtrl->Size = System::Drawing::Size(792, 209);
			this->resultCtrl->TabIndex = 0;
			// 
			// toolStrip1
			// 
			this->toolStrip1->Dock = System::Windows::Forms::DockStyle::None;
			this->toolStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {this->loadBtn, this->saveBtn, 
				this->runBtn, this->toolStripSeparator1, this->optionBtn});
			this->toolStrip1->Location = System::Drawing::Point(3, 0);
			this->toolStrip1->Name = L"toolStrip1";
			this->toolStrip1->Size = System::Drawing::Size(261, 25);
			this->toolStrip1->TabIndex = 0;
			// 
			// loadBtn
			// 
			this->loadBtn->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"loadBtn.Image")));
			this->loadBtn->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->loadBtn->Name = L"loadBtn";
			this->loadBtn->Size = System::Drawing::Size(53, 22);
			this->loadBtn->Text = L"装入";
			this->loadBtn->Click += gcnew System::EventHandler(this, &MainForm::loadBtn_Click);
			// 
			// saveBtn
			// 
			this->saveBtn->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"saveBtn.Image")));
			this->saveBtn->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->saveBtn->Name = L"saveBtn";
			this->saveBtn->Size = System::Drawing::Size(53, 22);
			this->saveBtn->Text = L"保存";
			this->saveBtn->Click += gcnew System::EventHandler(this, &MainForm::saveBtn_Click);
			// 
			// runBtn
			// 
			this->runBtn->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"runBtn.Image")));
			this->runBtn->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->runBtn->Name = L"runBtn";
			this->runBtn->Size = System::Drawing::Size(53, 22);
			this->runBtn->Text = L"执行";
			this->runBtn->Click += gcnew System::EventHandler(this, &MainForm::runBtn_Click);
			// 
			// toolStripSeparator1
			// 
			this->toolStripSeparator1->Name = L"toolStripSeparator1";
			this->toolStripSeparator1->Size = System::Drawing::Size(6, 25);
			// 
			// optionBtn
			// 
			this->optionBtn->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"optionBtn.Image")));
			this->optionBtn->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->optionBtn->Name = L"optionBtn";
			this->optionBtn->Size = System::Drawing::Size(53, 22);
			this->optionBtn->Text = L"选项";
			this->optionBtn->Click += gcnew System::EventHandler(this, &MainForm::optionBtn_Click);
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(792, 562);
			this->Controls->Add(this->toolStripContainer1);
			this->Name = L"MainForm";
			this->Text = L"MainForm";
			this->toolStripContainer1->ContentPanel->ResumeLayout(false);
			this->toolStripContainer1->TopToolStripPanel->ResumeLayout(false);
			this->toolStripContainer1->TopToolStripPanel->PerformLayout();
			this->toolStripContainer1->ResumeLayout(false);
			this->toolStripContainer1->PerformLayout();
			this->splitContainer1->Panel1->ResumeLayout(false);
			this->splitContainer1->Panel2->ResumeLayout(false);
			this->splitContainer1->ResumeLayout(false);
			this->toolStrip1->ResumeLayout(false);
			this->toolStrip1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

	private: 
		System::Void loadBtn_Click(System::Object^  sender, System::EventArgs^  e) 
		{
			OpenFileDialog^ ofd = gcnew OpenFileDialog();
			ofd->DefaultExt = "cs";
			ofd->Filter = "CSharp文件|*.cs|所有文件|*.*";
            ofd->CheckPathExists = true;
            ofd->CheckFileExists = true;
            ofd->Title = "请指定要打开的脚本文件/模板文件（一定要有ScriptNS名空间及Script类，并且有一个方法public void Run(Control);）";
			if (System::Windows::Forms::DialogResult::OK == ofd->ShowDialog())
            {
                scriptCtrl->Text = OpenScript(ofd->FileName);
            }			
		}
	private: 
		System::Void saveBtn_Click(System::Object^  sender, System::EventArgs^  e) 
		{
			SaveFileDialog^ sfd = gcnew SaveFileDialog();
			sfd->DefaultExt = "cs";
			sfd->Filter = "CSharp文件|*.cs|所有文件|*.*";			
            sfd->CheckPathExists = true;
            sfd->OverwritePrompt = true;
            sfd->Title = "请指定要保存的脚本文件";
            if (System::Windows::Forms::DialogResult::OK == sfd->ShowDialog())
            {
                SaveScript(sfd->FileName, scriptCtrl->Text);
            }
		}
	private: 
		System::Void runBtn_Click(System::Object^  sender, System::EventArgs^  e) 
		{
			try
            {
                resultCtrl->Text = "";
				ScriptInterpreter^ si = gcnew ScriptInterpreter();
				for each(String^ s in options->References)
				{
					si->ReferencedAssemblies->Add(s);
				}
				si->CompilerOptions=options->Option;
				Object^ scriptCode = si->LoadCode<CSharpCodeProvider^>(scriptCtrl->Text, "ScriptNS", "Script");				
                if (scriptCode != nullptr)
                {
					Type^ t=scriptCode->GetType();
					t->InvokeMember("Run",System::Reflection::BindingFlags::InvokeMethod,nullptr,scriptCode,gcnew array<Object^>{resultCtrl});
                }
                else
                {
                    String^ ss = "编译错误：";
                    for each (String^ s in si->Results)
                    {
                        ss += "\r\n" + s;
                    }
                    resultCtrl->Text = ss;
                }
            }
            catch (Exception^ eee)
            {
                resultCtrl->Text = "产生异常:" + eee->Message;
            }
            finally
            {
                resultCtrl->Refresh();
            }
		}
		System::Void optionBtn_Click(System::Object^  sender, System::EventArgs^  e) 
		{
			optionsForm->OptionObject=options;
			if (!optionsForm->Visible)
            {
                optionsForm->Owner = this;
                optionsForm->Show();
                optionsForm->Location = Point(Left + (Width - optionsForm->Width) / 2, Top + (Height - optionsForm->Height) / 2);
            }
			else if (optionsForm->WindowState == System::Windows::Forms::FormWindowState::Minimized)
            {   
				optionsForm->WindowState = System::Windows::Forms::FormWindowState::Normal;
            }   
		}
	private:		
        String^ OpenScript(String^ file)
        {
            try
            {
                StreamReader^ sr = gcnew StreamReader(file);
                String^ code = sr->ReadToEnd();
                sr->Close();
                return code;
            }
            catch(Exception^)
            {
                return "";
            }
        }
        void SaveScript(String^ file,String^ code)
        {
            StreamWriter^ sw=gcnew StreamWriter(file);
            sw->Write(code);
            sw->Close();
        }	
	};
}

extern void ShowMainForm(void);
