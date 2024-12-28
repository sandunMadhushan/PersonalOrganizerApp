#include "FinancialReportForm.h"
#include "MainForm.h"

using namespace PersonalOrganizerApp;

System::Void FinancialReportForm::backArrow_Click(System::Object^ sender, System::EventArgs^ e) {
    isExiting = true;
    // Hide the current form (IncomeExpenseForm)
    this->Hide();

    // Create a new instance of MainForm, passing the 'user' object
    MainForm^ mainForm = gcnew MainForm(user);

    // Show MainForm as a dialog
    mainForm->ShowDialog();

    // Close the current form after the MainForm is closed
    this->Close();
}

