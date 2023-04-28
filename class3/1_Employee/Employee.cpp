#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
class Employee
{
private:
    std::string name;
    int number;
    std::string hire_date;

public:
    Employee(std::string name, int number, std::string hire_date)
    {
        this->name = name;
        this->number = number;
        this->hire_date = hire_date;
    }

    std::string get_name()
    {
        return name;
    }

    void set_name(std::string name)
    {
        this->name = name;
    }

    int get_number()
    {
        return number;
    }

    void set_number(int number)
    {
        this->number = number;
    }

    std::string get_hire_date()
    {
        return hire_date;
    }

    void set_hire_date(std::string hire_date)
    {
        this->hire_date = hire_date;
    }
};

class ProductionWorker : public Employee
{
private:
    int shift;
    double hourly_pay_rate;

public:
    ProductionWorker(std::string name, int number, std::string hire_date, int shift, double hourly_pay_rate) : Employee(name, number, hire_date)
    {
        this->shift = shift;
        this->hourly_pay_rate = hourly_pay_rate;
    }

    int get_shift()
    {
        return shift;
    }

    void set_shift(int shift)
    {
        this->shift = shift;
    }

    double get_hourly_pay_rate()
    {
        return hourly_pay_rate;
    }

    void set_hourly_pay_rate(double hourly_pay_rate)
    {
        this->hourly_pay_rate = hourly_pay_rate;
    }
  
};
  void displayInfo(ProductionWorker e)
    {
        cout << setprecision(2) << fixed << showpoint;
        cout << "Name: "
             << e.get_name() << endl;
        cout << "Employee number: "
             << e.get_number() << endl;
        cout << "Hire date: "
             << e.get_hire_date() << endl;
        cout << "Shift: "
             << e.get_shift() << endl;
        cout << "Pay rate: "
             << e.get_hourly_pay_rate() << endl;
        system("pause");
    }
int main()
{
    ProductionWorker Tai("Tai", 27, "1/05/2023", 1, 00.00);
    displayInfo(Tai);

    return 0;
}
