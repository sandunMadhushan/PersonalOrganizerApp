#pragma once
#include "User.h"
#include "DatabaseHelper.h"
#include "ForgotPasswordForm.h"



namespace PersonalOrganizerApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;
	using namespace System::Security::Cryptography;
	using namespace System::Text;

	/// <summary>
	/// Summary for LoginForm
	/// </summary>
	public ref class LoginForm : public System::Windows::Forms::Form
	{
	public:
		LoginForm(void)
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
		~LoginForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ tbEmail;
	private: System::Windows::Forms::TextBox^ tbPassword;
	private: System::Windows::Forms::Button^ btnOK;

	private: System::Windows::Forms::LinkLabel^ llRegister;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::Label^ forgtPwLbl;
	private: System::Windows::Forms::CheckBox^ cbShowPassword;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(LoginForm::typeid));
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->tbEmail = (gcnew System::Windows::Forms::TextBox());
			this->tbPassword = (gcnew System::Windows::Forms::TextBox());
			this->btnOK = (gcnew System::Windows::Forms::Button());
			this->llRegister = (gcnew System::Windows::Forms::LinkLabel());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->forgtPwLbl = (gcnew System::Windows::Forms::Label());
			this->cbShowPassword = (gcnew System::Windows::Forms::CheckBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			this->SuspendLayout();
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Black;
			this->label2->Location = System::Drawing::Point(801, 295);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(45, 18);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Email";
			this->label2->Click += gcnew System::EventHandler(this, &LoginForm::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::Black;
			this->label3->Location = System::Drawing::Point(801, 374);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(75, 18);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Password";
			// 
			// tbEmail
			// 
			this->tbEmail->Location = System::Drawing::Point(804, 315);
			this->tbEmail->Name = L"tbEmail";
			this->tbEmail->Size = System::Drawing::Size(266, 38);
			this->tbEmail->TabIndex = 0;
			this->tbEmail->TextChanged += gcnew System::EventHandler(this, &LoginForm::tbEmail_TextChanged);
			this->tbEmail->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &LoginForm::tbEmail_KeyDown);
			// 
			// tbPassword
			// 
			this->tbPassword->Location = System::Drawing::Point(804, 393);
			this->tbPassword->Name = L"tbPassword";
			this->tbPassword->PasswordChar = '*';
			this->tbPassword->Size = System::Drawing::Size(266, 38);
			this->tbPassword->TabIndex = 1;
			// 
			// btnOK
			// 
			this->btnOK->BackColor = System::Drawing::Color::DodgerBlue;
			this->btnOK->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnOK->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnOK->ForeColor = System::Drawing::Color::White;
			this->btnOK->Location = System::Drawing::Point(877, 497);
			this->btnOK->Name = L"btnOK";
			this->btnOK->Size = System::Drawing::Size(137, 43);
			this->btnOK->TabIndex = 4;
			this->btnOK->Text = L"LOGIN";
			this->btnOK->UseVisualStyleBackColor = false;
			this->btnOK->Click += gcnew System::EventHandler(this, &LoginForm::btnOK_Click);
			// 
			// llRegister
			// 
			this->llRegister->AutoSize = true;
			this->llRegister->Cursor = System::Windows::Forms::Cursors::Hand;
			this->llRegister->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->llRegister->Location = System::Drawing::Point(995, 582);
			this->llRegister->Name = L"llRegister";
			this->llRegister->Size = System::Drawing::Size(72, 20);
			this->llRegister->TabIndex = 6;
			this->llRegister->TabStop = true;
			this->llRegister->Text = L"Register";
			this->llRegister->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &LoginForm::llRegister_LinkClicked);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::DimGray;
			this->label4->Location = System::Drawing::Point(820, 582);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(185, 20);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Don\'t have an account\?";
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(68, 48);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(70, 63);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 8;
			this->pictureBox1->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::DodgerBlue;
			this->label1->Location = System::Drawing::Point(144, 67);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(239, 29);
			this->label1->TabIndex = 9;
			this->label1->Text = L"Personal Organizer";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(691, 107);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(254, 38);
			this->label5->TabIndex = 10;
			this->label5->Text = L"Welcome Back !";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(693, 177);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(389, 20);
			this->label6->TabIndex = 11;
			this->label6->Text = L"To keep connected with us login with your personal";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(693, 200);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(333, 20);
			this->label7->TabIndex = 11;
			this->label7->Text = L"information by email address and password";
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::GhostWhite;
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(73, 206);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(495, 426);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 12;
			this->pictureBox2->TabStop = false;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::GhostWhite;
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Controls->Add(this->pictureBox2);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Location = System::Drawing::Point(-8, -6);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(629, 739);
			this->panel1->TabIndex = 13;
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(729, 313);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(53, 31);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox3->TabIndex = 14;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(729, 385);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(53, 31);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox4->TabIndex = 15;
			this->pictureBox4->TabStop = false;
			// 
			// forgtPwLbl
			// 
			this->forgtPwLbl->AutoSize = true;
			this->forgtPwLbl->BackColor = System::Drawing::Color::Transparent;
			this->forgtPwLbl->Cursor = System::Windows::Forms::Cursors::Hand;
			this->forgtPwLbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->forgtPwLbl->ForeColor = System::Drawing::Color::DimGray;
			this->forgtPwLbl->Location = System::Drawing::Point(951, 438);
			this->forgtPwLbl->Name = L"forgtPwLbl";
			this->forgtPwLbl->Size = System::Drawing::Size(119, 16);
			this->forgtPwLbl->TabIndex = 7;
			this->forgtPwLbl->Text = L"Forgot Password \?";
			this->forgtPwLbl->Click += gcnew System::EventHandler(this, &LoginForm::forgtPwLbl_Click);
			// 
			// cbShowPassword
			// 
			this->cbShowPassword->AutoSize = true;
			this->cbShowPassword->Cursor = System::Windows::Forms::Cursors::Hand;
			this->cbShowPassword->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cbShowPassword->ForeColor = System::Drawing::SystemColors::GrayText;
			this->cbShowPassword->Location = System::Drawing::Point(804, 437);
			this->cbShowPassword->Name = L"cbShowPassword";
			this->cbShowPassword->Size = System::Drawing::Size(125, 20);
			this->cbShowPassword->TabIndex = 3;
			this->cbShowPassword->Text = L"Show Password";
			this->cbShowPassword->UseVisualStyleBackColor = true;
			this->cbShowPassword->CheckedChanged += gcnew System::EventHandler(this, &LoginForm::cbShowPassword_CheckedChanged);
			// 
			// LoginForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(16, 31);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Lavender;
			this->ClientSize = System::Drawing::Size(1161, 682);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->forgtPwLbl);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->llRegister);
			this->Controls->Add(this->btnOK);
			this->Controls->Add(this->tbPassword);
			this->Controls->Add(this->tbEmail);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->cbShowPassword);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(6);
			this->MaximizeBox = false;
			this->Name = L"LoginForm";
			this->Text = L"Login | Personal Organizer";
			this->Load += gcnew System::EventHandler(this, &LoginForm::LoginForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void LoginForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}

	public: User^ user = nullptr;

		  // Function to hash the password
		  System::String^ HashPassword(System::String^ password)
		  {
			  // Create an instance of the SHA256 class
			  System::Security::Cryptography::SHA256^ sha256 = System::Security::Cryptography::SHA256::Create();

			  // Convert the password to a byte array
			  array<Byte>^ data = sha256->ComputeHash(System::Text::Encoding::UTF8->GetBytes(password));

			  // Convert the byte array back to a string
			  System::Text::StringBuilder^ sb = gcnew System::Text::StringBuilder();
			  for (int i = 0; i < data->Length; i++)
			  {
				  sb->Append(data[i].ToString("x2"));
			  }

			  return sb->ToString();
		  }


		  public: System::Void btnOK_Click(System::Object^ sender, System::EventArgs^ e) {
			  String^ email = tbEmail->Text;
			  String^ password = tbPassword->Text;

			  if (email->Length == 0 || password->Length == 0) {
				  MessageBox::Show("Please enter email and password", "Email or Password Empty", MessageBoxButtons::OK,MessageBoxIcon::Error);
				  return;
			  }

			  try {
				  DatabaseHelper^ dbHelper = DatabaseHelper::GetInstance();
				  dbHelper->OpenConnection();
				  SqlConnection^ connection = dbHelper->GetConnection();

				  // Hash the entered password
				  String^ hashedEnteredPassword = HashPassword(password);

				  // Retrieve the stored password hash
				  String^ storedHash = GetStoredPasswordHash(connection, email);

				  // Compare the hashed entered password with the stored hash
				  if (hashedEnteredPassword != storedHash) {
					  MessageBox::Show("Email or Password is incorrect", "Email or Password Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
					  return;
				  }

				  // If passwords match, proceed to retrieve user data
				  SqlCommand^ command = gcnew SqlCommand("SELECT * FROM users WHERE email = @email", connection);
				  command->Parameters->AddWithValue("@email", email);
				  command->Parameters->AddWithValue("@password", hashedEnteredPassword);

				  SqlDataReader^ reader = command->ExecuteReader();
				  if (reader->Read()) {
					  user = gcnew User;
					  user->id = reader->GetInt32(0);
					  user->name = reader->GetString(1);
					  user->email = reader->GetString(2);
					  user->phone = reader->GetString(3);
					  user->address = reader->GetString(4);
					  user->password = reader->GetString(5);  // This is the stored password (which is already hashed)
					  this->Close();
				  }
				  else {
					  MessageBox::Show("Email or Password is incorrect", "Email or Password Error", MessageBoxButtons::OK);
				  }

				  reader->Close();
				  dbHelper->CloseConnection();
			  }
			  catch (Exception^ ex) {
				  MessageBox::Show("Failed to connect to database", "Database Connection Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				  return;
			  }
		  }

				 String^ GetStoredPasswordHash(SqlConnection^ connection, System::String^ email) {
					 /*DatabaseHelper^ dbHelper = DatabaseHelper::GetInstance();
					 dbHelper->OpenConnection();
					 SqlConnection^ connection = dbHelper->GetConnection();*/

					 SqlCommand^ command = gcnew SqlCommand("SELECT password FROM users WHERE email = @email", connection);
					 command->Parameters->AddWithValue("@email", email);

					 String^ storedHash = safe_cast<String^>(command->ExecuteScalar());  // Get the stored password hash
					/* dbHelper->CloseConnection();*/

					 return storedHash;
				 }


 
	private: System::Void tbEmail_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		this->tbEmail->Focus();
	}

public: bool switchToRegister = false;
private: System::Void llRegister_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	switchToRegister = true;
	this->Close();
}
private: System::Void tbEmail_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
	if (e->KeyCode == Keys::Enter) {
		this->tbPassword->Focus();
	}
}

	   private: System::Void cbShowPassword_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		   if (cbShowPassword->Checked) {
			   tbPassword->PasswordChar = '\0';
		   }
		   else {
			   tbPassword->PasswordChar = '*';
		   }
	   }

private: System::Void forgtPwLbl_Click(System::Object^ sender, System::EventArgs^ e) {
	ForgotPasswordForm^ forgotPasswordForm = gcnew ForgotPasswordForm();
	forgotPasswordForm->ShowDialog();
	tbEmail->Text = "";
	tbPassword->Text = "";
}
};  
}