#include <iostream>
#include <string>
using namespace std;


void processUser();
void processAdmin();

int main() {
    cout << "start\n";

    int isAdmin;
    cout << "Admin? (1 = YES, 0 = NO): ";
    cin >> isAdmin;

    if (isAdmin == 1) {
         
        processAdmin();
        cout << "stop\n";
    } 
    else {
       
        processUser();
        cout << "stop\n";
    }
    return 0;
}

void processUser() {
    string password = "";
    char isRegistered;

    
    cout << "\nRegistered user? (Y/N): ";
    cin >> isRegistered;

    if (isRegistered == 'N' || isRegistered == 'n') {
        
        cout << "New User\n";
        cout << "Application...\n";
        
        
        cout << "Create new password: ";
        cin >> password;
        cout << "Password saved (P1 return)\n";

        
        cout << "Proceeding to Login...\n";
    }

    
    while (true) {
        cout << "Login\n";
        int forgot;
        cout << "Forgot password? (1 = YES, 0 = NO): ";
        cin >> forgot;

        if (forgot == 1) {
        
            cout << "Request new password...\n";
            cout << "Enter new password: ";
            cin >> password;
            cout << "Password reset (P1 return)\n";
            continue;  
        }


        cout << "Enter password: ";
        string input;
        cin >> input;
        if (input == password) {
            cout << "Correct password\n";
            break;
        } 
        else {
            cout << "Incorrect password → back to Login\n";
        }
    }

    
    cout << "Look for desired vehicle...\n";
    cout << "Make payment...\n";
    cout << "Rtn\n";  
}

void processAdmin() {
    string adminPassword = "admin123";
    string input;

    
    while (true) {
        cout << "Admin login\n";
        cout << "Enter password: ";
        cin >> input;

        if (input == adminPassword) {
            cout << "Valid password\n";
            break;
        } else {
            cout << "Invalid password → back to Admin login\n";
        }
    }

    int choice = 0;
    while (choice != 3) {
        cout << "Choose application:\n";
        cout << "1. Update car library\n";
        cout << "2. Answer customer queries\n";
        cout << "3. Logout\n";
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1) {
            cout << "Updating car library...\n";
        } 
        else if (choice == 2) {
            cout << "Answering customer queries...\n";
        } 
        else if (choice == 3) {
            cout << "Logout\n";
            cout << "Rtn\n"; 
        } 
        else {
            cout << "Invalid choice\n";
        }
    }
}