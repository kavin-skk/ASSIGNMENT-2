#include <iostream>
using namespace std;

int main() {
    bool cardValid, fundsAvailable, accountValid;
    bool transactionComplete = false;

    cout << "Order placed by client." << endl;

    while (!transactionComplete) {
        cout << "\nVerifying payment by card network..." << endl;

        cout << "Is the card valid? (1 = Yes, 0 = No): ";
        cin >> cardValid;

        if (!cardValid) {
            cout << "Payment failed: Invalid card. Please try again.\n";
            continue;  
        }

        cout << "Are sufficient funds available? (1 = Yes, 0 = No): ";
        cin >> fundsAvailable;

        if (!fundsAvailable) {
            cout << "Payment failed: Insufficient funds. Please try again.\n";
            continue;  
        }

        cout << "Payment verified by bank." << endl;

        cout << "Is the account valid? (1 = Yes, 0 = No): ";
        cin >> accountValid;

        if (!accountValid) {
            cout << "Payment failed: Invalid account. Please try again.\n";
            continue;  
        }

        
        cout << "\nTransaction Complete!" << endl;
        cout << "Customer database updated." << endl;
        cout << "Card holder will receive statement at the end of the cycle." << endl;
        transactionComplete = true; 
    }

    return 0;
}