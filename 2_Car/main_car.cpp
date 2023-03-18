#include <iostream>
#include "car.cpp"
using namespace std;
int main()
{
	int year;
	string make;

	cout << "What year is your car? ";
	cin >> year;
	cout << "What is your car model? ";
	cin >> make;
	// Class objects
	Car Tesla =  Car(year,make);
	// Tesla object
	cout << endl << "Tesla information" << endl;
	for (int x = 1; x <= 5; x++)
	{
		cout << Tesla.accelerate() << endl;
	}
	cout << "Your speed is " << Tesla.getSpeed() << " for the car model of " << Tesla.getMake() << endl;
	for (int x = 1; x <= 5; x++)
	{
		cout << Tesla.carBreak() <<endl;

	}
	cout << "You stopped the car with a speed of " << Tesla.getSpeed() << endl;
	return 0;
}