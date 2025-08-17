#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string coffeeType;

    cout << "=== Coffee Vending Machine ===" << endl;
    cout << "Powering on..." << endl;

    cout << "Menu: Mocha, Latte, Espresso" << endl;
    cout << "Enter your coffee choice: ";
    cin >> coffeeType;

    

    if (coffeeType == "mocha") {
        cout << "Adding chocolate powder..." << endl;
        cout << "Adding frothed milk..." << endl;
        cout << "Adding hot coffee..." << endl;
        cout << "Power pressed!" << endl;
    }
    else if (coffeeType == "latte") {
        cout << "Adding frothed milk..." << endl;
        cout << "Adding hot coffee..." << endl;
        cout << "Power pressed!" << endl;
    }
    else if (coffeeType == "espresso") {
        cout << "Adding hot coffee..." << endl;
        cout << "Power pressed!" << endl;
    }
    else {
        cout << "Invalid selection!" << endl;
    }

    cout << "Powering off..." << endl;
    cout << "Thank you!" << endl;

    return 0;
}