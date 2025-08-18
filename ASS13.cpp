#include <iostream>
#include <string>
using namespace std;
void processOrder();
bool checkAllItems();
void processP1();
void processP2();
bool checkWarehouse();
void contactSeller();
void packOrder();
void shipFromWarehouse();
void confirmDelivery();
int main() {
    cout << "\n--- Online Shopping Order Processing ---\n";
    processOrder();
    return 0;
}
void processOrder() {
    cout << "Order placed.\n";
    if (checkAllItems()) {
        processP1();
    } else {
        processP2();
    }
    cout << "Returning to main process.\n";
}
bool checkAllItems() {
    char response;
    cout << "For all items? (y/n): ";
    cin >> response;
    return (response == 'y' || response == 'Y');
}
void processP1() {
    if (checkWarehouse()) {
        packOrder();
    } else {
        contactSeller();
        cout << "Seller sends goods to customer.\n";
    }
}
void processP2() {
    shipFromWarehouse();
    confirmDelivery();
}
bool checkWarehouse() {
    char response;
    cout << "Is the item in the warehouse? (y/n): ";
    cin >> response;
    return (response == 'y' || response == 'Y');
}
void contactSeller() {
    cout << "Contacting seller to ship goods...\n";
}
void packOrder() {
    cout << "Packing items with other orders in warehouse...\n";
}
void shipFromWarehouse() {
    cout << "Sending warehouse goods to customer...\n";
}
void confirmDelivery() {
    cout << "Customer collects goods.\n";
    cout << "Seller confirms customer received the order.\n";
}