#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

class ProductionWorker : public Employee
{
private:
    int shift;
    double hourly_pay_rate;

public:
    ProductionWorker(std::string name, int number, std::string hire_date, int shift, double hourly_pay_rate) : Employee(name, number, hire_date)
    {
        if (shift != 1 && shift != 2) {
            throw std::invalid_argument("InvalidShift");
        }
        if (hourly_pay_rate < 0) {
            throw std::invalid_argument("InvalidPayRate");
        }
        
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

