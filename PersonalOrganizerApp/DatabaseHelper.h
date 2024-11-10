#pragma once
//#include <iostream>
//#include <string>
//#include <msclr/marshal_cppstd.h>
//#using <System.Data.dll>

using namespace System;
using namespace System::Data::SqlClient;

public ref class DatabaseHelper {
private:
    static DatabaseHelper^ instance = nullptr;
    SqlConnection^ connection;

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
};
