#ifndef NUMDAYS_H
#define NUMDAYS_H

class NumDays {
private:
    double hours;

public:
    // Constructor
    NumDays(double h = 0.0);

    // Accessor and mutator methods for hours
    double getHours() const;
    void setHours(double h);

    // Overloaded operator methods
    NumDays operator+(const NumDays& right) const;
    NumDays operator-(const NumDays& right) const;
    NumDays operator++();   // prefix ++
    NumDays operator++(int);   // postfix ++
    NumDays operator--();   // prefix --
    NumDays operator--(int);   // postfix --
};

#endif