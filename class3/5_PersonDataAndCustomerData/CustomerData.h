#ifndef CUSTOMERDATA_H
#define CUSTOMERDATA_H
#include "PersonData.h"
using namespace std;
class CustomerData : public PersonData {
private:
    int customerNumber;
    bool mailingList;

public:
    // Default constructor
    CustomerData() {
        customerNumber = 0;
        mailingList = false;
    }

    // Constructor
    CustomerData(string ln, string fn, string ad, string ci, string st, string zp, string ph, int cn, bool ml) : PersonData(ln, fn, ad, ci, st, zp, ph) {
        customerNumber = cn;
        mailingList = ml;
    }

    // Accessor functions
    int getCustomerNumber() const { return customerNumber; }
    bool getMailingList() const { return mailingList; }

    // Mutator functions
    void setCustomerNumber(int cn) { customerNumber = cn; }
    void setMailingList(bool ml) { mailingList = ml; }
};
#endif