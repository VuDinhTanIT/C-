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
