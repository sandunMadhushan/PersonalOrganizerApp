#include "RegisterForm.h"

using namespace PersonalOrganizerApp;

System::Void RegisterForm::llLogin_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
    // Signal the need to switch to the LoginForm
    this->DialogResult = System::Windows::Forms::DialogResult::Cancel;
    this->Hide();
}
