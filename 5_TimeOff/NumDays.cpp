#include "NumDays.h"
NumDays::NumDays(double h) {
    hours = h;
}

double NumDays::getHours() const {
    return hours;
}

void NumDays::setHours(double h) {
    hours = h;
}
NumDays NumDays::operator+(const NumDays& right) const {
    return NumDays(hours + right.hours);
}

NumDays NumDays::operator-(const NumDays& right) const {
    return NumDays(hours - right.hours);
}

NumDays NumDays::operator++() {
    ++hours;
    return *this;
}

NumDays NumDays::operator++(int) {
    NumDays temp(hours);
    ++hours;
    return temp;
}

NumDays NumDays::operator--() {
    --hours;
    return *this;
}

NumDays NumDays::operator--(int) {
    NumDays temp(hours);
    --hours;
    return temp;
}