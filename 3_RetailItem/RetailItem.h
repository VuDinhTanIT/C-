#pragma once
#include <iostream>
using namespace std;

class RetailItem{
private:
	std::string description;
	int unitsOnHand;
	double price;
public:
	// if we dont supply parameters
	RetailItem();
	// when we do.
	RetailItem(std::string desc, int qty, double cost);
	// Getters
	std::string getDescription() ;
	int getUnits() ;
	double getPrice() ;
	// Setters
	void SetDescription(std::string desc);
	void SetUnits(int qty) ;
	void SetPrice(double cost) ;
};