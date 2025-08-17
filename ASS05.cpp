#include <iostream>
using namespace std;

int main() {
    
    int marks;
    while(true){


    cout << "Enter marks (0-100): ";
    cin >> marks;

    // Process
    if (marks >= 0 && marks <= 100) {
          if (marks >= 80) {
            cout << "Grade: A" << endl;
        } 
        else if (marks > 60) {
            cout << "Grade: B" << endl;
        } 
        else if (marks >= 50) {
            cout << "Grade: C" << endl;
        } 
        else {
            cout << "Fail" << endl;
        }
    }
    else{
        cout<<"invalid marks"<<endl;
        continue;
    } 
   
    
    return 0;
}
}