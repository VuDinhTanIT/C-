#include <iostream>
#include <string>
#include <iomanip>
#include "RetailItem.h"

// if we dont supply parameters
RetailItem::RetailItem()
{
	description = "<Empty>";
	unitsOnHand = 0;
	price = 0;
}
// when we do.
RetailItem::RetailItem(std::string desc, int qty, double cost)
{
	description = desc;
	unitsOnHand = qty;
	price = cost;
}
// Getters
std::string RetailItem::getDescription() { return description; }
int RetailItem::getUnits() { return unitsOnHand; }
double RetailItem::getPrice() { return price; }
// Setters
void RetailItem::SetDescription(std::string desc) { description = desc; }
void RetailItem::SetUnits(int qty) { unitsOnHand = qty; }
void RetailItem::SetPrice(double cost) { price = cost; }

int main()
{

	// creating this way creates three objects with
	// default data, you then need to use the setters
	// to set the data.
	RetailItem Items[3];

	// like this...
	// Items[0].SetDescription("Jacket");
	// Items[0].SetUnits(12);
	// Items[0].SetPrice(59.95);

	// items[1].. items[2] etc.

	// or we can use the constructor to assign data.
	// RetailItem Item1("Jacket", 12, 59.95);

	RetailItem persona[3] = {
		RetailItem("SusanMeyers", 12, 59.45),
		RetailItem("Mark", 40, 34.45),
		RetailItem("Joy", 20, 24.45)};
	// ok so lets read the data we assigned using setters
	// for (int i = 0; i <= 2; i++)
	// 	std::cout << "Item: " << Items[i].getDescription() << ", Qty: " << Items[i].getUnits() << ", Price: " << Items[i].getPrice() << std::endl;

	// display data we entered from the constructor
	
    cout << setw(12) << "  "
         << setw(30) << "DescriptionUnits "
         << setw(22) << "Units On Hand"
         << setw(14) << "Price" << endl;
	cout << setfill('-');
	cout << setw(55) << "-" <<endl;
	cout << setprecision(2)  << fixed << showpoint;

    for (int i = 0; i < 3; i++)
    {
		cout << setw(12) << "Item#" << i ;
        cout << setw(30) << persona[i].getDescription();
        cout << setw(22) <<  persona[i].getUnits();
        cout << setw(14) << persona[i].getPrice() << endl;
    }
    cout << endl;
	// std::cout << std::endl
	// 		  << "Item: " << Item1.getDescription() << ", Qty: " << Item1.getUnits() << ", Price: " << Item1.getPrice() << std::endl;

	return 0;
}