#ifndef PREFERREDCUSTOMER_H
#define PREFERREDCUSTOMER_H

#include "../5_PersonDataAndCustomerData/CustomerData.h"

class PreferredCustomer : public CustomerData {
private:
    double purchasesAmount;
    double discountLevel;

public:
    // Default constructor
    PreferredCustomer() {
        purchasesAmount = 0;
        discountLevel = 0;
    }

    // Constructor
    PreferredCustomer(std::string ln, std::string fn, std::string ad, std::string ci, std::string st, std::string zp, std::string ph, int cn, bool ml, double pa) 
    : CustomerData(ln, fn, ad, ci, st, zp, ph, cn, ml) {
        purchasesAmount = pa;
        updateDiscountLevel();
    }

    // Accessor functions
    double getPurchasesAmount() const { return purchasesAmount; }
    double getDiscountLevel() const { return discountLevel; }

    // Mutator functions
    void setPurchasesAmount(double pa) {
        purchasesAmount = pa;
        updateDiscountLevel();
    }

    // Member function to update the discount level based on purchases amount
    void updateDiscountLevel() {
        if (purchasesAmount >= 2000)
            discountLevel = 0.10;
        else if (purchasesAmount >= 1500)
            discountLevel = 0.07;
        else if (purchasesAmount >= 1000)
            discountLevel = 0.06;
        else if (purchasesAmount >= 500)
            discountLevel = 0.05;
        else
            discountLevel = 0;
    }

    // Member function to calculate the discount on a purchase amount
    double calculateDiscount(double amount) const {
        return amount * discountLevel;
    }
};

#endif