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
			MainForm_Load(this, gcnew EventArgs());
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

	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ toggleButton;
	private: System::Windows::Forms::Timer^ sidebarTimer;
	private: System::Windows::Forms::Button^ btnIncomeExpenses;
	private: System::Windows::Forms::Button^ btnBudget;
	private: System::Windows::Forms::Button^ btnReport;
	private: System::Windows::Forms::Button^ btnSchedule;
	private: System::Windows::Forms::Button^ btnLgOut;

	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ summaryLbl;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ lblTotalIncome;
	private: System::Windows::Forms::Label^ lblTotalExpenses;
	private: System::Windows::Forms::Label^ lblSavings;
	private: System::Windows::Forms::PictureBox^ pictureBox1;





	private: System::ComponentModel::IContainer^ components;

#pragma region Windows Form Designer generated code
		   void InitializeComponent(void)
		   {
			   this->components = (gcnew System::ComponentModel::Container());
			   System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MainForm::typeid));
			   this->label1 = (gcnew System::Windows::Forms::Label());
			   this->panel1 = (gcnew System::Windows::Forms::Panel());
			   this->btnLgOut = (gcnew System::Windows::Forms::Button());
			   this->btnSchedule = (gcnew System::Windows::Forms::Button());
			   this->btnReport = (gcnew System::Windows::Forms::Button());
			   this->btnBudget = (gcnew System::Windows::Forms::Button());
			   this->btnIncomeExpenses = (gcnew System::Windows::Forms::Button());
			   this->toggleButton = (gcnew System::Windows::Forms::Button());
			   this->sidebarTimer = (gcnew System::Windows::Forms::Timer(this->components));
			   this->panel2 = (gcnew System::Windows::Forms::Panel());
			   this->summaryLbl = (gcnew System::Windows::Forms::Label());
			   this->label2 = (gcnew System::Windows::Forms::Label());
			   this->label3 = (gcnew System::Windows::Forms::Label());
			   this->label4 = (gcnew System::Windows::Forms::Label());
			   this->lblTotalIncome = (gcnew System::Windows::Forms::Label());
			   this->lblTotalExpenses = (gcnew System::Windows::Forms::Label());
			   this->lblSavings = (gcnew System::Windows::Forms::Label());
			   this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			   this->panel1->SuspendLayout();
			   this->panel2->SuspendLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
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
			   // panel2
			   // 
			   this->panel2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			   this->panel2->Controls->Add(this->pictureBox1);
			   this->panel2->Controls->Add(this->label2);
			   this->panel2->Controls->Add(this->label3);
			   this->panel2->Controls->Add(this->label4);
			   this->panel2->Controls->Add(this->lblTotalIncome);
			   this->panel2->Controls->Add(this->lblTotalExpenses);
			   this->panel2->Controls->Add(this->lblSavings);
			   this->panel2->Controls->Add(this->summaryLbl);
			   this->panel2->Location = System::Drawing::Point(454, 128);
			   this->panel2->Name = L"panel2";
			   this->panel2->Size = System::Drawing::Size(401, 290);
			   this->panel2->TabIndex = 4;
			   // 
			   // summaryLbl
			   // 
			   this->summaryLbl->AutoSize = true;
			   this->summaryLbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->summaryLbl->Location = System::Drawing::Point(161, 23);
			   this->summaryLbl->Name = L"summaryLbl";
			   this->summaryLbl->Size = System::Drawing::Size(85, 22);
			   this->summaryLbl->TabIndex = 0;
			   this->summaryLbl->Text = L"Summary";
			   // 
			   // label2
			   // 
			   this->label2->AutoSize = true;
			   this->label2->Location = System::Drawing::Point(85, 102);
			   this->label2->Name = L"label2";
			   this->label2->Size = System::Drawing::Size(85, 16);
			   this->label2->TabIndex = 9;
			   this->label2->Text = L"Total Income";
			   // 
			   // label3
			   // 
			   this->label3->AutoSize = true;
			   this->label3->Location = System::Drawing::Point(85, 158);
			   this->label3->Name = L"label3";
			   this->label3->Size = System::Drawing::Size(101, 16);
			   this->label3->TabIndex = 10;
			   this->label3->Text = L"Total Expenses";
			   // 
			   // label4
			   // 
			   this->label4->AutoSize = true;
			   this->label4->Location = System::Drawing::Point(85, 207);
			   this->label4->Name = L"label4";
			   this->label4->Size = System::Drawing::Size(56, 16);
			   this->label4->TabIndex = 11;
			   this->label4->Text = L"Savings";
			   // 
			   // lblTotalIncome
			   // 
			   this->lblTotalIncome->AutoSize = true;
			   this->lblTotalIncome->Location = System::Drawing::Point(231, 102);
			   this->lblTotalIncome->Name = L"lblTotalIncome";
			   this->lblTotalIncome->Size = System::Drawing::Size(96, 16);
			   this->lblTotalIncome->TabIndex = 12;
			   this->lblTotalIncome->Text = L"lblTotalIncome";
			   // 
			   // lblTotalExpenses
			   // 
			   this->lblTotalExpenses->AutoSize = true;
			   this->lblTotalExpenses->Location = System::Drawing::Point(231, 158);
			   this->lblTotalExpenses->Name = L"lblTotalExpenses";
			   this->lblTotalExpenses->Size = System::Drawing::Size(112, 16);
			   this->lblTotalExpenses->TabIndex = 13;
			   this->lblTotalExpenses->Text = L"lblTotalExpenses";
			   // 
			   // lblSavings
			   // 
			   this->lblSavings->AutoSize = true;
			   this->lblSavings->Location = System::Drawing::Point(231, 207);
			   this->lblSavings->Name = L"lblSavings";
			   this->lblSavings->Size = System::Drawing::Size(70, 16);
			   this->lblSavings->TabIndex = 14;
			   this->lblSavings->Text = L"lblSavings";
			   // 
			   // pictureBox1
			   // 
			   this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			   this->pictureBox1->Location = System::Drawing::Point(26, 14);
			   this->pictureBox1->Name = L"pictureBox1";
			   this->pictureBox1->Size = System::Drawing::Size(100, 50);
			   this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			   this->pictureBox1->TabIndex = 15;
			   this->pictureBox1->TabStop = false;
			   // 
			   // MainForm
			   // 
			   this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			   this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			   this->ClientSize = System::Drawing::Size(999, 750);
			   this->Controls->Add(this->panel2);
			   this->Controls->Add(this->panel1);
			   this->Controls->Add(this->label1);
			   this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			   this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			   this->MaximizeBox = false;
			   this->Name = L"MainForm";
			   this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			   this->Text = L"Dashboard";
			   this->panel1->ResumeLayout(false);
			   this->panel2->ResumeLayout(false);
			   this->panel2->PerformLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
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

	   //get total income, expenses and savings from database
	private: System::Void MainForm_Load(System::Object^ sender, System::EventArgs^ e) {
		System::DateTime currentDate = System::DateTime::Now;
		int month = currentDate.Month;
		int year = currentDate.Year;
		SqlConnection^ conn = DatabaseHelper::GetInstance()->GetConnection();

		conn->Open();

		// Define queries
		String^ incomeQuery = "SELECT ISNULL(SUM(Amount), 0) AS TotalIncome "
			"FROM Income "
			"WHERE MONTH(Date) = @Month AND YEAR(Date) = @Year";

		String^ expenseQuery = "SELECT ISNULL(SUM(Amount), 0) AS TotalExpenses "
			"FROM Expense "
			"WHERE MONTH(Date) = @Month AND YEAR(Date) = @Year";

		SqlCommand^ incomeCmd = gcnew SqlCommand(incomeQuery, conn);
		incomeCmd->Parameters->AddWithValue("@Month", month);
		incomeCmd->Parameters->AddWithValue("@Year", year);

		SqlCommand^ expenseCmd = gcnew SqlCommand(expenseQuery, conn);
		expenseCmd->Parameters->AddWithValue("@Month", month);
		expenseCmd->Parameters->AddWithValue("@Year", year);


		Decimal totalIncome = 0;
		Decimal totalExpenses = 0;

		// Execute Income Query
		SqlDataReader^ incomeReader = incomeCmd->ExecuteReader();
		if (incomeReader->Read()) {

			totalIncome = Convert::ToDecimal(incomeReader["TotalIncome"]);
			//totalIncome = incomeReader["TotalIncome"]->ToDecimal();
		}
		incomeReader->Close();

		// Execute Expense Query
		SqlDataReader^ expenseReader = expenseCmd->ExecuteReader();
		if (expenseReader->Read()) {

			totalExpenses = Convert::ToDecimal(expenseReader["TotalExpenses"]);
			//totalExpenses = expenseReader["TotalExpenses"]->ToDecimal();
		}
		expenseReader->Close();

		conn->Close();

		//Decimal savings = totalIncome - totalExpenses;
		Decimal savings = Decimal::Subtract(totalIncome, totalExpenses);

		NumberFormatInfo^ lkrFormat = gcnew NumberFormatInfo();
		lkrFormat->CurrencySymbol = "LKR ";
		lkrFormat->CurrencyNegativePattern = 1;  // This controls the negative format, e.g., "-LKR 1000"
		lkrFormat->CurrencyPositivePattern = 0;  // Optional, controls the positive format
		lkrFormat->NumberNegativePattern = 1;  // Explicitly set negative number format to use the minus symbol

		// For culture settings
		CultureInfo^ culture = gcnew CultureInfo("en-US");
		culture->NumberFormat = lkrFormat;


		// Display the results
		lblTotalIncome->Text = totalIncome.ToString("C", culture);
		lblTotalExpenses->Text = totalExpenses.ToString("C", culture);
		lblSavings->Text = savings.ToString("C", culture);
	}

};
}