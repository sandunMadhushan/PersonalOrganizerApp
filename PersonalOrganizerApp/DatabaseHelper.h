#pragma once
#using <System.Data.dll>

using namespace System;
using namespace System::Data;
using namespace System::Data::SqlClient;
using namespace System::Windows::Forms;

public ref class DatabaseHelper {
private:
    static DatabaseHelper^ instance = nullptr;
    SqlConnection^ connection;

    // Private constructor to prevent instantiation from outside
    DatabaseHelper() {
        String^ connectionString = "Data Source=DESKTOP-MDO4CSL\\sqlexpress;Initial Catalog=personalOrganizerDB;Integrated Security=True;Encrypt=True;TrustServerCertificate=True";
        connection = gcnew SqlConnection(connectionString);
    }

public:
    static DatabaseHelper^ GetInstance() {
        if (instance == nullptr) {
            instance = gcnew DatabaseHelper();
        }
        return instance;
    }

    // Open a connection to the database
    bool OpenConnection() {
        if (connection->State != System::Data::ConnectionState::Open) {
            connection->Open();
        }
        return connection->State == System::Data::ConnectionState::Open;
    }

    // Close the connection to the database
    void CloseConnection() {
        if (connection->State != System::Data::ConnectionState::Closed) {
            connection->Close();
        }
    }

    // Return the SqlConnection object
    SqlConnection^ GetConnection() {
        return connection;
    }

    // Method to execute a query and return a DataTable
    DataTable^ ExecuteQuery(String^ query) {
        SqlDataAdapter^ dataAdapter = gcnew SqlDataAdapter(query, connection);
        DataTable^ dataTable = gcnew DataTable();  // Ensure that this is correctly declared
        try {
            if (OpenConnection()) {
                dataAdapter->Fill(dataTable);  // This will fill the DataTable with results
            }
        }
        catch (Exception^ e) {
            MessageBox::Show("Error executing query: " + e->Message);
        }
        return dataTable;  // Return the filled DataTable
    }
};
