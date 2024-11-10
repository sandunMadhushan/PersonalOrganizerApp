#pragma once
#include "User.h"
#include "IncomeExpenseForm.h"

namespace PersonalOrganizerApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(User ^user)
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
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ toggleButton;
	private: System::Windows::Forms::Timer^ sidebarTimer;
	private: System::ComponentModel::IContainer^ components;



	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MainForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->toggleButton = (gcnew System::Windows::Forms::Button());
			this->sidebarTimer = (gcnew System::Windows::Forms::Timer(this->components));
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(22, 13);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(965, 59);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Welcome";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.Image")));
			this->button1->Location = System::Drawing::Point(12, 51);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(185, 195);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Income / Expenses";
			this->button1->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button1->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MainForm::button1_Click);
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->toggleButton);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(208, 750);
			this->panel1->TabIndex = 2;
			// 
			// toggleButton
			// 
			this->toggleButton->Dock = System::Windows::Forms::DockStyle::Top;
			this->toggleButton->Location = System::Drawing::Point(0, 0);
			this->toggleButton->Name = L"toggleButton";
			this->toggleButton->Size = System::Drawing::Size(208, 23);
			this->toggleButton->TabIndex = 2;
			this->toggleButton->Text = L"toggleButton";
			this->toggleButton->UseVisualStyleBackColor = true;
			this->toggleButton->Click += gcnew System::EventHandler(this, &MainForm::toggleButton_Click);
			// 
			// sidebarTimer
			// 
			this->sidebarTimer->Tick += gcnew System::EventHandler(this, &MainForm::sidebarTimer_Tick);
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(999, 750);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->label1);
			this->MaximizeBox = false;
			this->Name = L"MainForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MainForm";
			this->panel1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		IncomeExpenseForm^ incomeExpenseForm = gcnew IncomeExpenseForm();
		incomeExpenseForm->Show();
		this->Hide();
	}

private: bool isCollapsing = false;
private: bool isExpanding = false;

	private: System::Void toggleButton_Click(System::Object^ sender, System::EventArgs^ e) {
		if (panel1->Width == 208) {
			panel1->Width = 50;
			isCollapsing = true;
			isExpanding = false;
		}
		else {
			panel1->Width = 208;
			isExpanding = true;
			isCollapsing = false;
		}
		sidebarTimer->Start();
	}
		   void ToggleSidebar() {
			   int collapsedWidth = 50; // Width when collapsed
			   int expandedWidth = 200; // Width when expanded
			   int collapsedButtonSize = 40; // Button size when sidebar is collapsed
			   int expandedButtonSize = 80;  // Button size when sidebar is expanded

			   if (panel1->Width == expandedWidth) {
				   // Collapse sidebar
				   panel1->Width = collapsedWidth;

				   // Hide button text and adjust size
				   button1->Text = "";
				   button1->Width = collapsedButtonSize;
				   button1->Height = collapsedButtonSize;

				   toggleButton->Text = "";
				   toggleButton->Width = collapsedButtonSize;
				   toggleButton->Height = collapsedButtonSize;

				   // Adjust button image layout if needed
				   button1->ImageAlign = ContentAlignment::MiddleCenter;
				   toggleButton->ImageAlign = ContentAlignment::MiddleCenter;
			   }
			   else {
				   // Expand sidebar
				   panel1->Width = expandedWidth;

				   // Restore button text and size
				   button1->Text = "Button 1";
				   button1->Width = expandedButtonSize;
				   button1->Height = expandedButtonSize;

				   toggleButton->Text = "Button 2";
				   toggleButton->Width = expandedButtonSize;
				   toggleButton->Height = expandedButtonSize;

				   // Restore image alignment
				   button1->ImageAlign = ContentAlignment::MiddleLeft;
				   toggleButton->ImageAlign = ContentAlignment::MiddleLeft;
			   }
		   }

private: System::Void sidebarTimer_Tick(System::Object^ sender, System::EventArgs^ e) {
	if (isCollapsing) {
		if (panel1->Width > 50) {
			panel1->Width -= 10; // Adjust decrement for desired speed
			// Optionally hide button text during collapse
			button1->Text = "";
			toggleButton->Text = "";
			// Add similar lines for other buttons
		}
		else {
			// Stop the timer when fully collapsed
			sidebarTimer->Stop();
			isCollapsing = false;
		}
	}
	else if (isExpanding) {
		if (panel1->Width < 200) {
			panel1->Width += 10; // Adjust increment for desired speed
			// Optionally show button text during expand
			button1->Text = "Home";
			toggleButton->Text = "Settings";
			// Add similar lines for other buttons
		}
		else {
			// Stop the timer when fully expanded
			sidebarTimer->Stop();
			isExpanding = false;
		}
	}
}

};
}
