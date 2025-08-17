#include <iostream>
using namespace std;

int main() {
    char isOrganic;
    char highEnergy;
    char isReusable;
    char isRecyclable;

    cout << "Is waste organic? (y/n): ";
    cin >> isOrganic;

    if (isOrganic == 'y' || isOrganic == 'Y') {
        cout << "Is the organic waste high energy? (y/n): ";
        cin >> highEnergy;

        if (highEnergy == 'y' || highEnergy == 'Y') {
            cout << "Output: Bio-fuel" << endl;
        } else {
            cout << "Output: Organic fertilizer" << endl;
        }
    }
    else {
        cout << "Is the waste reusable? (y/n): ";
        cin >> isReusable;

        if (isReusable == 'y' || isReusable == 'Y') {
            cout << "Output: Reuse for other applications" << endl;
        }
        else {
            cout << "Is the waste recyclable? (y/n): ";
            cin >> isRecyclable;

            if (isRecyclable == 'y' || isRecyclable == 'Y') {
                cout << "Output: Recycle for other applications" << endl;
            }
            else {
                cout << "Output: Landfill" << endl;
            }
        }
    }

    cout << "Process End." << endl;
    return 0;
}
