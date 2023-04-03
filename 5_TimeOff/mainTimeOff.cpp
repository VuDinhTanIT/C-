#include "TimeOff.h"
#include <iostream>
using namespace std;
int main() {
    TimeOff employee("Tan", 12345, 10.0, 5.0, 20.0, 15.0, 15.0, 10.0);

    std::cout << "Employee Name: " << employee.getEmployeeName() << endl;
    std::cout << "Employee ID: " << employee.getEmployeeID() << endl;
    std::cout << "Max Sick Days: " << employee.getMaxSickDays() << endl;
    std::cout << "Sick Days Taken: " << employee.getSickTaken() << endl;
    std::cout << "Max Vacation Days: " << employee.getMaxVacation() << endl;
    std::cout << "Vacation Days Taken: " << employee.getVacTaken() << endl;
    std::cout << "Max Unpaid Days: " << employee.getMaxUnpaid() << endl;
    std::cout << "Unpaid Days Taken: " << employee.getUnpaidTaken() << endl;

    employee.setMaxVacation(300.0);
    std::cout << "Max Vacation Days: " << employee.getMaxVacation() << endl;

    return 0;
}