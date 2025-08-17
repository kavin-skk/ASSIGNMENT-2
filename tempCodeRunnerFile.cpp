#include <iostream>
using namespace std;

int main() {
    
    bool raining;        
    bool foundUmbrella;   
    bool umbrellaFlag;    

    cout << "Is it raining? (1 = Yes, 0 = No): ";
    cin >> raining;

    if (!raining) {
        
        cout << "Don't bring umbrella.\n";
        return 0;
    }

    cout<< "search for umberlla"<<endl;
    cout << "Did you find the umbrella? (1 = Yes, 0 = No): ";
    cin >> foundUmbrella;

    if (foundUmbrella) {
        // Termination
        cout << "Bring umbrella.\n";
        return 0;
    }

    
    cout << "Is it still raining? (1 = Yes, 0 = No): ";
    cin >> raining;

    if (!raining) {
        // Termination
        cout << "Don't bring umbrella.\n";
        return 0;
    }
    cout << "Found umbrella = 1? (1 = Yes, 0 = No): ";
    cin >> umbrellaFlag;

    if (umbrellaFlag) {
        // Termination
        cout << "Bring umbrella.\n";
    } else {
        // Termination
        cout << "Don't bring umbrella.\n";
    }

    return 0;
}