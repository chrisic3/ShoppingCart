#include <iostream>
#include <string>
#include "ItemToPurchase.h"
using namespace std;

int main() {
    ItemToPurchase item1;
    string item1Name;
    int item1Price;
    int item1Quantity;
    ItemToPurchase item2;
    string item2Name;
    int item2Price;
    int item2Quantity;
    int item1Total;
    int item2Total;

    cout << "Item 1" << endl << "Enter the item name:" << endl;
    getline(cin, item1Name);
    cout << "Enter the item price:" << endl;
    cin >> item1Price;
    cout << "Enter the item quantity:" << endl;
    cin >> item1Quantity;
    item1.SetName(item1Name);
    item1.SetPrice(item1Price);
    item1.SetQuantity(item1Quantity);

    cin.ignore();

    cout << endl << "Item 2" << endl << "Enter the item name:" << endl;
    getline(cin, item2Name);
    cout << "Enter the item price:" << endl;
    cin >> item2Price;
    cout << "Enter the item quantity:" << endl;
    cin >> item2Quantity;
    item2.SetName(item2Name);
    item2.SetPrice(item2Price);
    item2.SetQuantity(item2Quantity);

    item1Total = item1.GetQuantity() * item1.GetPrice();
    item2Total = item2.GetQuantity() * item2.GetPrice();

    cout << endl << "TOTAL COST" << endl;
    cout << item1.GetName() << " " << item1.GetQuantity() << " @ $" << item1.GetPrice() << " = $" << item1Total << endl;
    cout << item2.GetName() << " " << item2.GetQuantity() << " @ $" << item2.GetPrice() << " = $" << item2Total << endl;
    cout << endl << "Total: $" << item1Total + item2Total << endl;

    return 0;
}
