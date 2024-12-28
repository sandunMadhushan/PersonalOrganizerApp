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
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for AcademicScheduleForm
	/// </summary>
	public ref class AcademicScheduleForm : public System::Windows::Forms::Form
	{
	private:
		User^ user;
	public:
		AcademicScheduleForm(User^ currentUser)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			this->user = currentUser;
			DateTime currentDate = DateTime::Now;
			DisplaySchedule();

			this->deadlineTimer = gcnew System::Windows::Forms::Timer();
			this->deadlineTimer->Interval = 86400000; // Run once per day
			this->deadlineTimer->Tick += gcnew System::EventHandler(this, &AcademicScheduleForm::deadlineTimer_Tick);
			this->deadlineTimer->Start();
			usernameLbl->Text = currentUser->name;
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
	private: System::Windows::Forms::MonthCalendar^ monthCalendar;
	protected:

	private: System::Windows::Forms::DataGridView^ dataGridView;
	protected:

	private: System::Windows::Forms::Button^ lectureBtn;


	private: System::Windows::Forms::PictureBox^ backArrow;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Timer^ deadlineTimer;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ usernameLbl;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::ComponentModel::IContainer^ components;


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(AcademicScheduleForm::typeid));
			this->monthCalendar = (gcnew System::Windows::Forms::MonthCalendar());
			this->dataGridView = (gcnew System::Windows::Forms::DataGridView());
			this->lectureBtn = (gcnew System::Windows::Forms::Button());
			this->backArrow = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->deadlineTimer = (gcnew System::Windows::Forms::Timer(this->components));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->usernameLbl = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->backArrow))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// monthCalendar
			// 
			this->monthCalendar->Location = System::Drawing::Point(883, 216);
			this->monthCalendar->Name = L"monthCalendar";
			this->monthCalendar->TabIndex = 0;
			this->monthCalendar->DateSelected += gcnew System::Windows::Forms::DateRangeEventHandler(this, &AcademicScheduleForm::monthCalendar_DateSelected);
			// 
			// dataGridView
			// 
			this->dataGridView->BackgroundColor = System::Drawing::Color::White;
			this->dataGridView->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dataGridView->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView->Location = System::Drawing::Point(514, 458);
			this->dataGridView->Name = L"dataGridView";
			this->dataGridView->RowHeadersWidth = 51;
			this->dataGridView->RowTemplate->Height = 24;
			this->dataGridView->Size = System::Drawing::Size(872, 207);
			this->dataGridView->TabIndex = 1;
			// 
			// lectureBtn
			// 
			this->lectureBtn->BackColor = System::Drawing::Color::DodgerBlue;
			this->lectureBtn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->lectureBtn->ForeColor = System::Drawing::Color::White;
			this->lectureBtn->Location = System::Drawing::Point(786, 711);
			this->lectureBtn->Name = L"lectureBtn";
			this->lectureBtn->Size = System::Drawing::Size(297, 41);
			this->lectureBtn->TabIndex = 2;
			this->lectureBtn->Text = L"Add Lecture / Deadline";
			this->lectureBtn->UseVisualStyleBackColor = false;
			this->lectureBtn->Click += gcnew System::EventHandler(this, &AcademicScheduleForm::lectureBtn_Click);
			// 
			// backArrow
			// 
			this->backArrow->Cursor = System::Windows::Forms::Cursors::Hand;
			this->backArrow->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"backArrow.Image")));
			this->backArrow->Location = System::Drawing::Point(81, 60);
			this->backArrow->Name = L"backArrow";
			this->backArrow->Size = System::Drawing::Size(45, 38);
			this->backArrow->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->backArrow->TabIndex = 6;
			this->backArrow->TabStop = false;
			this->backArrow->Click += gcnew System::EventHandler(this, &AcademicScheduleForm::backArrow_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(456, 60);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(227, 29);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Academic Schedule";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::SystemColors::Control;
			this->label2->Location = System::Drawing::Point(639, 300);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(199, 16);
			this->label2->TabIndex = 7;
			this->label2->Text = L"Pick a Date to view the schedule";
			// 
			// deadlineTimer
			// 
			this->deadlineTimer->Enabled = true;
			this->deadlineTimer->Interval = 5000;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::Control;
			this->panel1->Location = System::Drawing::Point(491, 170);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(934, 630);
			this->panel1->TabIndex = 8;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(-26, 250);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(511, 535);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 9;
			this->pictureBox1->TabStop = false;
			// 
			// usernameLbl
			// 
			this->usernameLbl->AutoSize = true;
			this->usernameLbl->Location = System::Drawing::Point(1306, 54);
			this->usernameLbl->Name = L"usernameLbl";
			this->usernameLbl->Size = System::Drawing::Size(85, 16);
			this->usernameLbl->TabIndex = 13;
			this->usernameLbl->Text = L"usernameLbl";
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(1207, 39);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(100, 50);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 12;
			this->pictureBox2->TabStop = false;
			// 
			// AcademicScheduleForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(1453, 875);
			this->Controls->Add(this->usernameLbl);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->backArrow);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->lectureBtn);
			this->Controls->Add(this->dataGridView);
			this->Controls->Add(this->monthCalendar);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->pictureBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"AcademicScheduleForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Academic Schedule  |  Personal Organizer";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->backArrow))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
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
					DateTime currentDate = DateTime::Now;
					String^ query = "SELECT * FROM AcademicSchedule WHERE Date = @currentDate AND UserName = @UserName";

					SqlCommand^ cmd = gcnew SqlCommand(query, dbHelper->GetConnection());
					cmd->Parameters->AddWithValue("@currentDate", currentDate);
					cmd->Parameters->AddWithValue("@UserName", user->name);

					SqlDataAdapter^ adapter = gcnew SqlDataAdapter(cmd);
					DataTable^ dataTable = gcnew DataTable();
					adapter->Fill(dataTable);

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
	AddEventForm^ addEventForm = gcnew AddEventForm(user);
	addEventForm->ShowDialog();
}
private: System::Void monthCalendar_DateSelected(System::Object^ sender, System::Windows::Forms::DateRangeEventArgs^ e) {
	DateTime selectedDate = monthCalendar->SelectionRange->Start;

	DatabaseHelper^ dbHelper = DatabaseHelper::GetInstance();

	try
	{
		if (dbHelper->OpenConnection())
		{
			String^ query = "SELECT * FROM AcademicSchedule WHERE Date = @selectedDate AND UserName = @UserName";

			SqlCommand^ cmd = gcnew SqlCommand(query, dbHelper->GetConnection());
			cmd->Parameters->AddWithValue("@selectedDate", selectedDate);
			cmd->Parameters->AddWithValue("@UserName", user->name);

			// Execute the query and get the data
			SqlDataAdapter^ adapter = gcnew SqlDataAdapter(cmd);
			DataTable^ dt = gcnew DataTable();
			adapter->Fill(dt);

			// Bind the filtered data to the DataGridView
			dataGridView->DataSource = dt;

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
	   // Timer Tick Event to check for upcoming deadlines
private: System::Void deadlineTimer_Tick(System::Object^ sender, System::EventArgs^ e) {
	DateTime today = DateTime::Now;
	DateTime alertDate = today.AddDays(3); // Modify if you want a different alert range

	DatabaseHelper^ dbHelper = DatabaseHelper::GetInstance();

	try {
		if (dbHelper->OpenConnection()) {
			String^ alertQuery = "SELECT Title FROM AcademicSchedule WHERE Type = 'Deadline' "
				"AND Date <= @AlertDate AND Date >= @Today AND UserName = @UserName";
			SqlCommand^ cmd = gcnew SqlCommand(alertQuery, dbHelper->GetConnection());
			cmd->Parameters->AddWithValue("@AlertDate", alertDate);
			cmd->Parameters->AddWithValue("@Today", today);
			cmd->Parameters->AddWithValue("@UserName", user->name);

			SqlDataReader^ reader = cmd->ExecuteReader();
			while (reader->Read()) {
				String^ title = reader["Title"]->ToString();
				MessageBox::Show("Upcoming deadline: " + title, "Alert",MessageBoxButtons::OK, MessageBoxIcon::Information);
			}

			dbHelper->CloseConnection();
		}
	}
	catch (Exception^ ex) {
		MessageBox::Show("Error checking deadlines: " + ex->Message);
	}
}

};
}
