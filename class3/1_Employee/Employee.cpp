#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
class Employee
{
private:
    string name;
    int number;
    string hireDate;

public:
    Employee()
    {
        name = "";
        number = 0;
        hireDate = "";
    }
    Employee(string aName, int aNumber, string aDate)
    {
        name = aName;
        number = aNumber;
        hireDate = aDate;
    }
    void setEmployeeName(string n)
    {
        name = n;
    }
    void setEmployeeNumber(int num)
    {
        number = num;
    }
    void setEmployeeHireDate(string date)
    {
        hireDate = date;
    }
    string getNameEmployee() const
    {
        return name;
    }
    int getEmployeeNumber() const
    {
        return number;
    }
    string getEmployeeHireDate() const
    {
        return hireDate;
    }
};
class ProductionWorker : public Employee
{
private:
    int shift;
    double payRate;

public:
    ProductionWorker() : Employee()
    {
        shift = 0;
        payRate = 0.0;
    }
    ProductionWorker(string aName, int aNumber, string aDate,
                     int aShift, double aPayRate) : Employee(aName, aNumber, aDate)
    {
        shift = aShift;
        payRate = aPayRate;
    }
    void setShift(int s)
    {
        shift = s;
    }
    void setPayRate(double r)
    {
        payRate = r;
    }
    int getShiftNumber() const
    {
        return shift;
    }
    string getShiftName() const
    {
        if (shift == 1)
            return "Day";
        else if (shift == 2)
            return "Night";
        else
            return "Invalid";
    }
    double getPayRate() const
    {
        return payRate;
    }
};
void displayInfo(ProductionWorker e)
{
    cout << setprecision(2) << fixed << showpoint;
    cout << "Name: "
         << e.getNameEmployee() << endl;
    cout << "Employee number: "
         << e.getEmployeeNumber() << endl;
    cout << "Hire date: "
         << e.getEmployeeHireDate() << endl;
    cout << "Shift: "
         << e.getShiftName() << endl;
    cout << "Shift number: "
         << e.getShiftNumber() << endl;
    cout << "Pay rate: "
         << e.getPayRate() << endl;
    system("pause");
}

class TeamLeader : public ProductionWorker
{
private:
    double monthlyBonus;
    double requiredTraining;
    double completedTraining;

public:
    ProductionWorker e;
    TeamLeader() : ProductionWorker()
    {
        monthlyBonus = 0;
        requiredTraining = 0;
        completedTraining = 0;
    }
    TeamLeader(double amonthlyBonus, double arequiredTraining,
               double acompletedTraning)
    {
        amonthlyBonus = amonthlyBonus;
        requiredTraining = arequiredTraining;
        completedTraining = acompletedTraning;
    }
    void setMonthlyBonus(double d)
    {
        monthlyBonus = d;
    }
    void setRequiredTraining(double e)
    {
        requiredTraining = e;
    }
    void setCompletedTraining(double f)
    {
        completedTraining = f;
    }
    int getMonthlyBonus() const
    {
        return monthlyBonus;
    }
    int getRequiredTraining() const
    {
        return requiredTraining;
    }
    double getCompletedTraining() const
    {
        return completedTraining;
    }
};

int main()
{
    ProductionWorker Tan("Tan", 27, "1/05/2023", 1, 00.00);
    displayInfo(Tan);

    TeamLeader tl(500, 40, 35);
    tl.setEmployeeName("Jane Doe");
    tl.setEmployeeNumber(5678);
    tl.setEmployeeHireDate("01/01/2021");
    tl.setShift(2);
    // tl.setHireDate(15.0);

    cout << "Name: " << tl.getNameEmployee() << endl;
    cout << "Employee Number: " << tl.getEmployeeNumber() << endl;
    cout << "Hire Date: " << tl.getEmployeeHireDate() << endl;
    cout << "Shift: " << tl.getShiftName() << endl;
    cout << "Hourly Pay Rate: " << tl.getPayRate() << endl;
    cout << "Monthly Bonus: " << tl.getMonthlyBonus() << endl;
    cout << "Required Training Hours: " << tl.getRequiredTraining() << endl;
    cout << "Attended Training Hours: " << tl.getCompletedTraining() << endl;

    return 0;
}
