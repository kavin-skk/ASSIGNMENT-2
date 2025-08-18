#include <iostream>
using namespace std;

int main() {
    char choice;

    cout << "Start troubleshooting...\n";

    while (true) {
      
        cout << "\nIs the computer ON? (y/n): ";
        cin >> choice;

        if (choice == 'y' ) {
         
            cout << "Is there an error message? (y/n): ";
            cin >> choice;

            if (choice == 'y' ) {
                cout << "Action: Perform Diagnosis.\n";
            } else {
                cout << "Status: Computer in good condition.\n";
            }
            break; 

        } else {
            // Step 3: Power light check
            cout << "Is the power light ON? (y/n): ";
            cin >> choice;

            if (choice == 'y' || choice == 'Y') {
                cout << "Action: Find a specialist.\n";
                break; 
            } else {
               
                cout << "Is the power cable plugged into the wall? (y/n): ";
                cin >> choice;

                if (choice == 'y') {
                    cout << "Action: Find a specialist.\n";
                    break;
                } else {
                    cout << "Action: Plug power into the wall.\n";
                    
                }
            }
        }
    }

    cout << "End of troubleshooting.\n";
    return 0;
}