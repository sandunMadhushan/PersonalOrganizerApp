#include "LoginForm.h"

using namespace PersonalOrganizerApp;


System::Void LoginForm::llRegister_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
    isExiting = true;
    switchToRegister = true;
    // Signal the need to switch to the RegisterForm
    this->DialogResult = System::Windows::Forms::DialogResult::Abort;
    this->Hide();
    isExiting = false;
}
   


