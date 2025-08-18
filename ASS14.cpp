#include <iostream>
using namespace std;

int main() {
    cout << "---- Train Ticket Booking System ----\n";
    
    
    cout << "Step 1: Buy Ticket\n";

    
    char needReservation;
    cout << "Do you need a seat reservation? (y/n): ";
    cin >> needReservation;

    bool hasReservation = false;
    if (needReservation == 'y' || needReservation == 'Y') {
        hasReservation = true;
        cout << "Seat reservation required.\n";
    } else {
        char wantReservation;
        cout << "Do you want to make a reservation anyway? (y/n): ";
        cin >> wantReservation;
        if (wantReservation == 'y' || wantReservation == 'Y') {
            hasReservation = true;
            cout << "Seat reserved.\n";
        }
    }

    
    char collectMethod;
    cout << "How do you want to collect the ticket? (m = mail, t = ticket machine): ";
    cin >> collectMethod;

    if (collectMethod == 'm' || collectMethod == 'M') {
        cout << "Please check your mailbox in 3 days.\n";
    } else {
        cout << "Please collect your ticket from the ticket machine.\n";
    }

  
    cout << "You have boarded the train.\n";

    // Step 5: Seat choice (loop until valid input)
    char reserved;
    while (true) {
        cout << "Reserved? (y/n): ";
        cin >> reserved;

        if (reserved == 'y' || reserved == 'Y') {
            cout << "Look for your assigned seat.\n";
            cout << "Ticket checked by inspector.\n"; 
            break;
        } 
        else if (reserved == 'n' || reserved == 'N') {
            cout << "Look for seat\n";
            cout << "Ticket checked by inspector\n";
            break;
        } 
        else {
            cout << "Invalid input! Please enter y or n.\n";
        }
    }

    // Step 6: Discount check
    char discounted;
    while (true) {
        cout << "Is your ticket discounted? (y/n): ";
        cin >> discounted;

        if (discounted == 'y' || discounted == 'Y') {
            cout << "Please show valid documentation.\n";
            break;
        } 
        else if (discounted == 'n' || discounted == 'N') {
            break;
        } 
        else {
            cout << "Invalid input! Please enter y or n.\n";
        }
    }

    
    cout << "Arrived at destination.\n";

   
    cout << "You have left the train.\n";

    cout << "---- Journey Completed ----\n";
    return 0;
}