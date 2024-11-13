#pragma once

#include "DatabaseHelper.h"
#include "User.h"
//#include "MainForm.h"
#include "BudgetForm.h"


namespace PersonalOrganizerApp {
	//ref class MainForm;

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for IncomeExpenseForm
	/// </summary>
	/// 
	 
	public ref class IncomeExpenseForm : public System::Windows::Forms::Form
	{
	private:
		User^ user;
	public:
		IncomeExpenseForm(User^ currentUser)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			incomeDataGridView->Visible = false;
			expenseDataGridView->Visible = false;
			this->user = currentUser;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~IncomeExpenseForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;





	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::TabPage^ tabPage2;

	private: System::Windows::Forms::TabPage^ tabPage1;


	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ AddButton1;


	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker2;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Button^ AddButton2;

	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::DataGridView^ incomeDataGridView;
	private: System::Windows::Forms::DataGridView^ expenseDataGridView;

	private: System::Windows::Forms::Button^ ShowDatabtn2;
	private: System::Windows::Forms::Button^ ShowDatabtn1;
	private: System::Windows::Forms::Button^ HideDatabtn2;
	private: System::Windows::Forms::Button^ HideDatabtn1;
	private: System::Windows::Forms::PictureBox^ backArrow;







	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(IncomeExpenseForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->HideDatabtn2 = (gcnew System::Windows::Forms::Button());
			this->ShowDatabtn2 = (gcnew System::Windows::Forms::Button());
			this->incomeDataGridView = (gcnew System::Windows::Forms::DataGridView());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->AddButton1 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->HideDatabtn1 = (gcnew System::Windows::Forms::Button());
			this->expenseDataGridView = (gcnew System::Windows::Forms::DataGridView());
			this->ShowDatabtn1 = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->AddButton2 = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker2 = (gcnew System::Windows::Forms::DateTimePicker());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->backArrow = (gcnew System::Windows::Forms::PictureBox());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->incomeDataGridView))->BeginInit();
			this->groupBox2->SuspendLayout();
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->expenseDataGridView))->BeginInit();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->backArrow))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(432, 56);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(217, 29);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Income / Expenses";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->tabControl1->Location = System::Drawing::Point(142, 138);
			this->tabControl1->Multiline = true;
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(804, 805);
			this->tabControl1->TabIndex = 2;
			this->tabControl1->SelectedIndexChanged += gcnew System::EventHandler(this, &IncomeExpenseForm::tabControl1_SelectedIndexChanged);
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->HideDatabtn2);
			this->tabPage1->Controls->Add(this->ShowDatabtn2);
			this->tabPage1->Controls->Add(this->incomeDataGridView);
			this->tabPage1->Controls->Add(this->groupBox2);
			this->tabPage1->Cursor = System::Windows::Forms::Cursors::Default;
			this->tabPage1->Location = System::Drawing::Point(4, 25);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(6);
			this->tabPage1->Size = System::Drawing::Size(796, 776);
			this->tabPage1->TabIndex = 1;
			this->tabPage1->Text = L"Income";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// HideDatabtn2
			// 
			this->HideDatabtn2->BackColor = System::Drawing::Color::SkyBlue;
			this->HideDatabtn2->Location = System::Drawing::Point(136, 527);
			this->HideDatabtn2->Name = L"HideDatabtn2";
			this->HideDatabtn2->Padding = System::Windows::Forms::Padding(5);
			this->HideDatabtn2->Size = System::Drawing::Size(90, 34);
			this->HideDatabtn2->TabIndex = 8;
			this->HideDatabtn2->Text = L"Hide Data";
			this->HideDatabtn2->UseVisualStyleBackColor = false;
			this->HideDatabtn2->Click += gcnew System::EventHandler(this, &IncomeExpenseForm::HideDatabtn2_Click);
			// 
			// ShowDatabtn2
			// 
			this->ShowDatabtn2->BackColor = System::Drawing::Color::SkyBlue;
			this->ShowDatabtn2->Location = System::Drawing::Point(29, 527);
			this->ShowDatabtn2->Name = L"ShowDatabtn2";
			this->ShowDatabtn2->Padding = System::Windows::Forms::Padding(5);
			this->ShowDatabtn2->Size = System::Drawing::Size(90, 34);
			this->ShowDatabtn2->TabIndex = 8;
			this->ShowDatabtn2->Text = L"Show Data";
			this->ShowDatabtn2->UseVisualStyleBackColor = false;
			this->ShowDatabtn2->Click += gcnew System::EventHandler(this, &IncomeExpenseForm::ShowDatabtn2_Click);
			// 
			// incomeDataGridView
			// 
			this->incomeDataGridView->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->incomeDataGridView->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->incomeDataGridView->BackgroundColor = System::Drawing::SystemColors::ButtonHighlight;
			this->incomeDataGridView->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->incomeDataGridView->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->incomeDataGridView->Enabled = false;
			this->incomeDataGridView->Location = System::Drawing::Point(29, 583);
			this->incomeDataGridView->Name = L"incomeDataGridView";
			this->incomeDataGridView->ReadOnly = true;
			this->incomeDataGridView->RowHeadersWidth = 51;
			this->incomeDataGridView->RowTemplate->Height = 24;
			this->incomeDataGridView->Size = System::Drawing::Size(734, 174);
			this->incomeDataGridView->TabIndex = 3;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->button3);
			this->groupBox2->Controls->Add(this->AddButton1);
			this->groupBox2->Controls->Add(this->textBox2);
			this->groupBox2->Controls->Add(this->comboBox1);
			this->groupBox2->Controls->Add(this->textBox1);
			this->groupBox2->Controls->Add(this->label7);
			this->groupBox2->Controls->Add(this->label6);
			this->groupBox2->Controls->Add(this->label5);
			this->groupBox2->Controls->Add(this->label4);
			this->groupBox2->Controls->Add(this->dateTimePicker1);
			this->groupBox2->Controls->Add(this->label3);
			this->groupBox2->Location = System::Drawing::Point(175, 87);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(431, 412);
			this->groupBox2->TabIndex = 2;
			this->groupBox2->TabStop = false;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::SkyBlue;
			this->button3->Location = System::Drawing::Point(88, 344);
			this->button3->Name = L"button3";
			this->button3->Padding = System::Windows::Forms::Padding(5);
			this->button3->Size = System::Drawing::Size(90, 34);
			this->button3->TabIndex = 6;
			this->button3->Text = L"CLEAR";
			this->button3->UseVisualStyleBackColor = false;
			// 
			// AddButton1
			// 
			this->AddButton1->BackColor = System::Drawing::Color::SkyBlue;
			this->AddButton1->Location = System::Drawing::Point(240, 344);
			this->AddButton1->Name = L"AddButton1";
			this->AddButton1->Padding = System::Windows::Forms::Padding(5);
			this->AddButton1->Size = System::Drawing::Size(90, 34);
			this->AddButton1->TabIndex = 6;
			this->AddButton1->Text = L"ADD";
			this->AddButton1->UseVisualStyleBackColor = false;
			this->AddButton1->Click += gcnew System::EventHandler(this, &IncomeExpenseForm::AddButton1_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(165, 281);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(200, 22);
			this->textBox2->TabIndex = 5;
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(4) {
				L"job", L"allowance from parents", L"scholarships",
					L"student aid"
			});
			this->comboBox1->Location = System::Drawing::Point(165, 167);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(200, 24);
			this->comboBox1->TabIndex = 4;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(165, 227);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(200, 22);
			this->textBox1->TabIndex = 3;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(49, 288);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(52, 16);
			this->label7->TabIndex = 2;
			this->label7->Text = L"Amount";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(49, 170);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(50, 16);
			this->label6->TabIndex = 2;
			this->label6->Text = L"Source";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(49, 227);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(75, 16);
			this->label5->TabIndex = 2;
			this->label5->Text = L"Description";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(49, 109);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(36, 16);
			this->label4->TabIndex = 2;
			this->label4->Text = L"Date";
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Location = System::Drawing::Point(165, 109);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(200, 22);
			this->dateTimePicker1->TabIndex = 1;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(162, 45);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(82, 25);
			this->label3->TabIndex = 0;
			this->label3->Text = L"Income";
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->HideDatabtn1);
			this->tabPage2->Controls->Add(this->expenseDataGridView);
			this->tabPage2->Controls->Add(this->ShowDatabtn1);
			this->tabPage2->Controls->Add(this->groupBox1);
			this->tabPage2->Cursor = System::Windows::Forms::Cursors::Default;
			this->tabPage2->Location = System::Drawing::Point(4, 25);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(6);
			this->tabPage2->Size = System::Drawing::Size(796, 776);
			this->tabPage2->TabIndex = 0;
			this->tabPage2->Text = L"Expenses";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// HideDatabtn1
			// 
			this->HideDatabtn1->BackColor = System::Drawing::Color::SkyBlue;
			this->HideDatabtn1->Location = System::Drawing::Point(136, 527);
			this->HideDatabtn1->Name = L"HideDatabtn1";
			this->HideDatabtn1->Padding = System::Windows::Forms::Padding(5);
			this->HideDatabtn1->Size = System::Drawing::Size(90, 34);
			this->HideDatabtn1->TabIndex = 9;
			this->HideDatabtn1->Text = L"Hide Data";
			this->HideDatabtn1->UseVisualStyleBackColor = false;
			this->HideDatabtn1->Click += gcnew System::EventHandler(this, &IncomeExpenseForm::HideDatabtn1_Click);
			// 
			// expenseDataGridView
			// 
			this->expenseDataGridView->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->expenseDataGridView->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->expenseDataGridView->BackgroundColor = System::Drawing::SystemColors::ButtonHighlight;
			this->expenseDataGridView->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->expenseDataGridView->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->expenseDataGridView->Location = System::Drawing::Point(29, 583);
			this->expenseDataGridView->Name = L"expenseDataGridView";
			this->expenseDataGridView->ReadOnly = true;
			this->expenseDataGridView->RowHeadersWidth = 51;
			this->expenseDataGridView->RowTemplate->Height = 24;
			this->expenseDataGridView->Size = System::Drawing::Size(734, 174);
			this->expenseDataGridView->TabIndex = 4;
			// 
			// ShowDatabtn1
			// 
			this->ShowDatabtn1->BackColor = System::Drawing::Color::SkyBlue;
			this->ShowDatabtn1->Location = System::Drawing::Point(29, 527);
			this->ShowDatabtn1->Name = L"ShowDatabtn1";
			this->ShowDatabtn1->Padding = System::Windows::Forms::Padding(5);
			this->ShowDatabtn1->Size = System::Drawing::Size(90, 34);
			this->ShowDatabtn1->TabIndex = 7;
			this->ShowDatabtn1->Text = L"Show Data";
			this->ShowDatabtn1->UseVisualStyleBackColor = false;
			this->ShowDatabtn1->Click += gcnew System::EventHandler(this, &IncomeExpenseForm::ShowDatabtn1_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->button4);
			this->groupBox1->Controls->Add(this->AddButton2);
			this->groupBox1->Controls->Add(this->textBox3);
			this->groupBox1->Controls->Add(this->comboBox2);
			this->groupBox1->Controls->Add(this->textBox4);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label8);
			this->groupBox1->Controls->Add(this->label9);
			this->groupBox1->Controls->Add(this->label10);
			this->groupBox1->Controls->Add(this->dateTimePicker2);
			this->groupBox1->Controls->Add(this->label11);
			this->groupBox1->Location = System::Drawing::Point(175, 87);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(431, 412);
			this->groupBox1->TabIndex = 3;
			this->groupBox1->TabStop = false;
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::SkyBlue;
			this->button4->Location = System::Drawing::Point(88, 344);
			this->button4->Name = L"button4";
			this->button4->Padding = System::Windows::Forms::Padding(5);
			this->button4->Size = System::Drawing::Size(90, 34);
			this->button4->TabIndex = 8;
			this->button4->Text = L"CLEAR";
			this->button4->UseVisualStyleBackColor = false;
			// 
			// AddButton2
			// 
			this->AddButton2->BackColor = System::Drawing::Color::SkyBlue;
			this->AddButton2->Location = System::Drawing::Point(240, 344);
			this->AddButton2->Name = L"AddButton2";
			this->AddButton2->Padding = System::Windows::Forms::Padding(5);
			this->AddButton2->Size = System::Drawing::Size(90, 34);
			this->AddButton2->TabIndex = 7;
			this->AddButton2->Text = L"ADD";
			this->AddButton2->UseVisualStyleBackColor = false;
			this->AddButton2->Click += gcnew System::EventHandler(this, &IncomeExpenseForm::AddButton2_Click);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(165, 281);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(200, 22);
			this->textBox3->TabIndex = 5;
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(6) {
				L"food", L"entertainment", L"traveling", L"clothing",
					L"education equipment", L"university fees"
			});
			this->comboBox2->Location = System::Drawing::Point(165, 226);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(200, 24);
			this->comboBox2->TabIndex = 4;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(165, 168);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(200, 22);
			this->textBox4->TabIndex = 3;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(49, 288);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(52, 16);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Amount";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(49, 229);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(62, 16);
			this->label8->TabIndex = 2;
			this->label8->Text = L"Category";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(49, 171);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(75, 16);
			this->label9->TabIndex = 2;
			this->label9->Text = L"Description";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(49, 109);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(36, 16);
			this->label10->TabIndex = 2;
			this->label10->Text = L"Date";
			// 
			// dateTimePicker2
			// 
			this->dateTimePicker2->Location = System::Drawing::Point(165, 109);
			this->dateTimePicker2->Name = L"dateTimePicker2";
			this->dateTimePicker2->Size = System::Drawing::Size(200, 22);
			this->dateTimePicker2->TabIndex = 1;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(162, 45);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(107, 25);
			this->label11->TabIndex = 0;
			this->label11->Text = L"Expenses";
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(998, 29);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(126, 125);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 1;
			this->pictureBox2->TabStop = false;
			// 
			// backArrow
			// 
			this->backArrow->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"backArrow.Image")));
			this->backArrow->Location = System::Drawing::Point(57, 56);
			this->backArrow->Name = L"backArrow";
			this->backArrow->Size = System::Drawing::Size(45, 38);
			this->backArrow->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->backArrow->TabIndex = 3;
			this->backArrow->TabStop = false;
			this->backArrow->Click += gcnew System::EventHandler(this, &IncomeExpenseForm::backArrow_Click);
			// 
			// IncomeExpenseForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1146, 940);
			this->Controls->Add(this->backArrow);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->tabControl1);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"IncomeExpenseForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Income / Expenses";
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->incomeDataGridView))->EndInit();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->expenseDataGridView))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->backArrow))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void tabControl1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	// Check if switching to tabPage1
	if (tabControl1->SelectedTab == tabPage1) {
		// Clear controls in tabPage1 (Income)
		textBox1->Clear(); // Clear any text boxes for Income
		// Add other necessary controls for tabPage1 if needed
	}
	// Check if switching to tabPage2
	else if (tabControl1->SelectedTab == tabPage2) {
		// Clear controls in tabPage2 (Expenses)
		dateTimePicker1->Value = DateTime::Now; // Reset date to today
		textBox1->Clear(); // Clear Description
		textBox2->Clear(); // Clear Amount
		comboBox1->SelectedIndex = -1; // Reset combo box selection
		incomeDataGridView->Visible = false;
		expenseDataGridView->Visible = false;
	}
}
	   // Method to load Income data into DataGridView
	   void LoadIncomeData() {
		   String^ query = "SELECT * FROM Income";
		   DatabaseHelper^ dbHelper = DatabaseHelper::GetInstance();

		   // Fetch data using DatabaseHelper's ExecuteQuery method
		   DataTable^ dataTable = dbHelper->ExecuteQuery(query);

		   // Set the DataGridView's DataSource to the DataTable
		   incomeDataGridView->DataSource = dataTable;
	   }

	   // Method to load Expense data into DataGridView
	   void LoadExpenseData() {
		   String^ query = "SELECT * FROM Expense";
		   DatabaseHelper^ dbHelper = DatabaseHelper::GetInstance();

		   // Fetch data using DatabaseHelper's ExecuteQuery method
		   DataTable^ dataTable = dbHelper->ExecuteQuery(query);

		   // Set the DataGridView's DataSource to the DataTable
		   expenseDataGridView->DataSource = dataTable;
	   }

private: System::Void ShowDatabtn2_Click(System::Object^ sender, System::EventArgs^ e) {
		incomeDataGridView->Visible = true;
		LoadIncomeData();
}
private: System::Void ShowDatabtn1_Click(System::Object^ sender, System::EventArgs^ e) {
		expenseDataGridView->Visible = true;
		LoadExpenseData();
}
private: System::Void AddButton1_Click(System::Object^ sender, System::EventArgs^ e) {

			// Get the values from the controls
			String^ date = dateTimePicker1->Value.ToString("yyyy-MM-dd");
			String^ source = comboBox1->Text;
			String^ description = textBox1->Text;
			String^ amount = textBox2->Text;

			// Check if any of the fields are empty
			if (date == "" || source == "" || description == "" || amount == "") {
				MessageBox::Show("Please fill in all fields", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}

			// Create the query
			String^ query = "INSERT INTO Income (Date, Source, Description, Amount) VALUES ('" + date + "', '" + source + "', '" + description + "', '" + amount + "')";
			DatabaseHelper^ dbHelper = DatabaseHelper::GetInstance();

			// Execute the query
			dbHelper->ExecuteQuery(query);

			// Show success message
			MessageBox::Show("Income added successfully", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);

			// Clear the controls
			dateTimePicker1->Value = DateTime::Now;
			comboBox1->SelectedIndex = -1;
			textBox1->Clear();
			textBox2->Clear();
	}
private: System::Void AddButton2_Click(System::Object^ sender, System::EventArgs^ e) {
			// Get the values from the controls
			String^ date = dateTimePicker2->Value.ToString("yyyy-MM-dd");
			String^ category = comboBox2->Text;
			String^ description = textBox4->Text;
			String^ amount = textBox3->Text;

			// Check if any of the fields are empty
			if (date == "" || category == "" || description == "" || amount == "") {
				MessageBox::Show("Please fill in all fields", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}

			// Create the query
			String^ query = "INSERT INTO Expense (Date, Category, Description, Amount) VALUES ('" + date + "', '" + category + "', '" + description + "', '" + amount + "')";
			DatabaseHelper^ dbHelper = DatabaseHelper::GetInstance();

			// Execute the query
			dbHelper->ExecuteQuery(query);

			// Show success message
			MessageBox::Show("Expense added successfully", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);

			// Check if budget is exceeded
			BudgetForm^ budgetForm = gcnew BudgetForm(user);
			budgetForm->CheckBudgets();  // Call CheckBudgets to verify if the new expense exceeds any budget

			// Clear the controls
			dateTimePicker2->Value = DateTime::Now;
			comboBox2->SelectedIndex = -1;
			textBox4->Clear();
			textBox3->Clear();
		}

	private: System::Void HideDatabtn1_Click(System::Object^ sender, System::EventArgs^ e) {
			expenseDataGridView->Visible = false;
	}
	private: System::Void HideDatabtn2_Click(System::Object^ sender, System::EventArgs^ e) {
			incomeDataGridView->Visible = false;
	}
	private: System::Void backArrow_Click(System::Object^ sender, System::EventArgs^ e);
};
};