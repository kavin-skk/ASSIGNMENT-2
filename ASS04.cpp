#include <iostream>
using namespace std;

int main() {

    bool footbridgeFound, tunnelFound, crossingFound;
    bool vehicleApproaching;
    char trafficLightColor;
    int attempts = 0; 

    cout << "=== Road Crossing Assistant ===" << endl;

    
    while (attempts < 2) { 
        attempts++; 

        
        cout << "Found footbridge? (1 = Yes, 0 = No): ";
        cin >> footbridgeFound;

        if (footbridgeFound) {
            cout << "Using footbridge..." << endl;
            break; 
        }

        
        cout << "Found tunnel? (1 = Yes, 0 = No): ";
        cin >> tunnelFound;

        if (tunnelFound) {
            cout << "Using tunnel..." << endl;
            break; 
        }

        
        cout << "Found crossing? (1 = Yes, 0 = No): ";
        cin >> crossingFound;

        if (crossingFound) {
            cout << "Traffic light color (g = Green / r = Red): ";
            cin >> trafficLightColor;

            if (trafficLightColor == 'g' || trafficLightColor == 'G') {
                cout << "Green light, cross the road..." << endl;
                break; 
            } else {
               
                cout << "Light is red, look left for vehicles." << endl;
                cout << "Vehicle approaching? (1 = Yes, 0 = No): ";
                cin >> vehicleApproaching;
            
                if (!vehicleApproaching) {
                    cout << "No vehicle approaching. Crossing the road..." << endl;
                    break; 
                } else {
                    cout << "Vehicle approaching, wait and try again." << endl;
                    
                }
            }
        } else {
            cout << "No crossing found. Walking further..." << endl;
           
        }
    }

    
    if (!footbridgeFound && !tunnelFound && !crossingFound) {
        cout << "No safe way found after 2 attempts. Use a different route." << endl;
    } else {
        cout << "Crossed successfully. Program terminated." << endl;
    }

    return 0;
}