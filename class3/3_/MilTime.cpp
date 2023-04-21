#include <iostream>
#include <iomanip>
#include "Time.h"
using namespace std;
class MilTime : public Time
{

private:
    int milHours;
    int milSeconds;

public:
    MilTime(int hours, int seconds)

    {

        milHours = hours;
        milSeconds = seconds;
    }

    void setTime(int milhours, int milseconds);
    int getHour();
    int getMin();
    int getStandHr();
};

void MilTime::setTime(int mhours, int mseconds)
{

    milHours = mhours;
    milSeconds = mseconds;
    hour = (milHours / 100);
    min = milHours % 100;
    sec = mseconds;
    // Time::getHour(milHours / 100);
    // Time::getMin(milHours % 100);
    // Time::getSec(milSeconds);
}


int MilTime::getHour()
{
    // return MilTime::milHours;
    return milHours;
}
int MilTime::getMin()
{
    // return MilTime::milHours;
    return min;
}
int MilTime::getStandHr()
{
    // return getHour() % 12;
    return hour % 12;
}
int main()
{

    int hr, sec;

    MilTime time1(0, 0);

    cout << "Enter Time in Milatary format: ";

    cin >> hr;

    sec = hr % 10;

    time1.setTime(hr, sec);

    cout << "MiltataryFormat: " << time1.getHour() << "hours" << endl;

    if (time1.getHour() / 12 == 1)
    {

        cout << "Standard Format: " << time1.getStandHr() << " : ";

        if (time1.getMin() == 0)
        {
            cout << time1.getMin() << "0"
                 << "PM" << endl;
        }
        else
            cout << time1.getMin() << "PM" << endl;
    } else
    {
        cout << "Standard Format: " << time1.getStandHr() << ":";

        if (time1.getMin() == 0)
        {

            cout << time1.getMin() << "0"
                 << "AM" << endl;
        }

        else

            cout << time1.getMin() << "AM" << endl;
    }

    system("pause");

    return 0;
}

