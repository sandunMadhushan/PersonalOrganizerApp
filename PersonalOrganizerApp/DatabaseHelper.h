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
        String^ connectionString = GetConnectionString();
        connection = gcnew SqlConnection(connectionString);
    }

private:
    String^ GetConnectionString() {
        // Try to get connection string from environment variable first
        String^ envConnectionString = System::Environment::GetEnvironmentVariable("PERSONAL_ORGANIZER_DB_CONNECTION");
        
        if (!String::IsNullOrEmpty(envConnectionString)) {
            return envConnectionString;
        }
        
        // Fallback to local SQL Server for development (no hardcoded password)
        // For production, ensure PERSONAL_ORGANIZER_DB_CONNECTION environment variable is set
        String^ localConnectionString = "Data Source=.\\SQLEXPRESS;Initial Catalog=personalOrganizerDB;Integrated Security=True;Encrypt=True;TrustServerCertificate=True";
        
        MessageBox::Show("Warning: Using local database connection. For production deployment, set PERSONAL_ORGANIZER_DB_CONNECTION environment variable with your secure connection string.", 
                        "Configuration Notice", MessageBoxButtons::OK, MessageBoxIcon::Information);
        
        return localConnectionString;
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
