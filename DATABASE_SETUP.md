# Database Configuration Setup

## Overview
For security reasons, the Personal Organizer App no longer contains hardcoded database passwords. This document explains how to configure your database connection securely.

## Environment Variable Configuration

### For Production (Azure SQL Database)
Set the `PERSONAL_ORGANIZER_DB_CONNECTION` environment variable with your Azure SQL Database connection string:

```
PERSONAL_ORGANIZER_DB_CONNECTION=Server=tcp:your-server.database.windows.net,1433;Initial Catalog=your-database;Persist Security Info=False;User ID=your-username;Password=your-secure-password;MultipleActiveResultSets=False;Encrypt=True;TrustServerCertificate=False;Connection Timeout=30;
```

### Setting Environment Variables

#### Windows
1. **System-wide (recommended for production):**
   - Right-click "This PC" → Properties → Advanced System Settings
   - Click "Environment Variables"
   - Under "System Variables", click "New"
   - Variable name: `PERSONAL_ORGANIZER_DB_CONNECTION`
   - Variable value: Your connection string (without password exposed in code)

2. **Command Line (temporary):**
   ```cmd
   set PERSONAL_ORGANIZER_DB_CONNECTION=your-connection-string-here
   ```

3. **PowerShell (temporary):**
   ```powershell
   $env:PERSONAL_ORGANIZER_DB_CONNECTION="your-connection-string-here"
   ```

### For Development (Local SQL Server)
If no environment variable is set, the application will use local SQL Server with integrated security:
- Server: `.\SQLEXPRESS`
- Database: `personalOrganizerDB`
- Authentication: Windows Integrated Security

## Database Schema Setup
Ensure your database has the required tables:
- `users` - User account information
- `Income` - Income tracking records
- `Expense` - Expense tracking records
- `AcademicSchedule` - Schedule and deadline management

## Security Best Practices
1. **Never commit connection strings with passwords to source control**
2. **Use environment variables or secure configuration files for sensitive data**
3. **Rotate database passwords regularly**
4. **Use least-privilege database accounts**
5. **Enable database encryption in transit and at rest**

## Troubleshooting
- If you see a "Configuration Notice" dialog, it means the environment variable is not set
- Check that your connection string is properly formatted
- Verify database server accessibility and credentials
- Ensure firewall rules allow connection to your database server