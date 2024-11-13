#pragma once
#include "DatabaseHelper.h"
#include "User.h"

namespace PersonalOrganizerApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;
	using namespace System::Windows::Forms::DataVisualization::Charting;
	using namespace System::Globalization;
	using namespace System::Drawing::Printing;

	/// <summary>
	/// Summary for FinancialReportForm
	/// </summary>
	public ref class FinancialReportForm : public System::Windows::Forms::Form
	{
	private:
		User^ user;
	public:
		FinancialReportForm(void)
		{
			InitializeComponent();
			int currentMonth = DateTime::Now.Month;
			int currentYear = DateTime::Now.Year;
			GenerateMonthlyReport(currentMonth, currentYear);
		}

	protected:
		~FinancialReportForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ backArrow;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ lblTotalIncome;
	private: System::Windows::Forms::Label^ lblTotalExpenses;
	private: System::Windows::Forms::Label^ lblSavings;
	private: System::Windows::Forms::DataGridView^ dataGridViewReport;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
	private: System::Drawing::Printing::PrintDocument^ printDocument;
	private: System::Windows::Forms::PrintPreviewDialog^ printPreviewDialog;
	private: System::Windows::Forms::Button^ btnPrint;


	private:
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(FinancialReportForm::typeid));
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea5 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend5 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series5 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->backArrow = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->lblTotalIncome = (gcnew System::Windows::Forms::Label());
			this->lblTotalExpenses = (gcnew System::Windows::Forms::Label());
			this->lblSavings = (gcnew System::Windows::Forms::Label());
			this->dataGridViewReport = (gcnew System::Windows::Forms::DataGridView());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->printDocument = (gcnew System::Drawing::Printing::PrintDocument());
			this->printPreviewDialog = (gcnew System::Windows::Forms::PrintPreviewDialog());
			this->btnPrint = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->backArrow))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewReport))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->SuspendLayout();
			// 
			// backArrow
			// 
			this->backArrow->Cursor = System::Windows::Forms::Cursors::Hand;
			this->backArrow->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"backArrow.Image")));
			this->backArrow->Location = System::Drawing::Point(58, 60);
			this->backArrow->Name = L"backArrow";
			this->backArrow->Size = System::Drawing::Size(45, 38);
			this->backArrow->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->backArrow->TabIndex = 6;
			this->backArrow->TabStop = false;
			this->backArrow->Click += gcnew System::EventHandler(this, &FinancialReportForm::backArrow_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(999, 33);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(126, 125);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 5;
			this->pictureBox2->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F));
			this->label1->Location = System::Drawing::Point(433, 60);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(189, 29);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Financial Report";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(379, 218);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(85, 16);
			this->label2->TabIndex = 7;
			this->label2->Text = L"Total Income";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(379, 274);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(101, 16);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Total Expenses";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(379, 323);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(56, 16);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Savings";
			// 
			// lblTotalIncome
			// 
			this->lblTotalIncome->AutoSize = true;
			this->lblTotalIncome->Location = System::Drawing::Point(578, 218);
			this->lblTotalIncome->Name = L"lblTotalIncome";
			this->lblTotalIncome->Size = System::Drawing::Size(96, 16);
			this->lblTotalIncome->TabIndex = 8;
			this->lblTotalIncome->Text = L"lblTotalIncome";
			// 
			// lblTotalExpenses
			// 
			this->lblTotalExpenses->AutoSize = true;
			this->lblTotalExpenses->Location = System::Drawing::Point(578, 274);
			this->lblTotalExpenses->Name = L"lblTotalExpenses";
			this->lblTotalExpenses->Size = System::Drawing::Size(112, 16);
			this->lblTotalExpenses->TabIndex = 8;
			this->lblTotalExpenses->Text = L"lblTotalExpenses";
			// 
			// lblSavings
			// 
			this->lblSavings->AutoSize = true;
			this->lblSavings->Location = System::Drawing::Point(578, 323);
			this->lblSavings->Name = L"lblSavings";
			this->lblSavings->Size = System::Drawing::Size(70, 16);
			this->lblSavings->TabIndex = 8;
			this->lblSavings->Text = L"lblSavings";
			// 
			// dataGridViewReport
			// 
			this->dataGridViewReport->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridViewReport->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->dataGridViewReport->BackgroundColor = System::Drawing::SystemColors::ButtonHighlight;
			this->dataGridViewReport->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dataGridViewReport->ColumnHeadersHeight = 29;
			this->dataGridViewReport->Location = System::Drawing::Point(229, 374);
			this->dataGridViewReport->Name = L"dataGridViewReport";
			this->dataGridViewReport->RowHeadersWidth = 51;
			this->dataGridViewReport->Size = System::Drawing::Size(641, 158);
			this->dataGridViewReport->TabIndex = 9;
			// 
			// chart1
			// 
			chartArea5->AxisX->Title = L"Caregory";
			chartArea5->AxisY->Title = L"Amount";
			chartArea5->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea5);
			legend5->Name = L"Legend1";
			this->chart1->Legends->Add(legend5);
			this->chart1->Location = System::Drawing::Point(315, 611);
			this->chart1->Name = L"chart1";
			series5->ChartArea = L"ChartArea1";
			series5->IsValueShownAsLabel = true;
			series5->IsVisibleInLegend = false;
			series5->Legend = L"Legend1";
			series5->Name = L"series1";
			this->chart1->Series->Add(series5);
			this->chart1->Size = System::Drawing::Size(500, 300);
			this->chart1->TabIndex = 10;
			// 
			// printDocument
			// 
			this->printDocument->PrintPage += gcnew System::Drawing::Printing::PrintPageEventHandler(this, &FinancialReportForm::printDocument_PrintPage);
			// 
			// printPreviewDialog
			// 
			this->printPreviewDialog->AutoScrollMargin = System::Drawing::Size(0, 0);
			this->printPreviewDialog->AutoScrollMinSize = System::Drawing::Size(0, 0);
			this->printPreviewDialog->ClientSize = System::Drawing::Size(400, 300);
			this->printPreviewDialog->Document = this->printDocument;
			this->printPreviewDialog->Enabled = true;
			this->printPreviewDialog->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"printPreviewDialog.Icon")));
			this->printPreviewDialog->Name = L"printPreviewDialog";
			this->printPreviewDialog->Visible = false;
			// 
			// btnPrint
			// 
			this->btnPrint->BackColor = System::Drawing::Color::DodgerBlue;
			this->btnPrint->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnPrint->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btnPrint->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnPrint.Image")));
			this->btnPrint->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnPrint->Location = System::Drawing::Point(493, 552);
			this->btnPrint->Name = L"btnPrint";
			this->btnPrint->Size = System::Drawing::Size(113, 40);
			this->btnPrint->TabIndex = 11;
			this->btnPrint->Text = L"Print";
			this->btnPrint->UseVisualStyleBackColor = false;
			this->btnPrint->Click += gcnew System::EventHandler(this, &FinancialReportForm::btnPrint_Click);
			// 
			// FinancialReportForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1148, 933);
			this->Controls->Add(this->btnPrint);
			this->Controls->Add(this->backArrow);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->lblTotalIncome);
			this->Controls->Add(this->lblTotalExpenses);
			this->Controls->Add(this->lblSavings);
			this->Controls->Add(this->dataGridViewReport);
			this->Controls->Add(this->chart1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"FinancialReportForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Financial Report";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->backArrow))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewReport))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void backArrow_Click(System::Object^ sender, System::EventArgs^ e);


		   void GenerateMonthlyReport(int month, int year) {
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


			   // Populate DataGridView
			   dataGridViewReport->Rows->Clear();
			   dataGridViewReport->ColumnCount = 3;
			   dataGridViewReport->Columns[0]->Name = "Category";
			   dataGridViewReport->Columns[1]->Name = "Amount";
			   dataGridViewReport->Columns[2]->Name = "Description";

			   dataGridViewReport->Rows->Add("Total Income", totalIncome.ToString("C", culture), "Income for the month");
			   dataGridViewReport->Rows->Add("Total Expenses", totalExpenses.ToString("C", culture), "Expenses for the month");
			   dataGridViewReport->Rows->Add("Savings", savings.ToString("C", culture), "Remaining balance");

			   // Display the results
			   lblTotalIncome->Text = totalIncome.ToString("C", culture);
			   lblTotalExpenses->Text = totalExpenses.ToString("C", culture);
			   lblSavings->Text = savings.ToString("C", culture);

			   // Generate chart
			   GenerateChartForExpensesByCategory(month, year);
		   }


		   void GenerateChartForExpensesByCategory(int month, int year) {
			   SqlConnection^ conn = DatabaseHelper::GetInstance()->GetConnection();

			   // Query for category-based expenses
			   String^ categoryQuery = "SELECT Category, ISNULL(SUM(Amount), 0) AS TotalAmount "
				   "FROM Expense "
				   "WHERE MONTH(Date) = @Month AND YEAR(Date) = @Year "
				   "GROUP BY Category";

			   SqlCommand^ categoryCmd = gcnew SqlCommand(categoryQuery, conn);
			   categoryCmd->Parameters->AddWithValue("@Month", month);
			   categoryCmd->Parameters->AddWithValue("@Year", year);

			   conn->Open();
			   SqlDataReader^ reader = categoryCmd->ExecuteReader();

			   while (reader->Read()) {
				   String^ category = reader["Category"]->ToString();
				   Decimal totalAmount = Convert::ToDecimal(reader["TotalAmount"]);

				   //chart1->Series["series1"]->Points->Clear(); // Clear previous data

				   chart1->Series[0]->Points->AddXY(category, totalAmount);

				   chart1->Text = "Expense Breakdown by Category";

				   //// Add chart to the form in a new form or panel
				   //Form^ chartForm = gcnew Form();
				   //chartForm->Text = "Expense Breakdown by Category";
				   //chartForm->ClientSize = System::Drawing::Size(600, 400);

				   //chart1->Dock = DockStyle::Fill;
				   //chartForm->Controls->Add(chart1);
				   //chartForm->Show();
			   }
			   conn->Close();
		   }

	private: System::Void loadData_Click(System::Object^ sender, System::EventArgs^ e) {
		// Example for loading report for the current month and year
		int currentMonth = DateTime::Now.Month;
		int currentYear = DateTime::Now.Year;
		GenerateMonthlyReport(currentMonth, currentYear);
	}
private: System::Void btnPrint_Click(System::Object^ sender, System::EventArgs^ e) {
	PrintDialog^ printDialog = gcnew PrintDialog();
	printDialog->Document = printDocument;
	if (printDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		printDocument->Print();
	}
}
private: System::Void printDocument_PrintPage(System::Object^ sender, System::Drawing::Printing::PrintPageEventArgs^ e) {
	System::Drawing::Font^ font = gcnew System::Drawing::Font("Arial", 10);
	float yPos = 100; // Starting Y position
	int leftMargin = e->MarginBounds.Left;

	// Example: Print Report Title
	e->Graphics->DrawString("Financial Report", gcnew System::Drawing::Font("Arial", 16, FontStyle::Bold), Brushes::Black, leftMargin, yPos);
	yPos += 40; // Move down

    // Print each line of data
    e->Graphics->DrawString("Total Income: " + lblTotalIncome->Text, font, Brushes::Black, leftMargin, yPos);
    yPos += 20;
    e->Graphics->DrawString("Total Expenses: " + lblTotalExpenses->Text, font, Brushes::Black, leftMargin, yPos);
    yPos += 20;
    e->Graphics->DrawString("Savings: " + lblSavings->Text, font, Brushes::Black, leftMargin, yPos);
    yPos += 20;
            
}
};

	
}
