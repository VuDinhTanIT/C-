#ifndef PERSONDATA_H
#define PERSONDATA_H
#include <string>
using namespace std;

class PersonData {
protected:
    string lastName;
    string firstName;
    string address;
    string city;
    string state;
    string zip;
    string phone;

public:
    // Default constructor
    PersonData() {
        lastName = "";
        firstName = "";
        address = "";
        city = "";
        state = "";
        zip = "";
        phone = "";
    }

    // Constructor
    PersonData(string ln, string fn, string ad, string ci, string st, string zp, string ph) {
        lastName = ln;
        firstName = fn;
        address = ad;
        city = ci;
        state = st;
        zip = zp;
        phone = ph;
    }

    // Accessor functions
    string getLastName() const { return lastName; }
    string getFirstName() const { return firstName; }
    string getAddress() const { return address; }
    string getCity() const { return city; }
    string getState() const { return state; }
    string getZip() const { return zip; }
    string getPhone() const { return phone; }

    // Mutator functions
    void setLastName(string ln) { lastName = ln; }
    void setFirstName(string fn) { firstName = fn; }
    void setAddress(string ad) { address = ad; }
    void setCity(string ci) { city = ci; }
    void setState(string st) { state = st; }
    void setZip(string zp) { zip = zp; }
    void setPhone(string ph) { phone = ph; }
};

#endif



