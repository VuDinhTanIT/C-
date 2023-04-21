#include <iostream>
#include "PreferredCustomer.h"

int main() {
    PreferredCustomer customer("Tan", "Vu", "Pham Hung", "VKU", "DN", "12345", "034123574", 12345, true, 1000.0);
    
    std::cout << "Customer data:\n"
              << "Name: " << customer.getFirstName() << " " << customer.getLastName() << "\n"
              << "Address: " << customer.getAddress() << ", " << customer.getCity() << ", " << customer.getState() << " " << customer.getZip() << "\n"
              << "Phone: " << customer.getPhone() << "\n"
              << "Customer number: " << customer.getCustomerNumber() << "\n"
              << "Mailing list: " << (customer.getMailingList() ? "Yes" : "No") << "\n"
              << "Purchases amount: $" << customer.getPurchasesAmount() << "\n"
              << "Discount level: " << customer.getDiscountLevel() * 100.0 << "%\n"
              << "Discount on $100 purchase: $" << customer.calculateDiscount(100.0) << "\n";
    cout << "-------------------------------------------------------"<< endl;
    customer.setPurchasesAmount(3500.0); // Update purchases amount
    std::cout << "\nUpdated customer data:\n"
              << "Purchases amount: $" << customer.getPurchasesAmount() << "\n"
              << "Discount level: " << customer.getDiscountLevel() * 100.0 << "%\n"
              << "Discount on $100 purchase: $" << customer.calculateDiscount(100.0) << "\n";

    return 0;
}