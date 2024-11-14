#pragma once
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
	/// Summary for AddEventForm
	/// </summary>
	public ref class AddEventForm : public System::Windows::Forms::Form
	{
	public:
		AddEventForm(void)
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
		~AddEventForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ titleTextBox;
	private: System::Windows::Forms::ComboBox^ typeComboBox;


	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::DateTimePicker^ datePicker;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ descriptionTextBox;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ addBtn;
	private: System::Windows::Forms::DateTimePicker^ timePicker;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Panel^ panel1;
	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(AddEventForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->titleTextBox = (gcnew System::Windows::Forms::TextBox());
			this->typeComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->datePicker = (gcnew System::Windows::Forms::DateTimePicker());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->descriptionTextBox = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->addBtn = (gcnew System::Windows::Forms::Button());
			this->timePicker = (gcnew System::Windows::Forms::DateTimePicker());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(238, 134);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(122, 29);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Add Event";
			// 
			// titleTextBox
			// 
			this->titleTextBox->Location = System::Drawing::Point(254, 225);
			this->titleTextBox->Name = L"titleTextBox";
			this->titleTextBox->Size = System::Drawing::Size(190, 22);
			this->titleTextBox->TabIndex = 1;
			// 
			// typeComboBox
			// 
			this->typeComboBox->FormattingEnabled = true;
			this->typeComboBox->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Lecture", L"Deadline" });
			this->typeComboBox->Location = System::Drawing::Point(254, 439);
			this->typeComboBox->Name = L"typeComboBox";
			this->typeComboBox->Size = System::Drawing::Size(190, 24);
			this->typeComboBox->TabIndex = 2;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(146, 227);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(41, 20);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Title";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(146, 283);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(45, 20);
			this->label3->TabIndex = 0;
			this->label3->Text = L"Date";
			// 
			// datePicker
			// 
			this->datePicker->Location = System::Drawing::Point(254, 283);
			this->datePicker->Name = L"datePicker";
			this->datePicker->Size = System::Drawing::Size(243, 22);
			this->datePicker->TabIndex = 3;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(146, 381);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(95, 20);
			this->label4->TabIndex = 0;
			this->label4->Text = L"Description";
			// 
			// descriptionTextBox
			// 
			this->descriptionTextBox->Location = System::Drawing::Point(254, 381);
			this->descriptionTextBox->Name = L"descriptionTextBox";
			this->descriptionTextBox->Size = System::Drawing::Size(190, 22);
			this->descriptionTextBox->TabIndex = 1;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(146, 439);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(45, 20);
			this->label5->TabIndex = 0;
			this->label5->Text = L"Type";
			// 
			// addBtn
			// 
			this->addBtn->BackColor = System::Drawing::Color::DodgerBlue;
			this->addBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->addBtn->ForeColor = System::Drawing::Color::White;
			this->addBtn->Location = System::Drawing::Point(211, 406);
			this->addBtn->Name = L"addBtn";
			this->addBtn->Size = System::Drawing::Size(89, 32);
			this->addBtn->TabIndex = 4;
			this->addBtn->Text = L"ADD";
			this->addBtn->UseVisualStyleBackColor = false;
			this->addBtn->Click += gcnew System::EventHandler(this, &AddEventForm::addBtn_Click);
			// 
			// timePicker
			// 
			this->timePicker->CustomFormat = L"HH:mm tt";
			this->timePicker->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->timePicker->Location = System::Drawing::Point(254, 327);
			this->timePicker->Name = L"timePicker";
			this->timePicker->ShowUpDown = true;
			this->timePicker->Size = System::Drawing::Size(243, 22);
			this->timePicker->TabIndex = 5;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(146, 329);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(46, 20);
			this->label6->TabIndex = 0;
			this->label6->Text = L"Time";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(637, 146);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(452, 403);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 6;
			this->pictureBox1->TabStop = false;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::WhiteSmoke;
			this->panel1->Controls->Add(this->addBtn);
			this->panel1->Location = System::Drawing::Point(43, 98);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(547, 516);
			this->panel1->TabIndex = 7;
			// 
			// AddEventForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(1146, 719);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->timePicker);
			this->Controls->Add(this->datePicker);
			this->Controls->Add(this->typeComboBox);
			this->Controls->Add(this->descriptionTextBox);
			this->Controls->Add(this->titleTextBox);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Location = System::Drawing::Point(305, 250);
			this->MaximizeBox = false;
			this->Name = L"AddEventForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Add Event";
			this->Load += gcnew System::EventHandler(this, &AddEventForm::AddEventForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}

#pragma endregion
		void AddEventToDatabase()
		{
			DatabaseHelper^ dbHelper = DatabaseHelper::GetInstance();

			try
			{
				// Open the database connection using DatabaseHelper
				if (dbHelper->OpenConnection())
				{
					// Define the SQL query
					String^ query = "INSERT INTO AcademicSchedule (Title, Date, Time, Type, Description) "
						"VALUES (@Title, @Date, @Time, @Type, @Description)";

					// Create SqlCommand with the query and connection
					SqlCommand^ cmd = gcnew SqlCommand(query, dbHelper->GetConnection());

					// Add parameters
					cmd->Parameters->AddWithValue("@Title", titleTextBox->Text);
					cmd->Parameters->AddWithValue("@Date", datePicker->Value);
					cmd->Parameters->AddWithValue("@Time", timePicker->Value);
					cmd->Parameters->AddWithValue("@Type", typeComboBox->SelectedItem->ToString());
					cmd->Parameters->AddWithValue("@Description", descriptionTextBox->Text);

					// Execute the command
					cmd->ExecuteNonQuery();

					// Inform the user of success
					MessageBox::Show("Event added successfully!", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
				}
				else
				{
					MessageBox::Show("Failed to connect to the database.", "Connection Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}
			}
			catch (Exception^ ex)
			{
				// Handle any errors
				MessageBox::Show("Error adding event: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
			finally
			{
				// Ensure the connection is closed after operation
				dbHelper->CloseConnection();
			}
		}
	private: System::Void addBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		AddEventToDatabase();
	}
};
}
