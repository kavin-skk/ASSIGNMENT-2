#include <iostream>
#include <string>
using namespace std;

int main() {
    string method;
    cout << "Customer makes order by (phone/online): ";
    cin >> method;

    cout << "Request sent to server -> Incoming order\n";

    int minutesToPickup;

   
    while (true) {
        cout << "Enter minutes to pickup: ";
        cin >> minutesToPickup;

        if (minutesToPickup >= 30) {
            cout << "Yes: 30 minutes to pickup. Proceeding...\n";
            break;  
        } else {
            cout << "Not yet 30 minutes to pickup. Wait 1 minute...\n";
           
        }
    }

   
    char taxiFound;
    do {
        cout << "Searching for taxi within 10 km...\n";
        cout << "Taxi found (y/n): ";
        cin >> taxiFound;

        if (taxiFound == 'n' || taxiFound == 'N') {
            cout << "No taxi found. Wait 1 minute...\n";
        }
    } while (taxiFound == 'n' || taxiFound == 'N');

    
    cout << "Taxi found!\n";
    cout << "Assign passenger to driver\n";
    cout << "Taxi ride started...\n";
    cout << "Taxi ride finished\n";
    cout << "Order saved in history\n";
    cout << "End\n";

    return 0;
}