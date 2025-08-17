#include <iostream>
#include <string>
using namespace std;

int main() {
    cout << "Customer found an issue...\n";
    cout << "Customer contacts customer service.\n";

    
    char enquiry;
    cout << "Is it a general enquiry? (y/n): ";
    cin >> enquiry;

    if (enquiry == 'y' ) {
        cout << "Answering customer enquiry...\n";
    }
    else {
       
        char salesIssue;
        cout << "Is it a sales issue? (y/n): ";
        cin >> salesIssue;

        if (salesIssue == 'y') {
            cout << "Redirecting to sales support...\n";
            cout << "Sales support fixed the issue.\n";
        }
        else {
            
            char technicalIssue;
            cout << "Is it a technical issue? (y/n): ";
            cin >> technicalIssue;

            if (technicalIssue == 'y' ) {
                cout << "Contacting technical team...\n";
                cout << "Technical team fixed the issue.\n";
            }
            else {
                
                char newIssue;
                cout << "Is it a new issue? (y/n): ";
                cin >> newIssue;

                if (newIssue == 'y' ) {
                    cout << "Testing the issue...\n";

                    char simulate;
                    cout << "Can you simulate the issue? (y/n): ";
                    cin >> simulate;

                    if (simulate == 'y' ) {
                        cout << "Creating error report...\n";
                        cout << "Saving error report to error database...\n";
                        bool issueFixed = false;
                        while(!issueFixed) {
                            cout << "Running error analysis...\n";
                            cout << "Solving issue...\n";
                            char fixed;
                            cout << "Issue fixed (y/n)?: ";
                            cin >> fixed;
                            issueFixed = (fixed == 'y' );
                        }
                    }
                    else {
                        cout << "Contacting customer for more information...\n";
                        bool issueFixed = false;
                        while(!issueFixed) {
                            cout << "Running error analysis...\n";
                            cout << "Solving issue...\n";
                            char fixed;
                            cout << "Issue fixed (y/n)?: ";
                            cin >> fixed;
                            issueFixed = (fixed == 'y' );
                        }
                    }
                }
                else {
                    cout << "Resolving issue (non-new issue)...\n";
                }
            }
        }
    }

    cout<<"confirmation issue fixed with customer"<<endl;
    char feedback;
    cout << "Did the customer provide feedback? (y/n): ";
    cin >> feedback;

    if (feedback == 'y' ) {
        cout << "Thank you for your survey!\n";
    }
    else {
        cout << "Please fill out the survey...\n";
    }

    cout << "End of process.\n";
    return 0;
}