#include <iostream>
using namespace std;

int main() {
    int primaryRing, ready, late;


    cout << "Did the primary alarm ring? (1 = Yes, 0 = No): ";
    cin >> primaryRing;

    if (primaryRing == 0) {
        cout << "Primary alarm failed. Activating backup alarm!\n";
    } else {
        
    }

   
    while (true) {
        cout << "Are you ready to wake up? (1 = Yes, 0 = No): ";
        cin >> ready;

        if (ready == 1) {
            cout << "Wake up.\n";
            cout << "Turn off alarm.\n";
            break;  
        }

        cout << "Will you be late if you keep sleeping? (1 = Yes, 0 = No): ";
        cin >> late;

        if (late == 1) {
            cout << "Wake up immediately!\n";
            cout << "Turn off alarm.\n";
            break;  
        } else {
            cout << "Snoozing for 5 minutes...\n";
            cout << "...\n";
            
        }
    }

    cout << "End of process.\n";
    return 0;
}