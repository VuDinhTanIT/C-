#include<iostream>
using namespace::std;

class Car
{
	private:
		string make;
		int year;
		int speed;

	public:
		Car(int y, string model)
		{
			year = y;
			make = model;
			speed = 0;
		}
		int getYear()
		{
			return year;
		}
		string getMake()
		{
			return make;
		}
		int getSpeed()
		{
			return speed;
		}
		int accelerate()
		{
			return speed += 5;
		}
		int carBreak()
		{
			return speed -= 5;
		}
};