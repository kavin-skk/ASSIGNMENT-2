#include <iostream>
using namespace std;


bool isValid(char input) {
    return (input == 'y' || input == 'Y' || input == 'n' || input == 'N' ||
            input == '1' || input == '0');
}

int main() {

    bool verified = false;
    bool visaNeeded = false, visaApplied = false;
    bool feePaid   = false;
    bool accommodationNeeded = false;
    bool extraCredits = false;

    char input;

    cout << "---- STUDENT REGISTRATION PROCESS ----\n";

    
    do {
        cout << "Complete registration form." << endl;
        cout << "Has admission office verified the form? (y/n): ";
        cin >> input;

        
        if(!isValid(input)) {
            cout << "Invalid input. Program terminated." << endl;
            return 0;
        }

        verified = (input == 'y' || input == 'Y' || input == '1'); 
        if(!verified) {
            cout << "Form NOT verified. Please complete the registration form again.\n\n";
        }
    } while(!verified);

    cout << "\nForm sent to corresponding department...\n";
    cout << "Student information updated.\n";

    
    cout << "Does the student need a visa? (y/n): ";
    cin >> input;
    if(!isValid(input)) {
        cout << "Invalid input. Program terminated." << endl;
        return 0;
    }
    visaNeeded = (input == 'y' || input == 'Y' || input == '1');

    if (visaNeeded) {
        cout << "Inform student to apply for visa.\n";
        cout << "Has the student applied for visa? (y/n): ";
        cin >> input;
        if(!isValid(input)) {
            cout << "Invalid input. Program terminated." << endl;
            return 0;
        }
        visaApplied = (input == 'y' || input == 'Y' || input == '1');
        if(!visaApplied) {
            return 0;
        }
    }

   
    cout << "Has the student paid the tuition fee? (y/n): ";
    cin >> input;
    if(!isValid(input)) {
        cout << "Invalid input. Program terminated." << endl;
        return 0;
    }
    feePaid = (input == 'y' || input == 'Y' || input == '1');
    if(!feePaid) {
        cout << "Ask student to pay tuition fee.\n";
        cout << "Fee paid now? (y/n): ";
        cin >> input;
        if(!isValid(input)) {
            cout << "Invalid input. Program terminated." << endl;
            return 0;
        }
        feePaid = (input == 'y' || input == 'Y' || input == '1');
        if(!feePaid) {
            cout << "Registration pending until fee is paid.\n";
            return 0;
        }
    }

    
    cout << "Does the student need accommodation? (y/n): ";
    cin >> input;
    if(!isValid(input)) {
        cout << "Invalid input. Program terminated." << endl;
        return 0;
    }
    accommodationNeeded = (input == 'y' || input == 'Y' || input == '1');
    if(accommodationNeeded) {
        cout << "Assigning accommodation...\n";
    }

    
    cout << "Assigning personal tutor...\n";
    cout << "Meeting personal tutor...\n";

    while(true){
        cout << "Does the student have extra credits? (y/n): ";
        cin >> input;
        if(!isValid(input)) {
            cout << "Invalid input. Program terminated." << endl;
            return 0;
        }
        extraCredits = (input == 'y' || input == 'Y' || input == '1');
        if(!extraCredits) {
            cout << "Student must choose additional courses.\n";
            continue;
        }
        break;
    }

    cout << "\nStudent fully registered. END of process." << endl;
    return 0;
}