#include <iostream>
using namespace std;

int main() {
    bool planeArrived = false;
    bool passportValid = false;
    int totalPassengers, firstClassPassengers;

    
    while (!planeArrived) {
        cout << "Has the plane arrived at the gate? (1 = Yes / 0 = No): ";
        cin >> planeArrived;
        if (!planeArrived) {
            cout << "Plane not arrived yet... waiting and checking again.\n";
        }
    }

    
    while (!passportValid) {
        cout << "Is the passport check valid? (1 = Yes / 0 = No): ";
        cin >> passportValid;
        if (!passportValid) {
            cout << "Passport invalid. Please check again...\n";
        }
    }

    
    cout << "Enter total number of passengers: ";
    cin >> totalPassengers;
    cout << "Enter number of First-Class passengers: ";
    cin >> firstClassPassengers;

    int halfFirstClass = firstClassPassengers / 2;
    int boardedFC = 0;

    
    cout << "\n--- Priority Boarding ---\n";
    while (boardedFC < halfFirstClass) {
        cout << "Enter total number of First-Class passengers boarded so far: ";
        cin >> boardedFC;

        if (boardedFC < halfFirstClass) {
            cout << "Less than half of First-Class passengers are onboard."
                 << " Please continue priority boarding...\n\n";
        }
    }

   
    cout << "\nHalf of the First-Class passengers have boarded → GENERAL boarding started.\n";

    bool allBoarded = false;
    while (!allBoarded) {
        cout << "Have all passengers boarded? (1 = Yes / 0 = No): ";
        int ans;
        cin >> ans;

        if (ans == 1) {
            allBoarded = true;
            cout << "All passengers are now onboard.\n";
        } else {
            cout << "Waiting / continuing general boarding...\n";
        }
    }
    cout << "\n5 minutes before gate closes...\n";
    cout << "Final Announcement: Please board immediately!\n";
    cout << "Waiting 5 minutes...\n";
    cout << "Gate closed. Flight ready for departure.\n";

    return 0;
}