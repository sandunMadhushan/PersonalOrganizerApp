#pragma once
#include "User.h"
#include "IncomeExpenseForm.h"

namespace PersonalOrganizerApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		User^ currentUser;
		MainForm(User^ user)
		{
			InitializeComponent();
			isSidebarCollapsed = true;
			panel1->Width = 60;
			toggleButton->Text = "";
			btnIncomeExpenses->Text = "";
			currentUser = user;
		}

	protected:
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ toggleButton;
	private: System::Windows::Forms::Timer^ sidebarTimer;
	private: System::Windows::Forms::Button^ btnIncomeExpenses;
	private: System::ComponentModel::IContainer^ components;

#pragma region Windows Form Designer generated code
		   void InitializeComponent(void)
		   {
			   this->components = (gcnew System::ComponentModel::Container());
			   System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MainForm::typeid));
			   this->label1 = (gcnew System::Windows::Forms::Label());
			   this->button1 = (gcnew System::Windows::Forms::Button());
			   this->panel1 = (gcnew System::Windows::Forms::Panel());
			   this->btnIncomeExpenses = (gcnew System::Windows::Forms::Button());
			   this->toggleButton = (gcnew System::Windows::Forms::Button());
			   this->sidebarTimer = (gcnew System::Windows::Forms::Timer(this->components));
			   this->panel1->SuspendLayout();
			   this->SuspendLayout();
			   // 
			   // label1
			   // 
			   this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				   | System::Windows::Forms::AnchorStyles::Right));
			   this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->label1->Location = System::Drawing::Point(22, 13);
			   this->label1->Name = L"label1";
			   this->label1->Size = System::Drawing::Size(965, 59);
			   this->label1->TabIndex = 0;
			   this->label1->Text = L"Welcome";
			   this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			   // 
			   // button1
			   // 
			   this->button1->BackColor = System::Drawing::Color::Transparent;
			   this->button1->Enabled = false;
			   this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->button1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.Image")));
			   this->button1->Location = System::Drawing::Point(802, 30);
			   this->button1->Name = L"button1";
			   this->button1->Size = System::Drawing::Size(185, 195);
			   this->button1->TabIndex = 1;
			   this->button1->Text = L"Income / Expenses";
			   this->button1->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			   this->button1->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			   this->button1->UseVisualStyleBackColor = false;
			   this->button1->Click += gcnew System::EventHandler(this, &MainForm::button1_Click);
			   // 
			   // panel1
			   // 
			   this->panel1->BackColor = System::Drawing::Color::DodgerBlue;
			   this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			   this->panel1->Controls->Add(this->btnIncomeExpenses);
			   this->panel1->Controls->Add(this->toggleButton);
			   this->panel1->Dock = System::Windows::Forms::DockStyle::Left;
			   this->panel1->Location = System::Drawing::Point(0, 0);
			   this->panel1->Name = L"panel1";
			   this->panel1->Size = System::Drawing::Size(232, 750);
			   this->panel1->TabIndex = 2;
			   // 
			   // btnIncomeExpenses
			   // 
			   this->btnIncomeExpenses->BackColor = System::Drawing::Color::WhiteSmoke;
			   this->btnIncomeExpenses->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnIncomeExpenses.Image")));
			   this->btnIncomeExpenses->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			   this->btnIncomeExpenses->Location = System::Drawing::Point(41, 189);
			   this->btnIncomeExpenses->Name = L"btnIncomeExpenses";
			   this->btnIncomeExpenses->Size = System::Drawing::Size(177, 45);
			   this->btnIncomeExpenses->TabIndex = 3;
			   this->btnIncomeExpenses->Text = L"Income / Expenses";
			   this->btnIncomeExpenses->UseVisualStyleBackColor = false;
			   this->btnIncomeExpenses->Click += gcnew System::EventHandler(this, &MainForm::btnIncomeExpenses_Click);
			   // 
			   // toggleButton
			   // 
			   this->toggleButton->BackColor = System::Drawing::Color::WhiteSmoke;
			   this->toggleButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toggleButton.Image")));
			   this->toggleButton->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			   this->toggleButton->Location = System::Drawing::Point(41, 100);
			   this->toggleButton->Name = L"toggleButton";
			   this->toggleButton->Size = System::Drawing::Size(177, 45);
			   this->toggleButton->TabIndex = 2;
			   this->toggleButton->Text = L"Menu";
			   this->toggleButton->UseVisualStyleBackColor = false;
			   this->toggleButton->Click += gcnew System::EventHandler(this, &MainForm::toggleButton_Click);
			   // 
			   // sidebarTimer
			   // 
			   this->sidebarTimer->Interval = 10;
			   this->sidebarTimer->Tick += gcnew System::EventHandler(this, &MainForm::sidebarTimer_Tick);
			   // 
			   // MainForm
			   // 
			   this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			   this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			   this->ClientSize = System::Drawing::Size(999, 750);
			   this->Controls->Add(this->panel1);
			   this->Controls->Add(this->button1);
			   this->Controls->Add(this->label1);
			   this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			   this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			   this->MaximizeBox = false;
			   this->Name = L"MainForm";
			   this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			   this->Text = L"Dashboard";
			   this->panel1->ResumeLayout(false);
			   this->ResumeLayout(false);

		   }
#pragma endregion

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		IncomeExpenseForm^ incomeExpenseForm = gcnew IncomeExpenseForm(currentUser);
		incomeExpenseForm->Show();
		this->Hide();
	}

	private: bool isSidebarCollapsed = false;

	private: System::Void toggleButton_Click(System::Object^ sender, System::EventArgs^ e) {
		ToggleSidebar();
	}

		   void ToggleSidebar() {
			   // Toggle collapse/expand state
			   isSidebarCollapsed = !isSidebarCollapsed;
			   sidebarTimer->Start();
		   }

		   System::Void sidebarTimer_Tick(System::Object^ sender, System::EventArgs^ e) {
			   int collapsedWidth = 60;
			   int expandedWidth = 232;
			   int step = 20; // Speed of the collapse/expand effect

			   if (isSidebarCollapsed) {
				   if (panel1->Width > collapsedWidth) {
					   panel1->Width -= step;
				   }
				   else {
					   sidebarTimer->Stop();
					   panel1->Width = collapsedWidth;
					   toggleButton->Text = "";
					   btnIncomeExpenses->Text = "";
				   }
			   }
			   else {
				   if (panel1->Width < expandedWidth) {
					   panel1->Width += step;
				   }
				   else {
					   sidebarTimer->Stop();
					   panel1->Width = expandedWidth;
					   toggleButton->Text = "Menu";
					   btnIncomeExpenses->Text = "Income / Expenses";
				   }
			   }
		   }

	private: System::Void btnIncomeExpenses_Click(System::Object^ sender, System::EventArgs^ e) {
		IncomeExpenseForm^ incomeExpenseForm = gcnew IncomeExpenseForm(currentUser);
		incomeExpenseForm->Show();
		this->Hide();
	}
	};
}
