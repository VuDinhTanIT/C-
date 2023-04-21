# include <iostream>
# include <string>
using namespace std;

class Time
{
protected:
    int hour;
    int min;
public:
    // default constructor
    Time()
    {
        hour = 0;
        min = 0;
    }
    
    // constructor
    Time(int h, int m, int s)
    {
        hour = h;
        min = m;
    }
    
    // mutator functions
    void setHour(int h)
    {
        hour = h;
    }
    
    void setMin(int m)
    {
        min = m;
    }   
    
    // accessor functions
    int getHour() const
    {
        return hour;
    }
    
    int getMin() const
    {
        return min;
    }
    
    // display function
    void displayTime() const
    {
        cout << "hour: " << getHour() << endl;
        cout << "min: " << getMin() << endl;
        cout << endl;
    }
};

class MilTime : public Time
{
    protected:
        int milHours;
    public:
        // constructors
        MilTime() : Time ()
        {
            milHours = 0;
        }

        MilTime(int h)
        {
            setTime(h);
        }

        // mutator functions
        void setMilHours(int h)
        {
            milHours = h;
        }
        
        void setTime(int mh)
        {
            if (mh > 2359 || mh < 0)
            {
                cout << "*** military hours value is outside of the valid range 0 and 2359 ***" << endl;
                cout << "*** 0 value assigned to all member variables -- try again ***" << endl;
                setMilHours(0);
                setHour(0);
                setMin(0);
            }
            else
            {
                setMilHours(mh);
                setHour(mh / 100);
                setMin(mh % 100);
            }
        }

        // accessor functions
        int getMilHours() const
        {
            return milHours;
        }
        
        // display function
        void displayMilitaryTime()
        {
            cout << "Military Hours: " << getMilHours() << endl;
        }
};

class TimeClock : public MilTime
{
    private:
        // no member variables
    public:
        // constructors
        TimeClock() : MilTime()
        {
            // nothing initialized for default constructor
        }
        
        TimeClock(int h) : MilTime(h)
        {
            // h parameter passed to MilTime constructor
        }
        
        // member functions
        int elapsedTime(int startTime, int endTime)
        {
            int elapsed = endTime - startTime;
            return elapsed;
        }
};

int main()
{   
    // welcome message
    cout << "This program uses three classes:" << endl;
    cout << "a class named 'MilTime', derived from a class named 'Time'," << endl;
    cout << "and a class named 'TimeClock', derived from the MilTime class." << endl;
    
    cout << "\n\n";
    
    // demonstration
    cout << "To demonstrate, four TimeClock objects are created with values of 645, 2159, 1230, and 2405." << endl;
    cout << "Note: the 2405 value produces an error message, and assigns 0 to all member variables." << endl;
    cout << endl;
    TimeClock timeOne(645);
    TimeClock timeTwo(2159);
    TimeClock timeThree(1230);
    TimeClock timeFour(2405);
    
    cout << "\n\n";
    cout << "Press [Enter] to continue." << endl;
    cin.get();
    cout << endl;
    
    cout << "Here are the values the TimeClock objects accessed from base classes MilTime and Time, " << endl;
    cout << "displayed using member functions:" <<endl;
    cout << endl;
    timeOne.displayMilitaryTime();
    timeOne.displayTime();
    
    timeTwo.displayMilitaryTime();
    timeTwo.displayTime();
    
    timeThree.displayMilitaryTime();
    timeThree.displayTime();
    
    timeFour.displayMilitaryTime();
    timeFour.displayTime();
    
    cout << "\n\n";
    cout << "Press [Enter] to continue." << endl;
    cin.get();
    cout << endl;
    
    cout << "TimeClock has a member function name elapsedTime which returns the elapsed time between " << endl;
    cout << "a start time and end time." << endl;
    cout << endl;
    
    cout << "Start Time: " << timeOne.getMilHours() << endl;
    cout << "End Time: " << timeTwo.getMilHours() << endl;
    cout << "Elapsed Time: " << timeOne.elapsedTime(timeOne.getMilHours(), timeTwo.getMilHours());
    cout << "\n\n";
    
    cout << "Start Time: " << timeThree.getMilHours() << endl;
    cout << "End Time: " << timeTwo.getMilHours() << endl;
    cout << "Elapsed Time: " << timeOne.elapsedTime(timeThree.getMilHours(), timeTwo.getMilHours());
    cout << "\n\n";

    
    cout << "\n\n";
    // exit message
    cout << "Press [Enter] to exit program." << endl;
    cin.get();
    return 0;
}