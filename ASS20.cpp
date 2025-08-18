#include <iostream>
#include <string>
using namespace std;


bool ask(string question) {
    string ans;
    cout << question << " (y/n): ";
    cin >> ans;
    for (auto &c : ans) c = tolower(c);
    return ( ans == "y");
}

int main() {
    cout << "START\n";
    cout << "INITIALIZE(I)\n";
    cout << "PROCESS(P)\n";

    
    if (ask("Regular hiring process?")) {
        cout << "Post job internally\n";
        if (!ask("Suitable Candidate?")) {
            cout << "Review existing resumes on file\n";
            if (!ask("Suitable Candidate?")) {
                cout << "Develop recruitment plan\n";
                cout << "Place advertisement\n";
                cout << "Collect applications\n";
                if (!ask("Qualified resume?")) {
                    cout << "Candidates not hired\n";
                    return 0;
                }
            }
        }
    } else {
        cout << "Special hiring process\n";
    }

    
    cout << "Arrange candidates meeting\n";
    cout << "Conduct pre-interview\n";
    cout << "Setup interview questions\n";
    cout << "Conduct interview\n";
    if (!ask("Good reference?")) {
        cout << "Candidates not hired\n";
        return 0;
    }

    
    cout << "Select Candidate\n";
    cout << "Evaluate pay rate\n";
    cout << "Send employment offer\n";
    if (ask("Candidate confirms offer?")) {
        cout << "Hire Candidate\n";
    } else {
        cout << "Candidates not hired\n";
    }

    cout << "STOP\n";
    return 0;
}