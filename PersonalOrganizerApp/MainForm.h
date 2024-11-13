#pragma once
#include "User.h"
#include "IncomeExpenseForm.h"
#include "BudgetForm.h"
#include "FinancialReportForm.h"
#include "AcademicScheduleForm.h"
#include "LoginForm.h"
#include "DatabaseHelper.h"

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
	private: System::Windows::Forms::Button^ btnBudget;
	private: System::Windows::Forms::Button^ btnReport;
	private: System::Windows::Forms::Button^ btnSchedule;
	private: System::Windows::Forms::Button^ btnLgOut;




	private: System::ComponentModel::IContainer^ components;

#pragma region Windows Form Designer generated code
		   void InitializeComponent(void)
		   {
			   this->components = (gcnew System::ComponentModel::Container());
			   System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MainForm::typeid));
			   this->label1 = (gcnew System::Windows::Forms::Label());
			   this->button1 = (gcnew System::Windows::Forms::Button());
			   this->panel1 = (gcnew System::Windows::Forms::Panel());
			   this->btnLgOut = (gcnew System::Windows::Forms::Button());
			   this->btnSchedule = (gcnew System::Windows::Forms::Button());
			   this->btnReport = (gcnew System::Windows::Forms::Button());
			   this->btnBudget = (gcnew System::Windows::Forms::Button());
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
			   this->panel1->Controls->Add(this->btnLgOut);
			   this->panel1->Controls->Add(this->btnSchedule);
			   this->panel1->Controls->Add(this->btnReport);
			   this->panel1->Controls->Add(this->btnBudget);
			   this->panel1->Controls->Add(this->btnIncomeExpenses);
			   this->panel1->Controls->Add(this->toggleButton);
			   this->panel1->Dock = System::Windows::Forms::DockStyle::Left;
			   this->panel1->Location = System::Drawing::Point(0, 0);
			   this->panel1->Name = L"panel1";
			   this->panel1->Size = System::Drawing::Size(232, 750);
			   this->panel1->TabIndex = 2;
			   // 
			   // btnLgOut
			   // 
			   this->btnLgOut->BackColor = System::Drawing::Color::WhiteSmoke;
			   this->btnLgOut->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnLgOut.Image")));
			   this->btnLgOut->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			   this->btnLgOut->Location = System::Drawing::Point(41, 666);
			   this->btnLgOut->Name = L"btnLgOut";
			   this->btnLgOut->Size = System::Drawing::Size(177, 45);
			   this->btnLgOut->TabIndex = 3;
			   this->btnLgOut->Text = L"Log Out";
			   this->btnLgOut->UseVisualStyleBackColor = false;
			   this->btnLgOut->Click += gcnew System::EventHandler(this, &MainForm::btnLogout);
			   // 
			   // btnSchedule
			   // 
			   this->btnSchedule->BackColor = System::Drawing::Color::WhiteSmoke;
			   this->btnSchedule->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnSchedule.Image")));
			   this->btnSchedule->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			   this->btnSchedule->Location = System::Drawing::Point(41, 432);
			   this->btnSchedule->Name = L"btnSchedule";
			   this->btnSchedule->Size = System::Drawing::Size(177, 45);
			   this->btnSchedule->TabIndex = 3;
			   this->btnSchedule->Text = L"Academic Schedule";
			   this->btnSchedule->UseVisualStyleBackColor = false;
			   this->btnSchedule->Click += gcnew System::EventHandler(this, &MainForm::btnAcademicSchedule);
			   // 
			   // btnReport
			   // 
			   this->btnReport->BackColor = System::Drawing::Color::WhiteSmoke;
			   this->btnReport->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnReport.Image")));
			   this->btnReport->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			   this->btnReport->Location = System::Drawing::Point(41, 353);
			   this->btnReport->Name = L"btnReport";
			   this->btnReport->Size = System::Drawing::Size(177, 45);
			   this->btnReport->TabIndex = 3;
			   this->btnReport->Text = L"Financial Report";
			   this->btnReport->UseVisualStyleBackColor = false;
			   this->btnReport->Click += gcnew System::EventHandler(this, &MainForm::btnFinancialReport);
			   // 
			   // btnBudget
			   // 
			   this->btnBudget->BackColor = System::Drawing::Color::WhiteSmoke;
			   this->btnBudget->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnBudget.Image")));
			   this->btnBudget->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			   this->btnBudget->Location = System::Drawing::Point(41, 272);
			   this->btnBudget->Name = L"btnBudget";
			   this->btnBudget->Size = System::Drawing::Size(177, 45);
			   this->btnBudget->TabIndex = 3;
			   this->btnBudget->Text = L"Budget";
			   this->btnBudget->UseVisualStyleBackColor = false;
			   this->btnBudget->Click += gcnew System::EventHandler(this, &MainForm::btnBudget_Click);
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
					   btnBudget->Text = "";
					   btnReport->Text = "";
					   btnSchedule->Text = "";
					   btnLgOut->Text = "";
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
					   btnBudget->Text = "Budget";
					   btnReport->Text = "Financial Report";
					   btnSchedule->Text = "Academic Schedule";
					   btnLgOut->Text = "Log Out";
				   }
			   }
		   }

	private: System::Void btnIncomeExpenses_Click(System::Object^ sender, System::EventArgs^ e) {
		IncomeExpenseForm^ incomeExpenseForm = gcnew IncomeExpenseForm(currentUser);
		incomeExpenseForm->Show();
		this->Hide();
	}
	private: System::Void btnBudget_Click(System::Object^ sender, System::EventArgs^ e) {
		BudgetForm^ budgetForm = gcnew BudgetForm(currentUser);
		budgetForm->Show();
		this->Hide();
	}
private: System::Void btnFinancialReport(System::Object^ sender, System::EventArgs^ e) {
		FinancialReportForm^ financialReportForm = gcnew FinancialReportForm();
		financialReportForm->Show();
		this->Hide();
}
private: System::Void btnAcademicSchedule(System::Object^ sender, System::EventArgs^ e) {
		AcademicScheduleForm^ academicScheduleForm = gcnew AcademicScheduleForm();
		academicScheduleForm->Show();
		this->Hide();
}
private: System::Void btnLogout(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		currentUser = nullptr;
		DatabaseHelper::GetInstance()->CloseConnection();
		LoginForm^ loginForm = gcnew LoginForm();
		loginForm->ShowDialog();
}
};
}