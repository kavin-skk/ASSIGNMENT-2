#include <iostream>
#include <string>
using namespace std;

int main() {
    string storedPassword = "secure123";  
    string inputPassword;
    int maxAttempts = 5;
    int attempts = 0;
    bool authorized = false;

    cout << "===== Secure Login System =====\n";

    while (attempts < maxAttempts) {
        cout << "Enter password: ";
        cin >> inputPassword;

        if (inputPassword == storedPassword) {
            
            char choice;
            cout << "Is user authorized? (y/n): ";
            cin >> choice;

            if (choice == 'y' || choice == 'Y') {
                authorized = true;
                break; 
            } else {
                cout << "User not authorized. Try again.\n";
                attempts++;
            }
        } else {
            cout << "Incorrect password.\n";
            attempts++;
        }

        cout << "Attempts left: " << (maxAttempts - attempts) << endl;
    }

    if (authorized) {
        cout << "Access granted. Welcome!\n";
    } else {
        cout << "Account locked after " << maxAttempts << " failed attempts.\n";
        cout << "Alert: User account locked for security reasons.\n";
    }

    cout << "===== End =====\n";
    return 0;
}