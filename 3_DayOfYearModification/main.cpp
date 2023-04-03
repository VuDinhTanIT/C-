#ifndef DAYOFYEAR_H
#define DAYOFYEAR_H

#include <string>
#include <iostream>
#include <iomanip>
using namespace std;
class DayOfYear {
private:
    int day;

public:
    // Constructors
    DayOfYear();
    DayOfYear(int day);
    DayOfYear(std::string month, int day);

    // Accessor methods
    std::string getMonth() const;
    int getDay() const;

    // Overloaded operators
    DayOfYear& operator++(); // prefix increment
    DayOfYear operator++(int); // postfix increment
    DayOfYear& operator--(); // prefix decrement
    DayOfYear operator--(int); // postfix decrement
};

// Constants for day ranges
const int MAX_DAYS_IN_MONTH = 31;
const int DAYS_IN_FEB_LEAP_YEAR = 29;
const int DAYS_IN_FEB_NON_LEAP_YEAR = 28;
const int DAYS_IN_APR_JUN_SEP_NOV = 30;
const int DAYS_IN_YEAR = 365;
const int DAYS_IN_LEAP_YEAR = 366;

// Array of month names and days in each month
const std::string MONTHS[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
const int DAYS_IN_MONTH[] = {MAX_DAYS_IN_MONTH, DAYS_IN_FEB_NON_LEAP_YEAR, MAX_DAYS_IN_MONTH, DAYS_IN_APR_JUN_SEP_NOV, MAX_DAYS_IN_MONTH, DAYS_IN_APR_JUN_SEP_NOV, MAX_DAYS_IN_MONTH, MAX_DAYS_IN_MONTH, DAYS_IN_APR_JUN_SEP_NOV, MAX_DAYS_IN_MONTH, DAYS_IN_APR_JUN_SEP_NOV, MAX_DAYS_IN_MONTH};
DayOfYear::DayOfYear()
{
	day = 0;
}
DayOfYear::DayOfYear(int date)
{
	if (date < 0 || date > 365)
	{
		cout << "Enter valid input" << endl;
	}
	else
	{
		day = date;
	}
}
// Constructor that takes a month string and day integer
DayOfYear::DayOfYear(std::string month, int day) {
    // Find the index of the month in the MONTHS array
    int monthIndex = -1;
    for (int i = 0; i < 12; i++) {
        if (MONTHS[i] == month) {
            monthIndex = i;
            break;
        }
    }
    // If the month is invalid, terminate the program with an error message
    if (monthIndex == -1) {
        std::cerr << "Invalid month: " << month << endl;
        exit(1);
    }
    // If the day is outside the range for the month, terminate the program with an error message
    if (day < 1 || day > DAYS_IN_MONTH[monthIndex]) {
        std::cerr << "Invalid day for " << month << ": " << day << endl;
        exit(1);
    }
    // Calculate the day of the year based on the month and day
    this->day = day;
    for (int i = 0; i < monthIndex; i++) {
        this->day += DAYS_IN_MONTH[i];
    }
}

// Prefix increment operator
DayOfYear& DayOfYear::operator++() {
    if (day == DAYS_IN_YEAR) {
        day = 1;
    }
    else {
        day++;
    }
    return *this;
}

// Postfix increment operator
DayOfYear DayOfYear::operator++(int) {
    DayOfYear temp = *this;
    ++(*this);
    return temp;
}

// Prefix decrement operator
DayOfYear& DayOfYear::operator--() {
    if (day == 1) {
        day = DAYS_IN_YEAR;
    }
    else {
        day--;
    }
    return *this;
}

// Postfix decrement operator
DayOfYear DayOfYear::operator--(int) {
    DayOfYear temp = *this;
    --(*this);
    return temp;
}

// Accessor method for month
std::string DayOfYear::getMonth() const {
    int i = 0;
    int dayCoppy= day;
    while (dayCoppy > DAYS_IN_MONTH[i]) {
        dayCoppy -= DAYS_IN_MONTH[i];
        i++;
    }
    return MONTHS[i];
}

// Accessor method for day
int DayOfYear::getDay() const {
    int i = 0;
    int dayCoppy= day;

    while (dayCoppy > DAYS_IN_MONTH[i]) {
        dayCoppy -= DAYS_IN_MONTH[i];
        i++;
    }
    return dayCoppy;
}

#endif
int main() {
    // Test constructor with no parameters
    DayOfYear day1;
    std::cout << "Day 1: " << day1.getMonth() << " " << day1.getDay() <<  endl;

    // Test constructor with day parameter
    DayOfYear day2(59);
    std::cout << "Day 2: " << day2.getMonth() << " " << day2.getDay() << endl;

    // Test constructor with month and day parameters
    DayOfYear day3("February", 29);
    std::cout << "Day 3: " << day3.getMonth() << " " << day3.getDay() << endl;

    // Test invalid day error message
    DayOfYear day4("January", 32);

    // Test prefix increment operator
    ++day1;
    std::cout << "Day 1 after prefix increment: " << day1.getMonth() << " " << day1.getDay() << endl;

    // Test postfix increment operator
    DayOfYear day5 = day2++;
    std::cout << "Day 2 after postfix increment: " << day2.getMonth() << " " << day2.getDay() << endl;
    std::cout << "Day 5: " << day5.getMonth() << " " << day5.getDay() << endl;

    // Test prefix decrement operator
    --day1;
    std::cout << "Day 1 after prefix decrement: " << day1.getMonth() << " " << day1.getDay() << endl;

    // Test postfix decrement operator
    DayOfYear day6 = day3--;
    std::cout << "Day 3 after postfix decrement: " << day3.getMonth() << " " << day3.getDay() << endl;
    std::cout << "Day 6: " << day6.getMonth() << " " << day6.getDay() << endl;

    return 0;
}