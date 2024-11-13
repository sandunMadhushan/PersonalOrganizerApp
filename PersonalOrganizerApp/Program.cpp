#include "LoginForm.h"
#include "MainForm.h"
#include "RegisterForm.h"

using namespace System;
using namespace System::Windows::Forms;

void main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	User^ user = nullptr;
	while (true) {
		PersonalOrganizerApp::LoginForm^ loginForm = gcnew PersonalOrganizerApp::LoginForm();
		loginForm->ShowDialog();

		if (loginForm->switchToRegister) {
			PersonalOrganizerApp::RegisterForm^ registerForm = gcnew PersonalOrganizerApp::RegisterForm();
			registerForm->ShowDialog();
		}
		else {
			user = loginForm->user;
			loginForm->Close(); 
			break;
		}
	}

	if (user != nullptr) {
		PersonalOrganizerApp::MainForm mainForm(user);
		Application::Run(% mainForm);
	}
}
