#pragma once

namespace PersonalOrganizerApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for ForgotPasswordForm
	/// </summary>
	public ref class ForgotPasswordForm : public System::Windows::Forms::Form
	{
	public:
		ForgotPasswordForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			String^ email = EmailTB->Text;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~ForgotPasswordForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ newPasswordTextBox;
	private: System::Windows::Forms::TextBox^ confirmPasswordTextBox;


	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::CheckBox^ cbShowPassword;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ EmailTB;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ForgotPasswordForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->newPasswordTextBox = (gcnew System::Windows::Forms::TextBox());
			this->confirmPasswordTextBox = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->cbShowPassword = (gcnew System::Windows::Forms::CheckBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->EmailTB = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(439, 57);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(153, 25);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Reset Password";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(537, 242);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(119, 20);
			this->label2->TabIndex = 0;
			this->label2->Text = L"New password";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(537, 326);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(145, 20);
			this->label3->TabIndex = 0;
			this->label3->Text = L"Confirm password";
			// 
			// newPasswordTextBox
			// 
			this->newPasswordTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->newPasswordTextBox->Location = System::Drawing::Point(724, 232);
			this->newPasswordTextBox->Name = L"newPasswordTextBox";
			this->newPasswordTextBox->PasswordChar = '*';
			this->newPasswordTextBox->Size = System::Drawing::Size(179, 34);
			this->newPasswordTextBox->TabIndex = 2;
			// 
			// confirmPasswordTextBox
			// 
			this->confirmPasswordTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->confirmPasswordTextBox->Location = System::Drawing::Point(724, 316);
			this->confirmPasswordTextBox->Name = L"confirmPasswordTextBox";
			this->confirmPasswordTextBox->PasswordChar = '*';
			this->confirmPasswordTextBox->Size = System::Drawing::Size(179, 34);
			this->confirmPasswordTextBox->TabIndex = 3;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(-75, 122);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(580, 399);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 2;
			this->pictureBox1->TabStop = false;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::DodgerBlue;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(629, 456);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(169, 51);
			this->button1->TabIndex = 5;
			this->button1->Text = L"Change Password";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &ForgotPasswordForm::button1_Click);
			// 
			// cbShowPassword
			// 
			this->cbShowPassword->AutoSize = true;
			this->cbShowPassword->Cursor = System::Windows::Forms::Cursors::Hand;
			this->cbShowPassword->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cbShowPassword->ForeColor = System::Drawing::SystemColors::GrayText;
			this->cbShowPassword->Location = System::Drawing::Point(724, 377);
			this->cbShowPassword->Name = L"cbShowPassword";
			this->cbShowPassword->Size = System::Drawing::Size(125, 20);
			this->cbShowPassword->TabIndex = 4;
			this->cbShowPassword->Text = L"Show Password";
			this->cbShowPassword->UseVisualStyleBackColor = true;
			this->cbShowPassword->CheckedChanged += gcnew System::EventHandler(this, &ForgotPasswordForm::cbShowPassword_CheckedChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(537, 163);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(51, 20);
			this->label4->TabIndex = 0;
			this->label4->Text = L"Email";
			// 
			// EmailTB
			// 
			this->EmailTB->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->EmailTB->Location = System::Drawing::Point(724, 153);
			this->EmailTB->Name = L"EmailTB";
			this->EmailTB->Size = System::Drawing::Size(179, 34);
			this->EmailTB->TabIndex = 1;
			// 
			// ForgotPasswordForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1000, 600);
			this->Controls->Add(this->cbShowPassword);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->confirmPasswordTextBox);
			this->Controls->Add(this->EmailTB);
			this->Controls->Add(this->newPasswordTextBox);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"ForgotPasswordForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Reset Password";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void cbShowPassword_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (cbShowPassword->Checked) {
			newPasswordTextBox->PasswordChar = '\0';
			confirmPasswordTextBox->PasswordChar = '\0';
		}
		else {
			newPasswordTextBox->PasswordChar = '*';
			confirmPasswordTextBox->PasswordChar = '*';
		}
	}
		   // Hash the password
			public: String^ HashPassword(String^ password) {
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
			void UpdatePasswordInDatabase(String^ hashedPassword) {
				String^ email = EmailTB->Text;

					   SqlConnection^ con = gcnew SqlConnection("Data Source=DESKTOP-MDO4CSL\\sqlexpress;Initial Catalog=personalOrganizerDB;Integrated Security=True;Encrypt=True;TrustServerCertificate=True");
					   try {
						   con->Open();
						   String^ query = "UPDATE users SET password = @password WHERE email = @email"; 
						   SqlCommand^ cmd = gcnew SqlCommand(query, con);
						   cmd->Parameters->AddWithValue("@Email", email);
						   cmd->Parameters->AddWithValue("@password", hashedPassword);
						   cmd->ExecuteNonQuery();
						   MessageBox::Show("Password updated successfully.", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
					   }
					   catch (Exception^ ex) {
						   MessageBox::Show("Error: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
					   }
					   finally {
						   con->Close();
					   }
				   }


private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ newPassword = newPasswordTextBox->Text;
	String^ confirmPassword = confirmPasswordTextBox->Text;
	String^ email = EmailTB->Text;

	if (email == "" && newPassword == "" && confirmPassword == "")
	{
		MessageBox::Show("Please fill all fields.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}

	if (email == "") {
		MessageBox::Show("Please enter your email.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}
	if (newPassword == "") {
		MessageBox::Show("Please enter a new password.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}
	if (confirmPassword == "") {
		MessageBox::Show("Please confirm your password.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}

	if (newPassword != confirmPassword) {
		MessageBox::Show("Passwords do not match. Please try again.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}

	// Hash the password (you’ll need to include your hashing function here or call it)
	String^ hashedPassword = HashPassword(newPassword); // Implement your hash function

	// Update password in the database
	UpdatePasswordInDatabase(hashedPassword);
	this->Close();
}
	   

};
}
