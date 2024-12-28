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
	private: bool isSidebarCollapsed = true;
	private: System::Windows::Forms::PictureBox^ menuIcon;
	private: System::Windows::Forms::PictureBox^ incomeIcon;
	private: System::Windows::Forms::PictureBox^ budgetIcon;
	private: System::Windows::Forms::PictureBox^ scheduleIcon;


	private: System::Windows::Forms::PictureBox^ reportIcon;
	private: System::Windows::Forms::PictureBox^ logOutIcon;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::Label^ appNameLbl;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::PictureBox^ goToReportBtn;
	private: System::Windows::Forms::Label^ lblTotalIncome;
	private: System::Windows::Forms::Label^ lblTotalExpenses;
	private: System::Windows::Forms::Label^ lblSavings;
	private: System::Windows::Forms::Label^ summaryLbl;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::PictureBox^ pictureBox5;



	private: System::Windows::Forms::PictureBox^ pictureBox6;
	private: System::Windows::Forms::Label^ nextDeadlineLabel;



	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ tagLineLbl;
	private: System::Windows::Forms::Timer^ refreshDeadlineTimer;









	public:
		User^ currentUser;
		MainForm(User^ user)
		{
			InitializeComponent();
			isSidebarCollapsed = false;
			panel1->Width = 240;
			appNameLbl->Text = "Personal Organizer";
			tagLineLbl->Text = "Organize your life, Achieve your goals !";
			toggleButton->Text = "Menu";
			btnIncomeExpenses->Text = "Income / Expenses";
			btnBudget->Text = "Budget";
			btnReport->Text = "Financial Report";
			btnSchedule->Text = "Academic Schedule";
			btnLgOut->Text = "Log Out";
			toggleButton->Width = 185;
			btnIncomeExpenses->Width = 185;
			btnBudget->Width = 185;
			btnReport->Width = 185;
			btnSchedule->Width = 185;
			btnLgOut->Width = 185;
			currentUser = user;
            usernameLbl->Text = currentUser->name;
			MainForm_Load(this, gcnew EventArgs());
			LoadNextDeadline();
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










	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Label^ usernameLbl;







	private: System::ComponentModel::IContainer^ components;

#pragma region Windows Form Designer generated code
		   void InitializeComponent(void)
		   {
			   this->components = (gcnew System::ComponentModel::Container());
			   System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MainForm::typeid));
			   this->label1 = (gcnew System::Windows::Forms::Label());
			   this->panel1 = (gcnew System::Windows::Forms::Panel());
			   this->tagLineLbl = (gcnew System::Windows::Forms::Label());
			   this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			   this->appNameLbl = (gcnew System::Windows::Forms::Label());
			   this->logOutIcon = (gcnew System::Windows::Forms::PictureBox());
			   this->scheduleIcon = (gcnew System::Windows::Forms::PictureBox());
			   this->reportIcon = (gcnew System::Windows::Forms::PictureBox());
			   this->budgetIcon = (gcnew System::Windows::Forms::PictureBox());
			   this->incomeIcon = (gcnew System::Windows::Forms::PictureBox());
			   this->menuIcon = (gcnew System::Windows::Forms::PictureBox());
			   this->btnLgOut = (gcnew System::Windows::Forms::Button());
			   this->btnSchedule = (gcnew System::Windows::Forms::Button());
			   this->btnReport = (gcnew System::Windows::Forms::Button());
			   this->btnBudget = (gcnew System::Windows::Forms::Button());
			   this->btnIncomeExpenses = (gcnew System::Windows::Forms::Button());
			   this->toggleButton = (gcnew System::Windows::Forms::Button());
			   this->sidebarTimer = (gcnew System::Windows::Forms::Timer(this->components));
			   this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			   this->usernameLbl = (gcnew System::Windows::Forms::Label());
			   this->panel2 = (gcnew System::Windows::Forms::Panel());
			   this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			   this->label2 = (gcnew System::Windows::Forms::Label());
			   this->label3 = (gcnew System::Windows::Forms::Label());
			   this->label4 = (gcnew System::Windows::Forms::Label());
			   this->goToReportBtn = (gcnew System::Windows::Forms::PictureBox());
			   this->lblTotalIncome = (gcnew System::Windows::Forms::Label());
			   this->lblTotalExpenses = (gcnew System::Windows::Forms::Label());
			   this->lblSavings = (gcnew System::Windows::Forms::Label());
			   this->summaryLbl = (gcnew System::Windows::Forms::Label());
			   this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			   this->panel3 = (gcnew System::Windows::Forms::Panel());
			   this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			   this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			   this->nextDeadlineLabel = (gcnew System::Windows::Forms::Label());
			   this->label11 = (gcnew System::Windows::Forms::Label());
			   this->refreshDeadlineTimer = (gcnew System::Windows::Forms::Timer(this->components));
			   this->panel1->SuspendLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->logOutIcon))->BeginInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->scheduleIcon))->BeginInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->reportIcon))->BeginInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->budgetIcon))->BeginInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->incomeIcon))->BeginInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->menuIcon))->BeginInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			   this->panel2->SuspendLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->goToReportBtn))->BeginInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			   this->panel3->SuspendLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			   this->SuspendLayout();
			   // 
			   // label1
			   // 
			   this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				   | System::Windows::Forms::AnchorStyles::Right));
			   this->label1->BackColor = System::Drawing::Color::Transparent;
			   this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->label1->Location = System::Drawing::Point(349, 41);
			   this->label1->Name = L"label1";
			   this->label1->Size = System::Drawing::Size(249, 59);
			   this->label1->TabIndex = 0;
			   this->label1->Text = L"Welcome";
			   this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			   // 
			   // panel1
			   // 
			   this->panel1->BackColor = System::Drawing::Color::DodgerBlue;
			   this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			   this->panel1->Controls->Add(this->tagLineLbl);
			   this->panel1->Controls->Add(this->pictureBox3);
			   this->panel1->Controls->Add(this->appNameLbl);
			   this->panel1->Controls->Add(this->logOutIcon);
			   this->panel1->Controls->Add(this->scheduleIcon);
			   this->panel1->Controls->Add(this->reportIcon);
			   this->panel1->Controls->Add(this->budgetIcon);
			   this->panel1->Controls->Add(this->incomeIcon);
			   this->panel1->Controls->Add(this->menuIcon);
			   this->panel1->Controls->Add(this->btnLgOut);
			   this->panel1->Controls->Add(this->btnSchedule);
			   this->panel1->Controls->Add(this->btnReport);
			   this->panel1->Controls->Add(this->btnBudget);
			   this->panel1->Controls->Add(this->btnIncomeExpenses);
			   this->panel1->Controls->Add(this->toggleButton);
			   this->panel1->Dock = System::Windows::Forms::DockStyle::Left;
			   this->panel1->Location = System::Drawing::Point(0, 0);
			   this->panel1->Name = L"panel1";
			   this->panel1->Size = System::Drawing::Size(240, 754);
			   this->panel1->TabIndex = 2;
			   // 
			   // tagLineLbl
			   // 
			   this->tagLineLbl->AutoSize = true;
			   this->tagLineLbl->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			   this->tagLineLbl->Location = System::Drawing::Point(36, 143);
			   this->tagLineLbl->Name = L"tagLineLbl";
			   this->tagLineLbl->Size = System::Drawing::Size(237, 16);
			   this->tagLineLbl->TabIndex = 102;
			   this->tagLineLbl->Text = L"Organize your life, Achieve your goals !";
			   // 
			   // pictureBox3
			   // 
			   this->pictureBox3->BackColor = System::Drawing::Color::Transparent;
			   this->pictureBox3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			   this->pictureBox3->Cursor = System::Windows::Forms::Cursors::Default;
			   this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			   this->pictureBox3->Location = System::Drawing::Point(27, 49);
			   this->pictureBox3->Name = L"pictureBox3";
			   this->pictureBox3->Size = System::Drawing::Size(70, 63);
			   this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			   this->pictureBox3->TabIndex = 100;
			   this->pictureBox3->TabStop = false;
			   // 
			   // appNameLbl
			   // 
			   this->appNameLbl->AutoSize = true;
			   this->appNameLbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->appNameLbl->ForeColor = System::Drawing::Color::White;
			   this->appNameLbl->Location = System::Drawing::Point(34, 118);
			   this->appNameLbl->Name = L"appNameLbl";
			   this->appNameLbl->Size = System::Drawing::Size(198, 25);
			   this->appNameLbl->TabIndex = 101;
			   this->appNameLbl->Text = L"Personal Organizer";
			   // 
			   // logOutIcon
			   // 
			   this->logOutIcon->Cursor = System::Windows::Forms::Cursors::Hand;
			   this->logOutIcon->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"logOutIcon.Image")));
			   this->logOutIcon->Location = System::Drawing::Point(36, 674);
			   this->logOutIcon->Name = L"logOutIcon";
			   this->logOutIcon->Size = System::Drawing::Size(30, 40);
			   this->logOutIcon->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			   this->logOutIcon->TabIndex = 4;
			   this->logOutIcon->TabStop = false;
			   this->logOutIcon->Click += gcnew System::EventHandler(this, &MainForm::logOutIcon_Click);
			   // 
			   // scheduleIcon
			   // 
			   this->scheduleIcon->Cursor = System::Windows::Forms::Cursors::Hand;
			   this->scheduleIcon->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"scheduleIcon.Image")));
			   this->scheduleIcon->Location = System::Drawing::Point(36, 548);
			   this->scheduleIcon->Name = L"scheduleIcon";
			   this->scheduleIcon->Size = System::Drawing::Size(30, 40);
			   this->scheduleIcon->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			   this->scheduleIcon->TabIndex = 4;
			   this->scheduleIcon->TabStop = false;
			   this->scheduleIcon->Click += gcnew System::EventHandler(this, &MainForm::scheduleIcon_Click);
			   // 
			   // reportIcon
			   // 
			   this->reportIcon->Cursor = System::Windows::Forms::Cursors::Hand;
			   this->reportIcon->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"reportIcon.Image")));
			   this->reportIcon->Location = System::Drawing::Point(36, 462);
			   this->reportIcon->Name = L"reportIcon";
			   this->reportIcon->Size = System::Drawing::Size(30, 40);
			   this->reportIcon->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			   this->reportIcon->TabIndex = 4;
			   this->reportIcon->TabStop = false;
			   this->reportIcon->Click += gcnew System::EventHandler(this, &MainForm::reportIcon_Click);
			   // 
			   // budgetIcon
			   // 
			   this->budgetIcon->Cursor = System::Windows::Forms::Cursors::Hand;
			   this->budgetIcon->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"budgetIcon.Image")));
			   this->budgetIcon->Location = System::Drawing::Point(36, 382);
			   this->budgetIcon->Name = L"budgetIcon";
			   this->budgetIcon->Size = System::Drawing::Size(30, 40);
			   this->budgetIcon->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			   this->budgetIcon->TabIndex = 4;
			   this->budgetIcon->TabStop = false;
			   this->budgetIcon->Click += gcnew System::EventHandler(this, &MainForm::budgetIcon_Click);
			   // 
			   // incomeIcon
			   // 
			   this->incomeIcon->Cursor = System::Windows::Forms::Cursors::Hand;
			   this->incomeIcon->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"incomeIcon.Image")));
			   this->incomeIcon->Location = System::Drawing::Point(36, 297);
			   this->incomeIcon->Name = L"incomeIcon";
			   this->incomeIcon->Size = System::Drawing::Size(30, 40);
			   this->incomeIcon->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			   this->incomeIcon->TabIndex = 4;
			   this->incomeIcon->TabStop = false;
			   this->incomeIcon->Click += gcnew System::EventHandler(this, &MainForm::incomeIcon_Click);
			   // 
			   // menuIcon
			   // 
			   this->menuIcon->Cursor = System::Windows::Forms::Cursors::Hand;
			   this->menuIcon->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"menuIcon.Image")));
			   this->menuIcon->Location = System::Drawing::Point(36, 212);
			   this->menuIcon->Name = L"menuIcon";
			   this->menuIcon->Size = System::Drawing::Size(30, 40);
			   this->menuIcon->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			   this->menuIcon->TabIndex = 4;
			   this->menuIcon->TabStop = false;
			   this->menuIcon->Click += gcnew System::EventHandler(this, &MainForm::menuIcon_Click);
			   // 
			   // btnLgOut
			   // 
			   this->btnLgOut->BackColor = System::Drawing::Color::DodgerBlue;
			   this->btnLgOut->Cursor = System::Windows::Forms::Cursors::Hand;
			   this->btnLgOut->FlatAppearance->BorderSize = 0;
			   this->btnLgOut->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			   this->btnLgOut->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			   this->btnLgOut->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->btnLgOut->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->btnLgOut->ForeColor = System::Drawing::Color::White;
			   this->btnLgOut->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			   this->btnLgOut->Location = System::Drawing::Point(65, 672);
			   this->btnLgOut->Name = L"btnLgOut";
			   this->btnLgOut->Size = System::Drawing::Size(113, 45);
			   this->btnLgOut->TabIndex = 3;
			   this->btnLgOut->Text = L"Log Out";
			   this->btnLgOut->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			   this->btnLgOut->UseVisualStyleBackColor = false;
			   this->btnLgOut->Click += gcnew System::EventHandler(this, &MainForm::btnLogout);
			   // 
			   // btnSchedule
			   // 
			   this->btnSchedule->BackColor = System::Drawing::Color::DodgerBlue;
			   this->btnSchedule->Cursor = System::Windows::Forms::Cursors::Hand;
			   this->btnSchedule->FlatAppearance->BorderSize = 0;
			   this->btnSchedule->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			   this->btnSchedule->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			   this->btnSchedule->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->btnSchedule->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->btnSchedule->ForeColor = System::Drawing::Color::White;
			   this->btnSchedule->ImageAlign = System::Drawing::ContentAlignment::TopRight;
			   this->btnSchedule->Location = System::Drawing::Point(66, 548);
			   this->btnSchedule->Name = L"btnSchedule";
			   this->btnSchedule->Size = System::Drawing::Size(188, 45);
			   this->btnSchedule->TabIndex = 3;
			   this->btnSchedule->Text = L"Academic Schedule";
			   this->btnSchedule->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			   this->btnSchedule->UseVisualStyleBackColor = false;
			   this->btnSchedule->Click += gcnew System::EventHandler(this, &MainForm::btnAcademicSchedule);
			   // 
			   // btnReport
			   // 
			   this->btnReport->BackColor = System::Drawing::Color::DodgerBlue;
			   this->btnReport->Cursor = System::Windows::Forms::Cursors::Hand;
			   this->btnReport->FlatAppearance->BorderSize = 0;
			   this->btnReport->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			   this->btnReport->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			   this->btnReport->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->btnReport->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->btnReport->ForeColor = System::Drawing::Color::White;
			   this->btnReport->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			   this->btnReport->Location = System::Drawing::Point(66, 459);
			   this->btnReport->Name = L"btnReport";
			   this->btnReport->Size = System::Drawing::Size(167, 45);
			   this->btnReport->TabIndex = 3;
			   this->btnReport->Text = L"Financial Report";
			   this->btnReport->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			   this->btnReport->UseVisualStyleBackColor = false;
			   this->btnReport->Click += gcnew System::EventHandler(this, &MainForm::btnFinancialReport);
			   // 
			   // btnBudget
			   // 
			   this->btnBudget->BackColor = System::Drawing::Color::DodgerBlue;
			   this->btnBudget->Cursor = System::Windows::Forms::Cursors::Hand;
			   this->btnBudget->FlatAppearance->BorderSize = 0;
			   this->btnBudget->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			   this->btnBudget->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			   this->btnBudget->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->btnBudget->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->btnBudget->ForeColor = System::Drawing::Color::White;
			   this->btnBudget->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			   this->btnBudget->Location = System::Drawing::Point(66, 378);
			   this->btnBudget->Name = L"btnBudget";
			   this->btnBudget->Size = System::Drawing::Size(152, 45);
			   this->btnBudget->TabIndex = 3;
			   this->btnBudget->Text = L"Budget";
			   this->btnBudget->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			   this->btnBudget->UseVisualStyleBackColor = false;
			   this->btnBudget->Click += gcnew System::EventHandler(this, &MainForm::btnBudget_Click);
			   // 
			   // btnIncomeExpenses
			   // 
			   this->btnIncomeExpenses->BackColor = System::Drawing::Color::DodgerBlue;
			   this->btnIncomeExpenses->Cursor = System::Windows::Forms::Cursors::Hand;
			   this->btnIncomeExpenses->FlatAppearance->BorderSize = 0;
			   this->btnIncomeExpenses->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			   this->btnIncomeExpenses->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			   this->btnIncomeExpenses->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->btnIncomeExpenses->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->btnIncomeExpenses->ForeColor = System::Drawing::Color::White;
			   this->btnIncomeExpenses->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			   this->btnIncomeExpenses->Location = System::Drawing::Point(66, 297);
			   this->btnIncomeExpenses->Name = L"btnIncomeExpenses";
			   this->btnIncomeExpenses->Size = System::Drawing::Size(177, 45);
			   this->btnIncomeExpenses->TabIndex = 3;
			   this->btnIncomeExpenses->Text = L"Income / Expenses";
			   this->btnIncomeExpenses->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			   this->btnIncomeExpenses->UseVisualStyleBackColor = false;
			   this->btnIncomeExpenses->Click += gcnew System::EventHandler(this, &MainForm::btnIncomeExpenses_Click);
			   // 
			   // toggleButton
			   // 
			   this->toggleButton->BackColor = System::Drawing::Color::DodgerBlue;
			   this->toggleButton->Cursor = System::Windows::Forms::Cursors::Hand;
			   this->toggleButton->FlatAppearance->BorderSize = 0;
			   this->toggleButton->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			   this->toggleButton->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			   this->toggleButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->toggleButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->toggleButton->ForeColor = System::Drawing::Color::White;
			   this->toggleButton->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			   this->toggleButton->Location = System::Drawing::Point(67, 210);
			   this->toggleButton->Name = L"toggleButton";
			   this->toggleButton->Size = System::Drawing::Size(64, 45);
			   this->toggleButton->TabIndex = 99;
			   this->toggleButton->Text = L"Menu";
			   this->toggleButton->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			   this->toggleButton->UseVisualStyleBackColor = false;
			   this->toggleButton->Click += gcnew System::EventHandler(this, &MainForm::toggleButton_Click);
			   // 
			   // sidebarTimer
			   // 
			   this->sidebarTimer->Interval = 10;
			   this->sidebarTimer->Tick += gcnew System::EventHandler(this, &MainForm::sidebarTimer_Tick);
			   // 
			   // pictureBox2
			   // 
			   this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			   this->pictureBox2->Location = System::Drawing::Point(1025, 50);
			   this->pictureBox2->Name = L"pictureBox2";
			   this->pictureBox2->Size = System::Drawing::Size(100, 50);
			   this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			   this->pictureBox2->TabIndex = 5;
			   this->pictureBox2->TabStop = false;
			   this->pictureBox2->Visible = false;
			   // 
			   // usernameLbl
			   // 
			   this->usernameLbl->AutoSize = true;
			   this->usernameLbl->BackColor = System::Drawing::Color::Transparent;
			   this->usernameLbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->usernameLbl->Location = System::Drawing::Point(604, 43);
			   this->usernameLbl->Name = L"usernameLbl";
			   this->usernameLbl->Size = System::Drawing::Size(232, 54);
			   this->usernameLbl->TabIndex = 6;
			   this->usernameLbl->Text = L"username";
			   // 
			   // panel2
			   // 
			   this->panel2->BackColor = System::Drawing::Color::WhiteSmoke;
			   this->panel2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			   this->panel2->Controls->Add(this->pictureBox1);
			   this->panel2->Controls->Add(this->label2);
			   this->panel2->Controls->Add(this->label3);
			   this->panel2->Controls->Add(this->label4);
			   this->panel2->Controls->Add(this->goToReportBtn);
			   this->panel2->Controls->Add(this->lblTotalIncome);
			   this->panel2->Controls->Add(this->lblTotalExpenses);
			   this->panel2->Controls->Add(this->lblSavings);
			   this->panel2->Controls->Add(this->summaryLbl);
			   this->panel2->Location = System::Drawing::Point(358, 154);
			   this->panel2->Name = L"panel2";
			   this->panel2->Size = System::Drawing::Size(397, 334);
			   this->panel2->TabIndex = 4;
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
			   // goToReportBtn
			   // 
			   this->goToReportBtn->BackColor = System::Drawing::Color::DodgerBlue;
			   this->goToReportBtn->Cursor = System::Windows::Forms::Cursors::Hand;
			   this->goToReportBtn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"goToReportBtn.Image")));
			   this->goToReportBtn->Location = System::Drawing::Point(309, 250);
			   this->goToReportBtn->Name = L"goToReportBtn";
			   this->goToReportBtn->Size = System::Drawing::Size(51, 64);
			   this->goToReportBtn->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			   this->goToReportBtn->TabIndex = 4;
			   this->goToReportBtn->TabStop = false;
			   this->goToReportBtn->Click += gcnew System::EventHandler(this, &MainForm::goToReportBtnClick);
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
			   // pictureBox4
			   // 
			   this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			   this->pictureBox4->Location = System::Drawing::Point(495, 418);
			   this->pictureBox4->Name = L"pictureBox4";
			   this->pictureBox4->Size = System::Drawing::Size(506, 420);
			   this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			   this->pictureBox4->TabIndex = 7;
			   this->pictureBox4->TabStop = false;
			   // 
			   // panel3
			   // 
			   this->panel3->BackColor = System::Drawing::Color::WhiteSmoke;
			   this->panel3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			   this->panel3->Controls->Add(this->nextDeadlineLabel);
			   this->panel3->Controls->Add(this->pictureBox5);
			   this->panel3->Controls->Add(this->pictureBox6);
			   this->panel3->Controls->Add(this->label11);
			   this->panel3->Location = System::Drawing::Point(812, 154);
			   this->panel3->Name = L"panel3";
			   this->panel3->Size = System::Drawing::Size(397, 334);
			   this->panel3->TabIndex = 4;
			   // 
			   // pictureBox5
			   // 
			   this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			   this->pictureBox5->Location = System::Drawing::Point(26, 14);
			   this->pictureBox5->Name = L"pictureBox5";
			   this->pictureBox5->Size = System::Drawing::Size(100, 50);
			   this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			   this->pictureBox5->TabIndex = 15;
			   this->pictureBox5->TabStop = false;
			   // 
			   // pictureBox6
			   // 
			   this->pictureBox6->BackColor = System::Drawing::Color::DodgerBlue;
			   this->pictureBox6->Cursor = System::Windows::Forms::Cursors::Hand;
			   this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.Image")));
			   this->pictureBox6->Location = System::Drawing::Point(309, 250);
			   this->pictureBox6->Name = L"pictureBox6";
			   this->pictureBox6->Size = System::Drawing::Size(51, 64);
			   this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			   this->pictureBox6->TabIndex = 4;
			   this->pictureBox6->TabStop = false;
			   this->pictureBox6->Click += gcnew System::EventHandler(this, &MainForm::goToAcademic);
			   // 
			   // nextDeadlineLabel
			   // 
			   this->nextDeadlineLabel->AutoSize = true;
			   this->nextDeadlineLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->nextDeadlineLabel->ForeColor = System::Drawing::Color::Red;
			   this->nextDeadlineLabel->Location = System::Drawing::Point(23, 144);
			   this->nextDeadlineLabel->Name = L"nextDeadlineLabel";
			   this->nextDeadlineLabel->Size = System::Drawing::Size(156, 16);
			   this->nextDeadlineLabel->TabIndex = 16;
			   this->nextDeadlineLabel->Text = L"Next Deadline: Loading...";
			   // 
			   // label11
			   // 
			   this->label11->AutoSize = true;
			   this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->label11->Location = System::Drawing::Point(161, 23);
			   this->label11->Name = L"label11";
			   this->label11->Size = System::Drawing::Size(85, 22);
			   this->label11->TabIndex = 0;
			   this->label11->Text = L"Summary";
			   // 
			   // refreshDeadlineTimer
			   // 
			   this->refreshDeadlineTimer->Enabled = true;
			   this->refreshDeadlineTimer->Interval = 60000;
			   this->refreshDeadlineTimer->Tick += gcnew System::EventHandler(this, &MainForm::refreshDeadlineTimer_Tick);
			   // 
			   // MainForm
			   // 
			   this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			   this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			   this->BackColor = System::Drawing::SystemColors::ControlLightLight;
			   this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			   this->ClientSize = System::Drawing::Size(1264, 754);
			   this->Controls->Add(this->panel3);
			   this->Controls->Add(this->panel2);
			   this->Controls->Add(this->pictureBox4);
			   this->Controls->Add(this->pictureBox2);
			   this->Controls->Add(this->usernameLbl);
			   this->Controls->Add(this->panel1);
			   this->Controls->Add(this->label1);
			   this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			   this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			   this->MaximizeBox = false;
			   this->Name = L"MainForm";
			   this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			   this->Text = L"Dashboard | Personal Organizer";
			   this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &MainForm::MainForm_FormClosing);
			   this->panel1->ResumeLayout(false);
			   this->panel1->PerformLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->logOutIcon))->EndInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->scheduleIcon))->EndInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->reportIcon))->EndInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->budgetIcon))->EndInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->incomeIcon))->EndInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->menuIcon))->EndInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			   this->panel2->ResumeLayout(false);
			   this->panel2->PerformLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->goToReportBtn))->EndInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			   this->panel3->ResumeLayout(false);
			   this->panel3->PerformLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			   this->ResumeLayout(false);
			   this->PerformLayout();

		   }
#pragma endregion

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		IncomeExpenseForm^ incomeExpenseForm = gcnew IncomeExpenseForm(currentUser);
		incomeExpenseForm->Show();
		this->Hide();
	}

	

	private: System::Void toggleButton_Click(System::Object^ sender, System::EventArgs^ e) {
		ToggleSidebar();
	}

		   void ToggleSidebar() {
			   // Toggle collapse/expand state
			   isSidebarCollapsed = !isSidebarCollapsed;
			   sidebarTimer->Start();
		   }

		   System::Void sidebarTimer_Tick(System::Object^ sender, System::EventArgs^ e) {
			   int collapsedWidth = 85;
			   int expandedWidth = 240;
			   int step = 20; // Speed of the collapse/expand effect

			   if (isSidebarCollapsed) {
				   if (panel1->Width > collapsedWidth) {
					   panel1->Width -= step;
				   }
				   else {
					   sidebarTimer->Stop();
					   panel1->Width = collapsedWidth;
					   appNameLbl->Text = "";
					   tagLineLbl->Text = "";
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
					   appNameLbl->Text = "Personal Organizer";
					   tagLineLbl->Text = "Organize your life, Achieve your goals !";
					   toggleButton->Text = "Menu";
					   btnIncomeExpenses->Text = "Income / Expenses";
					   btnBudget->Text = "Budget";
					   btnReport->Text = "Financial Report";
					   btnSchedule->Text = "Academic Schedule";
					   btnLgOut->Text = "Log Out";
					   toggleButton->Width = 185;
					   btnIncomeExpenses->Width = 185;
					   btnBudget->Width = 185;
					   btnReport->Width = 185;
					   btnSchedule->Width = 185;
					   btnLgOut->Width = 185;
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
		FinancialReportForm^ financialReportForm = gcnew FinancialReportForm(currentUser);
		financialReportForm->Show();
		this->Hide();
}
private: System::Void btnAcademicSchedule(System::Object^ sender, System::EventArgs^ e) {
		AcademicScheduleForm^ academicScheduleForm = gcnew AcademicScheduleForm(currentUser);
		academicScheduleForm->Show();
		this->Hide();
}
private: System::Void btnLogout(System::Object^ sender, System::EventArgs^ e) {

	PerformLogout();
}

	   //get total income, expenses and savings from database
	private: System::Void MainForm_Load(System::Object^ sender, System::EventArgs^ e) {
		try {
			if (currentUser == nullptr) {
				MessageBox::Show("User not logged in.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}
			System::DateTime currentDate = System::DateTime::Now;
			int month = currentDate.Month;
			int year = currentDate.Year;
			String^ UserName = currentUser->name;

			SqlConnection^ conn = DatabaseHelper::GetInstance()->GetConnection();

			conn->Open();

			String^ incomeQuery = "SELECT ISNULL(SUM(Amount), 0) AS TotalIncome "
				"FROM Income "
				"WHERE UserName = @UserName AND MONTH(Date) = @Month AND YEAR(Date) = @Year";

			String^ expenseQuery = "SELECT ISNULL(SUM(Amount), 0) AS TotalExpenses "
				"FROM Expense "
				"WHERE UserName = @UserName AND MONTH(Date) = @Month AND YEAR(Date) = @Year";

			SqlCommand^ incomeCmd = gcnew SqlCommand(incomeQuery, conn);
			incomeCmd->Parameters->AddWithValue("@UserName", UserName);
			incomeCmd->Parameters->AddWithValue("@Month", month);
			incomeCmd->Parameters->AddWithValue("@Year", year);

			SqlCommand^ expenseCmd = gcnew SqlCommand(expenseQuery, conn);
			expenseCmd->Parameters->AddWithValue("@UserName", UserName);
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
		catch (Exception^ ex) {
			MessageBox::Show("An error occurred: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		
	}

private: System::Void menuIcon_Click(System::Object^ sender, System::EventArgs^ e) {
	ToggleSidebar();
}
private: System::Void incomeIcon_Click(System::Object^ sender, System::EventArgs^ e) {
	IncomeExpenseForm^ incomeExpenseForm = gcnew IncomeExpenseForm(currentUser);
	incomeExpenseForm->Show();
	this->Hide();
}
private: System::Void budgetIcon_Click(System::Object^ sender, System::EventArgs^ e) {
	BudgetForm^ budgetForm = gcnew BudgetForm(currentUser);
	budgetForm->Show();
	this->Hide();
}
private: System::Void reportIcon_Click(System::Object^ sender, System::EventArgs^ e) {
	FinancialReportForm^ financialReportForm = gcnew FinancialReportForm(currentUser);
	financialReportForm->Show();
	this->Hide();
}
private: System::Void scheduleIcon_Click(System::Object^ sender, System::EventArgs^ e) {
	AcademicScheduleForm^ academicScheduleForm = gcnew AcademicScheduleForm(currentUser);
	academicScheduleForm->Show();
	this->Hide();
}
private: System::Void logOutIcon_Click(System::Object^ sender, System::EventArgs^ e) {

	PerformLogout();
}
private: System::Void goToReportBtnClick(System::Object^ sender, System::EventArgs^ e) {
	FinancialReportForm^ financialReportForm = gcnew FinancialReportForm(currentUser);
	financialReportForm->Show();
	this->Hide();
}
	   private: void PerformLogout() {
    lblTotalIncome->Text = "LKR 0.00";
    lblTotalExpenses->Text = "LKR 0.00";
    lblSavings->Text = "LKR 0.00";

    currentUser = nullptr;
    DatabaseHelper::GetInstance()->CloseConnection();

    this->Hide();

    LoginForm^ loginForm = gcnew LoginForm();
    if (loginForm->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
        User^ loggedInUser = loginForm->GetLoggedInUser();
        if (loggedInUser != nullptr) {
            this->currentUser = loggedInUser;
            usernameLbl->Text = currentUser->name;

            MainForm_Load(this, gcnew EventArgs());

            this->Show();
        }
    } else {
        Application::Exit();
    }
};
private: System::Void goToAcademic(System::Object^ sender, System::EventArgs^ e) {
	AcademicScheduleForm^ academicScheduleForm = gcnew AcademicScheduleForm(currentUser);
	academicScheduleForm->Show();
	this->Hide();
}
	   private: System::Void LoadNextDeadline() {
		   // Initialize variables to hold the next deadline details
		   String^ nextDeadlineTitle = "No upcoming deadlines.";
		   TimeSpan remainingTime;

		   // Get the current date and time
		   DateTime currentDate = DateTime::Now.Date;
		   TimeSpan currentTime = DateTime::Now.TimeOfDay;

		   // Database query to get the next due deadline
		   String^ query = "SELECT TOP 1 Title, Date, Time "
			   "FROM AcademicSchedule "
			   "WHERE Type = 'Deadline' AND (Date > @Today OR (Date = @Today AND Time > @CurrentTime)) "
			   "ORDER BY Date ASC, Time ASC;";

		   DatabaseHelper^ dbHelper = DatabaseHelper::GetInstance();

		   try {
			   if (dbHelper->OpenConnection()) {
				   SqlCommand^ command = gcnew SqlCommand(query, dbHelper->GetConnection());
				   command->Parameters->AddWithValue("@Today", currentDate);
				   command->Parameters->AddWithValue("@CurrentTime", currentTime);

				   SqlDataReader^ reader = command->ExecuteReader();

				   if (reader->Read()) {
					   // Read the next deadline details
					   nextDeadlineTitle = reader["Title"]->ToString();
					   DateTime deadlineDate = Convert::ToDateTime(reader["Date"]);
					   TimeSpan deadlineTime = TimeSpan::Parse(reader["Time"]->ToString());

					   // Calculate the remaining time
					   DateTime deadlineDateTime = deadlineDate + deadlineTime;
					   remainingTime = deadlineDateTime - DateTime::Now;

					   // Format remaining time
					   String^ remainingTimeText = String::Format("{0} days, {1} hours, {2} minutes",
						   remainingTime.Days,
						   remainingTime.Hours,
						   remainingTime.Minutes);

					   // Update the label text
					   nextDeadlineLabel->Text = "Next Deadline: " + nextDeadlineTitle + "\nRemaining Time: " + remainingTimeText;
				   }
				   else {
					   // No upcoming deadlines
					   nextDeadlineLabel->Text = "Next Deadline: No upcoming deadlines.";
				   }

				   reader->Close();
				   dbHelper->CloseConnection();
			   }
		   }
		   catch (Exception^ ex) {
			   nextDeadlineLabel->Text = "Error loading next deadline.";
		   }
	   }
	private: System::Void refreshDeadlineTimer_Tick(System::Object^ sender, System::EventArgs^ e) {
				  LoadNextDeadline();
	}

private: System::Void MainForm_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
	DatabaseHelper::GetInstance()->CloseConnection();
	Application::ExitThread();
	Application::Exit();
}
};
}