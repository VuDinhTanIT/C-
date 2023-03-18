#include <iostream>
#include <iomanip>
#include <cstdlib>
#include "inventory.h"
using namespace std;


void Inventory::setItemNumber(int itemNum) {
    // Validates input for non-negative numbers
    if (itemNum >= 0) {
        itemNumber = itemNum;
    }
    else {
        cout << "Invalid item number.\n";
        exit(EXIT_FAILURE);
    }
}
void Inventory::setQuantity(int q) {
    // Validates input for non-negative numbers
    if (q >= 0) {
        quantity = q;
    }
    else {
        cout << "Invalid quantity.\n";
        exit(EXIT_FAILURE);
    }
}

void Inventory::setCost(double c) {
    // Validates input for non-negative numbers
    if (c >= 0.0) {
        cost = c;
    }
    else {
        cout << "Invalid cost.\n";
        exit(EXIT_FAILURE);
    }
}

void Inventory::setTotalCost(int q, double c) {
    double tempTotal = q * c;
    totalCost = tempTotal;
}


int Inventory::getItemNumber() const {
    return itemNumber;
}

int Inventory::getQuantity() const {
    return quantity;
}

double Inventory::getCost() const {
    return cost;
}

double Inventory::getTotalCost() const {
    return totalCost;
}