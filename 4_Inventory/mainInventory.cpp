#include <iostream>
#include <iomanip>
#include <cstdlib>
#include "inventory.h"

using namespace std;

int main() {

Inventory item;     // Define an instance of the inventory class
int itemNumber;     // Local variable for item number
int quantity;       // Local variable for quantity
double cost;        // Local variable for cost
double totalCost;   // Local variable for totalCost
int choice;         // Holds users menu choice

                    cout << "Calculating cost of an item's inventory.\n\n";
                    cout << "Enter the Item Number: ";
                    cin >> itemNumber;

                    cout << "Enter the Quantity on hand: ";
                    cin >> quantity;

                    cout << "What is this item's cost per unit? ";
                    cin >> cost;

                        // Store itemNumber, quantity and cost in item object
                        item.setItemNumber(itemNumber);
                        item.setQuantity(quantity);
                        item.setCost(cost);

                        // Set the total cost
                        item.setTotalCost(quantity, cost);

                    // Display results
                    cout << setprecision(1)  << fixed << showpoint;

                    cout << endl;
                    cout << "Item Number: " << item.getItemNumber() << endl;
                    cout << "Quantity: " << item.getQuantity() << endl;
                    cout << "Cost Per Item: " << item.getCost() << endl;
                    cout << "Total Cost: " << item.getTotalCost() << endl;

return 0;
}