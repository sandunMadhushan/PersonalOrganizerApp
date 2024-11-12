#pragma once
#include "User.h"
#include "DatabaseHelper.h"

namespace PersonalOrganizerApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for BudgetForm
	/// </summary>
	public ref class BudgetForm : public System::Windows::Forms::Form
	{
	private:
		User^ user;
	public:
		BudgetForm(User^ currentUser)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			this->user = currentUser;
			budgetDataGridView->Visible = false;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~BudgetForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ budgetAmountTextBox;
	protected:

	protected:

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ComboBox^ categoryComboBox;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::DataGridView^ budgetDataGridView;
	private: System::Windows::Forms::Button^ AddButton;

	private: System::Windows::Forms::PictureBox^ backArrow;
	private: System::Windows::Forms::Button^ showDataBtn;
	private: System::Windows::Forms::GroupBox^ groupBox1;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(BudgetForm::typeid));
			this->budgetAmountTextBox = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->categoryComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->budgetDataGridView = (gcnew System::Windows::Forms::DataGridView());
			this->AddButton = (gcnew System::Windows::Forms::Button());
			this->backArrow = (gcnew System::Windows::Forms::PictureBox());
			this->showDataBtn = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->budgetDataGridView))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->backArrow))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// budgetAmountTextBox
			// 
			this->budgetAmountTextBox->Location = System::Drawing::Point(449, 196);
			this->budgetAmountTextBox->Name = L"budgetAmountTextBox";
			this->budgetAmountTextBox->Size = System::Drawing::Size(200, 22);
			this->budgetAmountTextBox->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(486, 56);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(153, 29);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Budget Form";
			// 
			// categoryComboBox
			// 
			this->categoryComboBox->FormattingEnabled = true;
			this->categoryComboBox->Items->AddRange(gcnew cli::array< System::Object^  >(6) {
				L"food", L"entertainment", L"traveling",
					L"clothing", L"education equipment", L"university fees"
			});
			this->categoryComboBox->Location = System::Drawing::Point(449, 264);
			this->categoryComboBox->Name = L"categoryComboBox";
			this->categoryComboBox->Size = System::Drawing::Size(200, 24);
			this->categoryComboBox->TabIndex = 6;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(333, 267);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(62, 16);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Category";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(333, 199);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(98, 16);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Budget Amount";
			// 
			// budgetDataGridView
			// 
			this->budgetDataGridView->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->budgetDataGridView->Location = System::Drawing::Point(48, 321);
			this->budgetDataGridView->Name = L"budgetDataGridView";
			this->budgetDataGridView->ReadOnly = true;
			this->budgetDataGridView->RowHeadersWidth = 51;
			this->budgetDataGridView->RowTemplate->Height = 24;
			this->budgetDataGridView->Size = System::Drawing::Size(734, 174);
			this->budgetDataGridView->TabIndex = 7;
			// 
			// AddButton
			// 
			this->AddButton->BackColor = System::Drawing::Color::SkyBlue;
			this->AddButton->Location = System::Drawing::Point(500, 332);
			this->AddButton->Name = L"AddButton";
			this->AddButton->Padding = System::Windows::Forms::Padding(5);
			this->AddButton->Size = System::Drawing::Size(90, 34);
			this->AddButton->TabIndex = 8;
			this->AddButton->Text = L"ADD";
			this->AddButton->UseVisualStyleBackColor = false;
			this->AddButton->Click += gcnew System::EventHandler(this, &BudgetForm::AddButton_Click);
			// 
			// backArrow
			// 
			this->backArrow->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"backArrow.Image")));
			this->backArrow->Location = System::Drawing::Point(52, 56);
			this->backArrow->Name = L"backArrow";
			this->backArrow->Size = System::Drawing::Size(45, 38);
			this->backArrow->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->backArrow->TabIndex = 10;
			this->backArrow->TabStop = false;
			this->backArrow->Click += gcnew System::EventHandler(this, &BudgetForm::backArrow_Click);
			// 
			// showDataBtn
			// 
			this->showDataBtn->BackColor = System::Drawing::Color::SkyBlue;
			this->showDataBtn->Location = System::Drawing::Point(477, 388);
			this->showDataBtn->Name = L"showDataBtn";
			this->showDataBtn->Padding = System::Windows::Forms::Padding(5);
			this->showDataBtn->Size = System::Drawing::Size(139, 34);
			this->showDataBtn->TabIndex = 8;
			this->showDataBtn->Text = L"SHOW DATA";
			this->showDataBtn->UseVisualStyleBackColor = false;
			this->showDataBtn->Click += gcnew System::EventHandler(this, &BudgetForm::ShowDataBtn_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::White;
			this->groupBox1->Controls->Add(this->budgetDataGridView);
			this->groupBox1->Location = System::Drawing::Point(140, 136);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(833, 547);
			this->groupBox1->TabIndex = 11;
			this->groupBox1->TabStop = false;
			// 
			// BudgetForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1146, 708);
			this->Controls->Add(this->backArrow);
			this->Controls->Add(this->showDataBtn);
			this->Controls->Add(this->AddButton);
			this->Controls->Add(this->categoryComboBox);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->budgetAmountTextBox);
			this->Controls->Add(this->groupBox1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"BudgetForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Budget";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->budgetDataGridView))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->backArrow))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void backArrow_Click(System::Object^ sender, System::EventArgs^ e);
	//private: System::Void setBudgetButton_Click(System::Object^ sender, System::EventArgs^ e) {
	//	String^ category = this->categoryComboBox->SelectedItem->ToString();
	//	Decimal budgetAmount = Convert::ToDecimal(this->budgetAmountTextBox->Text);

	//	String^ query = "INSERT INTO Budget (Category, BudgetAmount, Month) VALUES (@Category, @BudgetAmount, @Month)";
	//	SqlCommand^ command = gcnew SqlCommand(query, DatabaseHelper::GetInstance()->GetConnection());
	//	command->Parameters->AddWithValue("@Category", category);
	//	command->Parameters->AddWithValue("@BudgetAmount", budgetAmount);
	//	command->Parameters->AddWithValue("@Month", DateTime::Now.ToString("MMMM yyyy"));  // Stores the current month

	//	try {
	//		if (DatabaseHelper::GetInstance()->OpenConnection()) {
	//			command->ExecuteNonQuery();
	//			MessageBox::Show("Budget set successfully!");
	//		}
	//	}
	//	catch (Exception^ ex) {
	//		MessageBox::Show("Error setting budget: " + ex->Message);
	//	}
	//}

	private: System::Void AddButton_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ category = this->categoryComboBox->SelectedItem->ToString();
		Decimal budgetAmount = Convert::ToDecimal(this->budgetAmountTextBox->Text);

		// Ensure proper handling of the SQL query string
		String^ query =
			"MERGE INTO Budget AS target "
			"USING (SELECT @Category AS Category, @BudgetAmount AS BudgetAmount, @Month AS Month) AS source "
			"ON target.Category = source.Category AND target.Month = source.Month "
			"WHEN MATCHED THEN "
			"UPDATE SET target.BudgetAmount = source.BudgetAmount "
			"WHEN NOT MATCHED THEN "
			"INSERT (Category, BudgetAmount, Month) "
			"VALUES (source.Category, source.BudgetAmount, source.Month);";

		SqlCommand^ command = gcnew SqlCommand(query, DatabaseHelper::GetInstance()->GetConnection());
		command->Parameters->AddWithValue("@Category", category);
		command->Parameters->AddWithValue("@BudgetAmount", budgetAmount);
		command->Parameters->AddWithValue("@Month", DateTime::Now.ToString("MMMM yyyy"));  // Store the current month
		
		try {
			if (DatabaseHelper::GetInstance()->OpenConnection()) {
	
				command->ExecuteNonQuery();
				MessageBox::Show("Budget set successfully!");
			}
		}
		catch (Exception^ ex) {
			MessageBox::Show("Error setting budget: " + ex->Message);
		}

		budgetDataGridView->Visible = true;
		LoadBudgets();
		CheckBudgets();
	}
		   void LoadBudgets() {
			   String^ query = "SELECT Category, BudgetAmount FROM Budget WHERE Month = @Month";
			   SqlCommand^ command = gcnew SqlCommand(query, DatabaseHelper::GetInstance()->GetConnection());
			   command->Parameters->AddWithValue("@Month", DateTime::Now.ToString("MMMM yyyy"));

			   SqlDataAdapter^ dataAdapter = gcnew SqlDataAdapter(command);
			   DataTable^ dataTable = gcnew DataTable();
			   dataAdapter->Fill(dataTable);
			   this->budgetDataGridView->DataSource = dataTable;
			   DatabaseHelper::GetInstance()->CloseConnection();
		   }

	private: System::Void ShowDataBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		budgetDataGridView->Visible = true;
		LoadBudgets();
		CheckBudgets();
	}

		   public: void CheckBudgets() {
			   String^ query = "SELECT B.Category, B.BudgetAmount, SUM(E.Amount) AS TotalExpenses "
				   "FROM Budget B LEFT JOIN Expense E ON B.Category = E.Category "
				   "WHERE B.Month = @Month GROUP BY B.Category, B.BudgetAmount";
			   SqlConnection^ connection = DatabaseHelper::GetInstance()->GetConnection();

			   if (connection->State == ConnectionState::Closed) {
				   connection->Open();
			   }

			   SqlCommand^ command = gcnew SqlCommand(query, DatabaseHelper::GetInstance()->GetConnection());
			   command->Parameters->AddWithValue("@Month", DateTime::Now.ToString("MMMM yyyy"));

			   SqlDataReader^ reader = command->ExecuteReader();
			   while (reader->Read()) {
				   String^ category = reader["Category"]->ToString();
				   Decimal budgetAmount = Convert::ToDecimal(reader["BudgetAmount"]);

				   // Check if TotalExpenses is DBNull
				   Decimal totalExpenses = 0;
				   if (reader["TotalExpenses"] != DBNull::Value) {
					   totalExpenses = Convert::ToDecimal(reader["TotalExpenses"]);
				   }

				   if (totalExpenses > budgetAmount) {
					   MessageBox::Show("Budget exceeded for " + category , "Alert" , MessageBoxButtons::OK, MessageBoxIcon::Error);
				   }
			   }
			   reader->Close();
			   DatabaseHelper::GetInstance()->CloseConnection();
		   }


};
}
