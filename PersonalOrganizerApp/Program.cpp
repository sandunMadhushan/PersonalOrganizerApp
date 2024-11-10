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
		PersonalOrganizerApp::LoginForm loginForm;
		loginForm.ShowDialog();

		if (loginForm.switchToRegister)
		{
			PersonalOrganizerApp::RegisterForm registerForm;
			registerForm.ShowDialog();
		}
		else
		{
			user = loginForm.user;
			break;
		}
	}

	PersonalOrganizerApp::MainForm mainForm(user);
	Application::Run(% mainForm);

}