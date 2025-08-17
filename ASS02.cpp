#include <iostream>
using namespace std;


void registerPatient(bool &isRegistered) {
    if (!isRegistered) {
        cout << "Patient not registered. Registering now...\n";
        isRegistered = true;
    } else {
        cout << "Patient is already registered.\n";
    }
}


void nurseCheck(bool &nurseAvailable) {
    while (!nurseAvailable) {
        cout << "Nurse not available. Waiting...\n";
        cout << "Is nurse available now? (1 = Yes, 0 = No): ";
        cin >> nurseAvailable;
    }
    cout << "Recording patient's health condition...\n";
}


void doctorCheck(bool &doctorAvailable) {
    while (!doctorAvailable) {
        cout << "Doctor not available. Waiting...\n";
        cout << "Is doctor available now? (1 = Yes, 0 = No): ";
        cin >> doctorAvailable;
    }
    cout << "Assigning patient to doctor...\n";
}


void followUpCheck(bool &needsFollowUp) {
    if (needsFollowUp) {
        cout << "Follow-up needed. Arranging appointment...\n";
    } else {
        cout << "No follow-up required.\n";
    }
}
void medicationCheck(bool &medicationAvailable) {
    if (medicationAvailable) {
        cout << "Medication available. Giving prescription to patient.\n";
    } else {
        cout << "Medication not available. Patient leaves.\n";
    }
}

int main() {
    
    bool isRegistered = false;
    bool nurseAvailable, doctorAvailable;
    bool needsFollowUp,  medicationAvailable;

    cout << "Patient arrives at the clinic.\n";

    
    cout << "Is patient registered? (1 = Yes, 0 = No): ";
    cin >> isRegistered;
    if(isRegistered==1){
    }
    else{
        registerPatient(isRegistered);
    }
    cout << "Is nurse available? (1 = Yes, 0 = No): ";
    cin >> nurseAvailable;
    if(nurseAvailable==1){
    }
    else{
        nurseCheck(nurseAvailable);
    }

    cout << "Is doctor available? (1 = Yes, 0 = No): ";
    cin >> doctorAvailable;
   
    if(doctorAvailable==1){
    }
    else{
       doctorCheck(doctorAvailable);
    }

    cout << "Does patient need follow-up? (1 = Yes, 0 = No): ";
    cin >> needsFollowUp;
    
    if (needsFollowUp==0) {
        
        }
    else{
       followUpCheck(needsFollowUp);
    }
    cout << "Does patient need medication? (1 = Yes, 0 = No): ";
    cin >> medicationAvailable;
   
    if (medicationAvailable==0) {
        
        }
    else{
      medicationCheck(medicationAvailable);
    }
    cout<<"no medication needed pateint leaves";
    cout << "Process completed. Patient done.\n";

    return 0;
}