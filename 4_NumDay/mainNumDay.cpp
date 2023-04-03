#include <iostream>

using namespace std;

class NumDays
{
    float days;
    int hours;

public:
    NumDays(int _hours) : hours(_hours)
    {
        days = (float)hours / 24;
    }

    NumDays() : days(0), hours(0) {}
    void Set()
    {
        int h;
        int ds;
        cout << "\nPlease, enter days: ";
        cin >> ds;
        cout << "Please, enter hours ";
        cin >> h;
        days = ds + (float)h / 24;
        hours = ds * 24 + h;
    }
    int operator+(NumDays &n)
    {
        return (hours + n.hours);
    }
    int operator-(NumDays &n)
    {
        return (hours - n->hours);
    }
    int NumDays::operator++(int)
    {
        int Self = hours;
        hours++;
        day = hours / 8.0;
        return Self;
    }

    int NumDays::operator++()
    {
        hours++;
        day = hours / 8.0;
        return hours;
    }

    int NumDays::operator--(int)
    {
        int Self = hours;
        hours--;
        day = hours / 8.0;
        return Self;
    }

    int NumDays::operator--()
    {
        hours--;
        day = hours / 8.0;
        return hours;
    }
    void Display()
    {
        cout << "\nDays are " << days
             << "\nHours are " << hours << endl;
    }
};

int main()
{
    NumDays n(130);
    n.Display();
    NumDays m;
    m.Set();
    m.Display();
    cout << (n + m) << endl;
    cout << (m - n) << endl;
}
