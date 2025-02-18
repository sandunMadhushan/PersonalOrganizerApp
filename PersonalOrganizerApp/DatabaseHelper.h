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

    
    DatabaseHelper() {
        //Local SQL Server
        //String^ connectionString = "Data Source=DESKTOP-MDO4CSL\\sqlexpress;Initial Catalog=personalOrganizerDB;Integrated Security=True;Encrypt=True;TrustServerCertificate=True";
        //connection = gcnew SqlConnection(connectionString);

		//Azure SQL Server
		String^ connectionString = "Server=tcp:personalorganizer.database.windows.net,1433;Initial Catalog=personalorganizerdb;Persist Security Info=False;User ID=adminpo;Password=PersonalOrg!;MultipleActiveResultSets=False;Encrypt=True;TrustServerCertificate=False;Connection Timeout=30;";
		connection = gcnew SqlConnection(connectionString);
    }

public:
    static DatabaseHelper^ GetInstance() {
        if (instance == nullptr) {
            instance = gcnew DatabaseHelper();
        }
        return instance;
    }

    
    bool OpenConnection() {
        if (connection->State != System::Data::ConnectionState::Open) {
            connection->Open();
        }
        return connection->State == System::Data::ConnectionState::Open;
    }

    
    void CloseConnection() {
        if (connection->State != System::Data::ConnectionState::Closed) {
            connection->Close();
        }
    }

    
    SqlConnection^ GetConnection() {
        return connection;
    }

    
    DataTable^ ExecuteQuery(String^ query) {
        SqlDataAdapter^ dataAdapter = gcnew SqlDataAdapter(query, connection);
        DataTable^ dataTable = gcnew DataTable();  
        try {
            if (OpenConnection()) {
                dataAdapter->Fill(dataTable);  
            }
        }
        catch (Exception^ e) {
            MessageBox::Show("Error executing query: " + e->Message);
        }
        return dataTable;  
    }
};
