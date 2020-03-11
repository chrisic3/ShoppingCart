#include <iostream>
#include <string>
#include "ItemToPurchase.h"
using namespace std;

ItemToPurchase::ItemToPurchase() {
    itemName = "none";
    itemPrice = 0;
    itemQuantity = 0;

    return;
}

void ItemToPurchase::SetName(string name) {
    itemName = name;

    return;
}

string ItemToPurchase::GetName() const {
    return itemName;
}

void ItemToPurchase::SetPrice(int price) {
    itemPrice = price;

    return;
}

int ItemToPurchase::GetPrice() const {
    return itemPrice;
}

void ItemToPurchase::SetQuantity(int quantity) {
    itemQuantity = quantity;

    return;
}

int ItemToPurchase::GetQuantity() const {
    return itemQuantity;
}