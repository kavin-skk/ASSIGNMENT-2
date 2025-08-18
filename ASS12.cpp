#include <iostream>
#include <string>
using namespace std;

int main() {
    
    cout << "Process Started...\n";

    
    string bankCard, accNumber;
    cout << "Insert bank card: "<<endl;
    
    cout << "Enter account number: ";
    cin >> accNumber;

    
    cout << "Bank account accessed: " << accNumber << endl;
    string cheque;
    cout << "Insert cheque: "<<endl;
    

    double value;
    cout << "Enter cheque value: ";
    cin >> value;

    string senderAcc;
    cout << "Enter sender account: ";
    cin >> senderAcc;

   
    int days;
    cout << "Enter number of days since cheque inserted: ";
    cin >> days;

    if (days >= 7) {
        
        cout << "7 days completed. Processing transfer...\n";
        cout << "Money transferred successfully.\n";
        cout << "End Process.\n";
    } 
    else {
        
        char review;
        cout << "Did sender review the cheque? (y/n): ";
        cin >> review;

        if (review == 'y' || review == 'Y') {
            char authorize;
            cout << "Did sender authorize transaction? (y/n): ";
            cin >> authorize;

            if (authorize == 'y' || authorize == 'Y') {
                cout << "Money transferred successfully.\n";
                cout << "End Process.\n";
            } 
            else {
                cout << "Invalid transaction.\n";
                cout << "End Process.\n";
            }
        } 
        else {
            cout << "Transaction cancelled. End Process.\n";
        }
    }

    return 0;
}
