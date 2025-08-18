#include <iostream>
#include <string>
using namespace std;

int main() {
    string input;
    cout << "=== AIR TRAVEL PROCESS SIMULATION ===" << endl;

    
    cout << "Start" << endl;

    
    cout << "Check-in completed." << endl;

    
    cout << "Baggage dropped." << endl;

   
    cout << "Security Screening..." << endl;

    
    char restricted;
    cout << "Do you have restricted articles? (y/n): ";
    cin >> restricted;
    if (restricted == 'y' 
    ) {
        cout << "Give up articles above permitted limit." << endl;
    }

   
    char metal;
    cout << "Metal detected? (y/n): ";
    cin >> metal;
    if (metal == 'y' || metal == 'Y') {
        cout << "Hand Search..." << endl;
    }

    
    char dangerous;
    cout << "Carrying dangerous goods? (y/n): ";
    cin >> dangerous;
    if (dangerous == 'y' ) {
        cout << "Give up dangerous goods." << endl;
    }

   
    cout << "Immigration check done." << endl;

    
    cout << "Boarding flight..." << endl;
    cout << "Flight departs..." << endl;
    cout << "Flight lands..." << endl;

    
    char connection;
    cout << "Do you have a connecting flight? (y/n): ";
    cin >> connection;
    if (connection == 'y' ) {
        cout << "Proceed to next flight connection process..." << endl;
    } else {
        
        cout << "Leave flight." << endl;
        cout << "Immigration (arrival)." << endl;

        
        char permit;
        cout << "Permit to enter country granted? (y/n): ";
        cin >> permit;
        if (permit == 'n' ) {
            cout << "Passenger sent to originate country." << endl;
            cout << "=== PROCESS ENDS ===" << endl;
            return 0;
        }

        
        cout << "Claim baggage." << endl;
    }

    
    cout << "=== PROCESS ENDS ===" << endl;
    return 0;
}