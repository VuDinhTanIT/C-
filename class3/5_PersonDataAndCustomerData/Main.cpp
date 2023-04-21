#include <iostream>
#include "CustomerData.h"
#include <iomanip>
int main() {

    // PersonData 
    CustomerData customer("Vu", "Tai","Hoa Nhơn", "VKU","ĐN", "1234567","0234756487",2,true);
    CustomerData tan("Vu", "Tan"," QN", "VKU ","ĐN", "1234567","0234756487",3,true);
    PersonData* persons[3] ={
        tan, 
        customer,
        PersonData("Vu" ,"Tai","Pham Hung", "VKU","ĐN", "1234567","0234446487")
    };
    for(int i = 0; i <3;i++) {

        /* code */
    std::cout << "Customer data " << i+1 << ": \n"
              << "Name: " << persons[i].getFirstName() << " " << persons[i].getLastName() << "\n"
              << "Address: " << persons[i].getAddress() << ", " << persons[i].getCity() << ", " << persons[i].getState() << " " << persons[i].getZip() << "\n"
              << "Phone: " << persons[i].getPhone() << "\n";
            //   << "Customer number: " << persons[i].getCustomerNumber() << "\n"
            //   << "Mailing list: " << (persons[i].getMailingList() ? "Yes" : "No") << "\n";
    }
    
    cout << "---------------------------------" << std::endl;
        cout << "Customer data:\n"
              << "Name: " << customer.getFirstName() << " " << customer.getLastName() << "\n"
              << "Address: " << customer.getAddress() << ", " << customer.getCity() << ", " << customer.getState() << " " << customer.getZip() << "\n"
              << "Phone: " << customer.getPhone() << "\n"
              << "Customer number: " << customer.getCustomerNumber() << "\n"
              << "Mailing list: " << (customer.getMailingList() ? "Yes" : "No") << "\n";
    return 0;
}