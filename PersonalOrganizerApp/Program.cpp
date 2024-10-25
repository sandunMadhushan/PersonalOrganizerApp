#include "LoginForm.h"
#include "MainForm.h"

using namespace System;
using namespace System::Windows::Forms;

void main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	PersonalOrganizerApp::LoginForm loginForm;

	loginForm.ShowDialog();
	User^ user = loginForm.user;

	if (user != nullptr) {
		PersonalOrganizerApp::MainForm mainForm(user);
		Application::Run(% mainForm);
	}
	else
	{
		MessageBox::Show("Authentication Canceled", "Program.cpp",MessageBoxButtons::OK);
	}
	{

	}

}