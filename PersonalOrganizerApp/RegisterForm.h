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
	using namespace System::Security::Cryptography; // For hashing
	using namespace System::Text; // For encoding


	/// <summary>
	/// Summary for RegisterForm
	/// </summary>
	public ref class RegisterForm : public System::Windows::Forms::Form
	{
	public:
		RegisterForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			this->CenterToScreen();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~RegisterForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ tbName;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ tbEmail;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ tbPhone;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ tbAddress;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ tbPassword;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ tbConfirmPassword;
	private: System::Windows::Forms::Button^ btnOK;
	private: System::Windows::Forms::Button^ btnCancel;
	private: System::Windows::Forms::LinkLabel^ llLogin;

	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::PictureBox^ pictureBox6;
	private: System::Windows::Forms::PictureBox^ pictureBox7;
	private: System::Windows::Forms::PictureBox^ pictureBox8;
	private: System::Windows::Forms::CheckBox^ cbShowPassword;




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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(RegisterForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->tbName = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->tbEmail = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->tbPhone = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->tbAddress = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->tbPassword = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->tbConfirmPassword = (gcnew System::Windows::Forms::TextBox());
			this->btnOK = (gcnew System::Windows::Forms::Button());
			this->btnCancel = (gcnew System::Windows::Forms::Button());
			this->llLogin = (gcnew System::Windows::Forms::LinkLabel());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->cbShowPassword = (gcnew System::Windows::Forms::CheckBox());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(64, 39);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(140, 63);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Register";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(101, 145);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(48, 18);
			this->label2->TabIndex = 13;
			this->label2->Text = L"Name";
			// 
			// tbName
			// 
			this->tbName->Location = System::Drawing::Point(80, 166);
			this->tbName->Name = L"tbName";
			this->tbName->Size = System::Drawing::Size(431, 38);
			this->tbName->TabIndex = 0;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(100, 235);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(45, 18);
			this->label3->TabIndex = 12;
			this->label3->Text = L"Email";
			// 
			// tbEmail
			// 
			this->tbEmail->Location = System::Drawing::Point(81, 256);
			this->tbEmail->Name = L"tbEmail";
			this->tbEmail->Size = System::Drawing::Size(202, 38);
			this->tbEmail->TabIndex = 1;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(323, 235);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(51, 18);
			this->label4->TabIndex = 11;
			this->label4->Text = L"Phone";
			// 
			// tbPhone
			// 
			this->tbPhone->Location = System::Drawing::Point(303, 256);
			this->tbPhone->Name = L"tbPhone";
			this->tbPhone->Size = System::Drawing::Size(208, 38);
			this->tbPhone->TabIndex = 2;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(101, 319);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(62, 18);
			this->label5->TabIndex = 10;
			this->label5->Text = L"Address";
			// 
			// tbAddress
			// 
			this->tbAddress->Location = System::Drawing::Point(80, 340);
			this->tbAddress->Name = L"tbAddress";
			this->tbAddress->Size = System::Drawing::Size(431, 38);
			this->tbAddress->TabIndex = 3;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(100, 411);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(75, 18);
			this->label6->TabIndex = 9;
			this->label6->Text = L"Password";
			// 
			// tbPassword
			// 
			this->tbPassword->Location = System::Drawing::Point(81, 432);
			this->tbPassword->Name = L"tbPassword";
			this->tbPassword->PasswordChar = '*';
			this->tbPassword->Size = System::Drawing::Size(202, 38);
			this->tbPassword->TabIndex = 4;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(322, 411);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(132, 18);
			this->label7->TabIndex = 8;
			this->label7->Text = L"Confirm Password";
			// 
			// tbConfirmPassword
			// 
			this->tbConfirmPassword->Location = System::Drawing::Point(303, 432);
			this->tbConfirmPassword->Name = L"tbConfirmPassword";
			this->tbConfirmPassword->PasswordChar = '*';
			this->tbConfirmPassword->Size = System::Drawing::Size(208, 38);
			this->tbConfirmPassword->TabIndex = 5;
			// 
			// btnOK
			// 
			this->btnOK->BackColor = System::Drawing::Color::DodgerBlue;
			this->btnOK->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnOK->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnOK->ForeColor = System::Drawing::Color::White;
			this->btnOK->Location = System::Drawing::Point(123, 532);
			this->btnOK->Name = L"btnOK";
			this->btnOK->Size = System::Drawing::Size(137, 43);
			this->btnOK->TabIndex = 6;
			this->btnOK->Text = L"REGISTER";
			this->btnOK->UseVisualStyleBackColor = false;
			this->btnOK->Click += gcnew System::EventHandler(this, &RegisterForm::btnOK_Click);
			// 
			// btnCancel
			// 
			this->btnCancel->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnCancel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCancel->Location = System::Drawing::Point(322, 532);
			this->btnCancel->Name = L"btnCancel";
			this->btnCancel->Size = System::Drawing::Size(137, 43);
			this->btnCancel->TabIndex = 8;
			this->btnCancel->Text = L"CANCEL";
			this->btnCancel->UseVisualStyleBackColor = true;
			this->btnCancel->Click += gcnew System::EventHandler(this, &RegisterForm::btnCancel_Click);
			// 
			// llLogin
			// 
			this->llLogin->AutoSize = true;
			this->llLogin->Cursor = System::Windows::Forms::Cursors::Hand;
			this->llLogin->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->llLogin->Location = System::Drawing::Point(318, 624);
			this->llLogin->Name = L"llLogin";
			this->llLogin->Size = System::Drawing::Size(50, 20);
			this->llLogin->TabIndex = 16;
			this->llLogin->TabStop = true;
			this->llLogin->Text = L"Login";
			this->llLogin->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &RegisterForm::llLogin_LinkClicked);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::DimGray;
			this->label8->Location = System::Drawing::Point(131, 624);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(201, 20);
			this->label8->TabIndex = 15;
			this->label8->Text = L"Already have an account\?";
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::White;
			this->panel1->Controls->Add(this->pictureBox2);
			this->panel1->Controls->Add(this->label9);
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Location = System::Drawing::Point(589, -4);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(530, 723);
			this->panel1->TabIndex = 14;
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(406, 45);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(70, 63);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 15;
			this->pictureBox2->TabStop = false;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::DodgerBlue;
			this->label9->Location = System::Drawing::Point(201, 63);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(239, 29);
			this->label9->TabIndex = 16;
			this->label9->Text = L"Personal Organizer";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(-31, 114);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(582, 537);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(71, 145);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(37, 18);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox3->TabIndex = 15;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(71, 235);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(37, 18);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox4->TabIndex = 15;
			this->pictureBox4->TabStop = false;
			// 
			// pictureBox5
			// 
			this->pictureBox5->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(293, 235);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(37, 18);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox5->TabIndex = 15;
			this->pictureBox5->TabStop = false;
			// 
			// pictureBox6
			// 
			this->pictureBox6->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.Image")));
			this->pictureBox6->Location = System::Drawing::Point(71, 319);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(37, 18);
			this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox6->TabIndex = 15;
			this->pictureBox6->TabStop = false;
			// 
			// pictureBox7
			// 
			this->pictureBox7->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.Image")));
			this->pictureBox7->Location = System::Drawing::Point(71, 411);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(37, 18);
			this->pictureBox7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox7->TabIndex = 15;
			this->pictureBox7->TabStop = false;
			// 
			// pictureBox8
			// 
			this->pictureBox8->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox8.Image")));
			this->pictureBox8->Location = System::Drawing::Point(293, 411);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(37, 18);
			this->pictureBox8->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox8->TabIndex = 15;
			this->pictureBox8->TabStop = false;
			// 
			// cbShowPassword
			// 
			this->cbShowPassword->AutoSize = true;
			this->cbShowPassword->Cursor = System::Windows::Forms::Cursors::Hand;
			this->cbShowPassword->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cbShowPassword->ForeColor = System::Drawing::SystemColors::GrayText;
			this->cbShowPassword->Location = System::Drawing::Point(81, 476);
			this->cbShowPassword->Name = L"cbShowPassword";
			this->cbShowPassword->Size = System::Drawing::Size(125, 20);
			this->cbShowPassword->TabIndex = 17;
			this->cbShowPassword->Text = L"Show Password";
			this->cbShowPassword->UseVisualStyleBackColor = true;
			this->cbShowPassword->CheckedChanged += gcnew System::EventHandler(this, &RegisterForm::cbShowPassword_CheckedChanged);
			// 
			// RegisterForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(16, 31);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Lavender;
			this->ClientSize = System::Drawing::Size(1116, 712);
			this->Controls->Add(this->cbShowPassword);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->llLogin);
			this->Controls->Add(this->btnCancel);
			this->Controls->Add(this->btnOK);
			this->Controls->Add(this->tbConfirmPassword);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->tbPassword);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->tbAddress);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->tbPhone);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->tbEmail);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->tbName);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox8);
			this->Controls->Add(this->pictureBox7);
			this->Controls->Add(this->pictureBox6);
			this->Controls->Add(this->pictureBox5);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(6);
			this->MaximizeBox = false;
			this->Name = L"RegisterForm";
			this->Text = L"Register | Personal Organizer";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &RegisterForm::RegisterForm_FormClosing);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnCancel_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
		public: bool switchToLogin = false;
private: System::Void llLogin_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e);

public: User^ user = nullptr;

	  // Hash the password
			private: String^ HashPassword(String^ password) {
				using namespace System::Security::Cryptography;
				using namespace System::Text;

				SHA256^ sha256 = SHA256::Create();
				array<Byte>^ bytes = sha256->ComputeHash(Encoding::UTF8->GetBytes(password));
				StringBuilder^ builder = gcnew StringBuilder();
				for (int i = 0; i < bytes->Length; i++) {
					builder->Append(bytes[i].ToString("x2"));
				}
				return builder->ToString();
			}

	  private: System::Void btnOK_Click(System::Object^ sender, System::EventArgs^ e) {
		  String^ name = tbName->Text;
		  String^ email = tbEmail->Text;
		  String^ phone = tbPhone->Text;
		  String^ address = tbAddress->Text;
		  String^ password = tbPassword->Text;
		  String^ confirmPassword = tbConfirmPassword->Text;

		  // Check for empty fields
		  if (name->Length == 0 || email->Length == 0 || phone->Length == 0 || address->Length == 0 || password->Length == 0 || confirmPassword->Length == 0) {
			  MessageBox::Show("Please fill all fields", "One or more empty fields", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			  return;
		  }

		  // Name validation: Only letters and spaces, min length 2
		  if (!System::Text::RegularExpressions::Regex::IsMatch(name, "^[a-zA-Z ]{2,}$")) {
			  MessageBox::Show("Name should contain only letters and spaces, and be at least 2 characters long.", "Invalid Name", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			  return;
		  }

		  // Email validation
		  if (!System::Text::RegularExpressions::Regex::IsMatch(email, "^[\\w-.]+@[\\w-]+\\.[a-zA-Z]{2,}$")) {
			  MessageBox::Show("Please enter a valid email address.", "Invalid Email", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			  return;
		  }

		  // Phone validation: Only numbers, min length 10
		  if (!System::Text::RegularExpressions::Regex::IsMatch(phone, "^[0-9]{10,}$")) {
			  MessageBox::Show("Phone number should contain only numbers and be at least 10 digits long.", "Invalid Phone", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			  return;
		  }

		  // Address validation: Minimum length 5
		  if (address->Length < 5) {
			  MessageBox::Show("Address should be at least 5 characters long.", "Invalid Address", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			  return;
		  }

		  // Password validation: Minimum length 8, at least one uppercase, one lowercase, one digit, and one special character
		  if (!System::Text::RegularExpressions::Regex::IsMatch(password, "^(?=.*[a-z])(?=.*[A-Z])(?=.*\\d)(?=.*[@$!%*?&])[A-Za-z\\d@$!%*?&]{8,}$")) {
			  MessageBox::Show("Password must be at least 8 characters long and include one uppercase letter, one lowercase letter, one digit, and one special character.", "Invalid Password", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			  return;
		  }

		  // Confirm Password validation: Match with password
		  if (password != confirmPassword) {
			  MessageBox::Show("Password and Confirm Password do not match", "Password mismatch", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			  return;
		  }

		  // Database operations
		  DatabaseHelper^ dbHelper = DatabaseHelper::GetInstance();
		  dbHelper->OpenConnection();
		  SqlConnection^ connection = dbHelper->GetConnection();

		  // Password hashing
		  String^ hashedPassword = HashPassword(password);

		  SqlCommand^ command = gcnew SqlCommand("INSERT INTO users (name, email, phone, address, password) VALUES (@name, @email, @phone, @address, @hashedPassword);", connection);
		  command->Parameters->AddWithValue("@name", name);
		  command->Parameters->AddWithValue("@email", email);
		  command->Parameters->AddWithValue("@phone", phone);
		  command->Parameters->AddWithValue("@address", address);
		  command->Parameters->AddWithValue("@hashedPassword", hashedPassword);

		  int result = command->ExecuteNonQuery();
		  if (result > 0) {
			  // User registered successfully
			  user = gcnew User;
			  user->name = name;
			  user->email = email;
			  user->phone = phone;
			  user->address = address;
			  user->password = password;

			  MessageBox::Show("User registered successfully", "Register Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
			  this->Hide();
		  }
		  else {
			  MessageBox::Show("Error in registration. Please try again.");
		  }

		  dbHelper->CloseConnection();
	  }


private: System::Void cbShowPassword_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (cbShowPassword->Checked) {
		tbPassword->PasswordChar = '\0';
		tbConfirmPassword->PasswordChar = '\0';
	}
	else {
		tbPassword->PasswordChar = '*';
		tbConfirmPassword->PasswordChar = '*';
	}
}
	   private:
		   bool isExiting = false;
private: System::Void RegisterForm_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
	// Check if the form is being closed by the user
	if (!isExiting && e->CloseReason == System::Windows::Forms::CloseReason::UserClosing) {
		// Show confirmation dialog
		System::Windows::Forms::DialogResult result = MessageBox::Show(
			"Are you sure you want to exit?",
			"Exit Confirmation",
			MessageBoxButtons::YesNo,
			MessageBoxIcon::Question
		);

		if (result == System::Windows::Forms::DialogResult::Yes) {
			isExiting = true; // Set the flag to true
			Application::Exit(); // Fully exit
		}
		else {
			e->Cancel = true; 
		}
	}
}
};
}
