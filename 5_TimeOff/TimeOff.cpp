#include "TimeOff.h"
#include <iostream>

// Constructor
TimeOff::TimeOff(std::string name, int id, double maxSickDays, double sickTaken, double maxVacation, double vacTaken, double maxUnpaid, double unpaidTaken) {
    employeeName = name;
    employeeID = id;
    maxSickDaysA.setHours(maxSickDays * 8.0);
    sickTakenA.setHours(sickTaken * 8.0);
    setMaxVacation(maxVacation);
    vacTakenA.setHours(vacTaken * 8.0);
    maxUnpaidA.setHours(maxUnpaid * 8.0);
    unpaidTakenA.setHours(unpaidTaken * 8.0);
}

// Accessor and mutator methods for employee name and ID
std::string TimeOff::getEmployeeName() const {
    return employeeName;
}

void TimeOff::setEmployeeName(std::string name) {
    employeeName = name;
}

int TimeOff::getEmployeeID() const {
    return employeeID;
}

void TimeOff::setEmployeeID(int id) {
    employeeID = id;
}

// Accessor and mutator methods for sick leave
double TimeOff::getMaxSickDays() const {
    return maxSickDaysA.getHours() / 8.0;
}

void TimeOff::setMaxSickDays(double maxDays) {
    maxSickDaysA.setHours(maxDays * 8.0);
}

double TimeOff::getSickTaken() const {
    return sickTakenA.getHours() / 8.0;
}

void TimeOff::setSickTaken(double taken) {
    sickTakenA.setHours(taken * 8.0);
}

// Accessor and mutator methods for vacation
double TimeOff::getMaxVacation() const {
    return maxVacationA.getHours() / 8.0;
}

void TimeOff::setMaxVacation(double maxDays) {
    if (maxDays > 240.0) {
        maxDays = 240.0;
    }
    maxVacationA.setHours(maxDays * 8.0);
}

double TimeOff::getVacTaken() const {
    return vacTakenA.getHours() / 8.0;
}

void TimeOff::setVacTaken(double taken) {
    vacTakenA.setHours(taken * 8.0);
}

// Accessor and mutator methods for unpaid time off
double TimeOff::getMaxUnpaid() const {
    return maxUnpaidA.getHours() / 8.0;
}

void TimeOff::setMaxUnpaid(double maxDays) {
    maxUnpaidA.setHours(maxDays * 8.0);
}

double TimeOff::getUnpaidTaken() const {
    return unpaidTakenA.getHours() / 8.0;
}

void TimeOff::setUnpaidTaken(double taken) {
    unpaidTakenA.setHours(taken * 8.0);
}