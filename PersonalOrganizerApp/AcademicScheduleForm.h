#pragma once
#include "DatabaseHelper.h"

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
	public:
		AcademicScheduleForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView))->BeginInit();
			this->SuspendLayout();
			// 
			// monthCalendar1
			// 
			this->monthCalendar1->Location = System::Drawing::Point(253, 121);
			this->monthCalendar1->Name = L"monthCalendar1";
			this->monthCalendar1->TabIndex = 0;
			// 
			// dataGridView
			// 
			this->dataGridView->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView->Location = System::Drawing::Point(571, 121);
			this->dataGridView->Name = L"dataGridView";
			this->dataGridView->RowHeadersWidth = 51;
			this->dataGridView->RowTemplate->Height = 24;
			this->dataGridView->Size = System::Drawing::Size(449, 207);
			this->dataGridView->TabIndex = 1;
			// 
			// lectureBtn
			// 
			this->lectureBtn->Location = System::Drawing::Point(282, 452);
			this->lectureBtn->Name = L"lectureBtn";
			this->lectureBtn->Size = System::Drawing::Size(111, 41);
			this->lectureBtn->TabIndex = 2;
			this->lectureBtn->Text = L"Add Lecture";
			this->lectureBtn->UseVisualStyleBackColor = true;
			// 
			// importantDateBtn
			// 
			this->importantDateBtn->Location = System::Drawing::Point(461, 452);
			this->importantDateBtn->Name = L"importantDateBtn";
			this->importantDateBtn->Size = System::Drawing::Size(136, 41);
			this->importantDateBtn->TabIndex = 2;
			this->importantDateBtn->Text = L"Add Important Date";
			this->importantDateBtn->UseVisualStyleBackColor = true;
			// 
			// saveScheduleBtn
			// 
			this->saveScheduleBtn->Location = System::Drawing::Point(674, 452);
			this->saveScheduleBtn->Name = L"saveScheduleBtn";
			this->saveScheduleBtn->Size = System::Drawing::Size(136, 41);
			this->saveScheduleBtn->TabIndex = 2;
			this->saveScheduleBtn->Text = L"Save Schedule";
			this->saveScheduleBtn->UseVisualStyleBackColor = true;
			// 
			// AcademicScheduleForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1195, 787);
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
			this->ResumeLayout(false);

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
					// Define the SQL query
					String^ query = "SELECT * FROM AcademicSchedule";

					// Create SqlCommand with the query and connection
					SqlCommand^ cmd = gcnew SqlCommand(query, dbHelper->GetConnection());

					SqlDataReader^ reader = cmd->ExecuteReader();

					while (reader->Read()) {
						dataGridView->Rows->Add(reader["Title"]->ToString(), reader["Date"]->ToString(),
							reader["StartTime"]->ToString(), reader["EndTime"]->ToString(),
							reader["Type"]->ToString(), reader["Description"]->ToString());
					}
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

	};
}
