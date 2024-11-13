#pragma once
#include "DatabaseHelper.h"
#include "User.h"
#include "AddEventForm.h"

namespace PersonalOrganizerApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for AcademicScheduleForm
	/// </summary>
	public ref class AcademicScheduleForm : public System::Windows::Forms::Form
	{
	private:
		User^ user;
	public:
		AcademicScheduleForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			DisplaySchedule();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~AcademicScheduleForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MonthCalendar^ monthCalendar1;
	private: System::Windows::Forms::DataGridView^ dataGridView;
	protected:

	private: System::Windows::Forms::Button^ lectureBtn;
	private: System::Windows::Forms::Button^ importantDateBtn;
	private: System::Windows::Forms::Button^ saveScheduleBtn;
	private: System::Windows::Forms::PictureBox^ backArrow;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(AcademicScheduleForm::typeid));
			this->monthCalendar1 = (gcnew System::Windows::Forms::MonthCalendar());
			this->dataGridView = (gcnew System::Windows::Forms::DataGridView());
			this->lectureBtn = (gcnew System::Windows::Forms::Button());
			this->importantDateBtn = (gcnew System::Windows::Forms::Button());
			this->saveScheduleBtn = (gcnew System::Windows::Forms::Button());
			this->backArrow = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->backArrow))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// monthCalendar1
			// 
			this->monthCalendar1->Location = System::Drawing::Point(558, 157);
			this->monthCalendar1->Name = L"monthCalendar1";
			this->monthCalendar1->TabIndex = 0;
			// 
			// dataGridView
			// 
			this->dataGridView->BackgroundColor = System::Drawing::SystemColors::Control;
			this->dataGridView->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dataGridView->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView->Location = System::Drawing::Point(189, 399);
			this->dataGridView->Name = L"dataGridView";
			this->dataGridView->RowHeadersWidth = 51;
			this->dataGridView->RowTemplate->Height = 24;
			this->dataGridView->Size = System::Drawing::Size(872, 207);
			this->dataGridView->TabIndex = 1;
			// 
			// lectureBtn
			// 
			this->lectureBtn->Location = System::Drawing::Point(299, 660);
			this->lectureBtn->Name = L"lectureBtn";
			this->lectureBtn->Size = System::Drawing::Size(111, 41);
			this->lectureBtn->TabIndex = 2;
			this->lectureBtn->Text = L"Add Lecture";
			this->lectureBtn->UseVisualStyleBackColor = true;
			this->lectureBtn->Click += gcnew System::EventHandler(this, &AcademicScheduleForm::lectureBtn_Click);
			// 
			// importantDateBtn
			// 
			this->importantDateBtn->Location = System::Drawing::Point(478, 660);
			this->importantDateBtn->Name = L"importantDateBtn";
			this->importantDateBtn->Size = System::Drawing::Size(136, 41);
			this->importantDateBtn->TabIndex = 2;
			this->importantDateBtn->Text = L"Add Important Date";
			this->importantDateBtn->UseVisualStyleBackColor = true;
			// 
			// saveScheduleBtn
			// 
			this->saveScheduleBtn->Location = System::Drawing::Point(691, 660);
			this->saveScheduleBtn->Name = L"saveScheduleBtn";
			this->saveScheduleBtn->Size = System::Drawing::Size(136, 41);
			this->saveScheduleBtn->TabIndex = 2;
			this->saveScheduleBtn->Text = L"Save Schedule";
			this->saveScheduleBtn->UseVisualStyleBackColor = true;
			// 
			// backArrow
			// 
			this->backArrow->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"backArrow.Image")));
			this->backArrow->Location = System::Drawing::Point(81, 60);
			this->backArrow->Name = L"backArrow";
			this->backArrow->Size = System::Drawing::Size(45, 38);
			this->backArrow->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->backArrow->TabIndex = 6;
			this->backArrow->TabStop = false;
			this->backArrow->Click += gcnew System::EventHandler(this, &AcademicScheduleForm::backArrow_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(1022, 33);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(126, 125);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 5;
			this->pictureBox2->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(456, 60);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(217, 29);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Income / Expenses";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(248, 232);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(199, 16);
			this->label2->TabIndex = 7;
			this->label2->Text = L"Pick a Date to view the schedule";
			// 
			// AcademicScheduleForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1195, 787);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->backArrow);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->saveScheduleBtn);
			this->Controls->Add(this->importantDateBtn);
			this->Controls->Add(this->lectureBtn);
			this->Controls->Add(this->dataGridView);
			this->Controls->Add(this->monthCalendar1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"AcademicScheduleForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Academic Schedule";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->backArrow))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		void DisplaySchedule() {
			// Display the schedule in the data grid view
			DatabaseHelper^ dbHelper = DatabaseHelper::GetInstance();

			try
			{
				// Open the database connection using DatabaseHelper
				if (dbHelper->OpenConnection())
				{
					String^ query = "SELECT * FROM AcademicSchedule";

					SqlCommand^ cmd = gcnew SqlCommand(query, dbHelper->GetConnection());
					DataTable^ dataTable = dbHelper->ExecuteQuery(query);
					dataGridView->DataSource = dataTable;

					dbHelper->CloseConnection();
				}
				else
				{
					MessageBox::Show("Failed to connect to the database.", "Connection Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}
			}
			catch (Exception^ ex)
			{
				// Handle any errors
				MessageBox::Show("Error loading data: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}

		}

	private: System::Void backArrow_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void lectureBtn_Click(System::Object^ sender, System::EventArgs^ e) {
	AddEventForm^ addEventForm = gcnew AddEventForm();
	addEventForm->ShowDialog();
}
};
}
