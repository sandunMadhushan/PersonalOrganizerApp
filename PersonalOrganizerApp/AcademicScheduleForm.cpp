#include "AcademicScheduleForm.h"
#include "MainForm.h"
#include "DatabaseHelper.h"

using namespace PersonalOrganizerApp;

System::Void AcademicScheduleForm::backArrow_Click(System::Object^ sender, System::EventArgs^ e) {
    // Close the connection to the database
    DatabaseHelper::GetInstance()->CloseConnection();

    // Hide the current form (AcademicScheduleForm)
    this->Hide();

    // Create a new instance of MainForm, passing the 'user' object
    MainForm^ mainForm = gcnew MainForm(user);

    // Show MainForm as a dialog
    mainForm->ShowDialog();

    // Close the current form after the MainForm is closed
    this->Close();
}
