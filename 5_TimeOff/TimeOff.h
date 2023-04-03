#ifndef TIMEOFF_H
#define TIMEOFF_H

#include "NumDays.h"
#include <string>

class TimeOff {
private:
    std::string employeeName;
    int employeeID;
    NumDays maxSickDaysA;
    NumDays sickTakenA;
    NumDays maxVacationA;
    NumDays vacTakenA;
    NumDays maxUnpaidA;
    NumDays unpaidTakenA;

public:
    // Constructor
    TimeOff(std::string name, int id, double maxSickDays, double sickTaken, double maxVacation, double vacTaken, double maxUnpaid, double unpaidTaken);

    // Accessor and mutator methods for employee name and ID
    std::string getEmployeeName() const;
    void setEmployeeName(std::string name);
    int getEmployeeID() const;
    void setEmployeeID(int id);

    // Accessor and mutator methods for sick leave
    double getMaxSickDays() const;
    void setMaxSickDays(double maxDays);
    double getSickTaken() const;
    void setSickTaken(double taken);

    // Accessor and mutator methods for vacation
    double getMaxVacation() const;
    void setMaxVacation(double maxDays);
    double getVacTaken() const;
    void setVacTaken(double taken);

    // Accessor and mutator methods for unpaid time off
    double getMaxUnpaid() const;
    void setMaxUnpaid(double maxDays);
    double getUnpaidTaken() const;
    void setUnpaidTaken(double taken);
};

#endif