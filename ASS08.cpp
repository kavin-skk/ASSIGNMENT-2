#include <iostream>
using namespace std;

void waitForRescue() {
    cout << "Wait for rescue.\nEnd.\n";
}

void safeRoom() {
    cout << "Find and enter a safe room.\nEnd.\n";
}

void balconyBlock() {
    int reachedBalcony;
    cout << "Reached balcony? (1 = Yes, 0 = No): ";
    cin >> reachedBalcony;

    if (reachedBalcony) {
        waitForRescue();
    } else {
        int seeSmoke;
        cout << "See fire/strong smoke? (1 = Yes, 0 = No): ";
        cin >> seeSmoke;

        if (seeSmoke) safeRoom();
        else waitForRescue();
    }
}

void upstairsToBalcony() {
    cout << "Go upstairs and head to balcony\n";
    balconyBlock();
}

void downstairsOrEscape() {
    cout << "Go downstairs until you leave the building.\n";
    int escaped;
    cout << "Did you ESCAPE the building? (1 = Yes, 0 = No): ";
    cin >> escaped;

    if (escaped) {
        cout << "End.\n";
    } else {
        upstairsToBalcony();
    }
}

void insideBuildingProcess() {
    cout << "Bring keys, wallet, phone, wet towels.\n";

    int doorHot;
    cout << "Is the door hot/smoke seeping in? (1 = Yes, 0 = No): ";
    cin >> doorHot;

    if (doorHot) {
        cout << "Do not open door.\n";
        cout << "Seal all cracks with wet towels.\n";
        cout << "Contact fire department.\n";
        cout << "Wave at the windows to identify survivors.\n";
        waitForRescue();
    } else {
        int seeSmoke;
        cout << "Do you see fire/strong smoke? (1 = Yes, 0 = No): ";
        cin >> seeSmoke;

        if (seeSmoke) {
            upstairsToBalcony();
        } else {
            downstairsOrEscape();
        }
    }
}

int main() {
    cout << "Fire Emergency Flow Program (State-Based)\n";

    int seeFire, someoneSeesFire, smokeDetected;
    cout << "Do YOU see fire/smokes? (1 = Yes, 0 = No): ";
    cin >> seeFire;

    cout << "Does SOMEONE see fire/smokes? (1 = Yes, 0 = No): ";
    cin >> someoneSeesFire;

    cout << "Does SMOKE DETECTOR detect smoke? (1 = Yes, 0 = No): ";
    cin >> smokeDetected;

    if (seeFire || someoneSeesFire || smokeDetected) {
        int inBuilding;
        cout << "Are you in the building? (1 = Yes, 0 = No): ";
        cin >> inBuilding;

        if (!inBuilding) {
            cout << "Contact fire department.\nEnd.\n";
        } else {
          
            if (seeFire || someoneSeesFire)
                cout << "Push fire alarm trigger.\n";
            else
                cout << "Smoke detector triggers alarm.\n";

            
            insideBuildingProcess();
        }
    } else {
        cout << "No signs of fire/smoke detected.\nEnd.\n";
    }

    return 0;
}