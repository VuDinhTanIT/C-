#include <iostream>
#include <string>

class Month {
    private:
        std::string name;
        int monthNumber;
    public:
        Month() : name("January"), monthNumber(1) {}
        Month(std::string name) : name(name), monthNumber(getMonthNumber(name)) {}
        Month(int monthNumber) : name(getMonthName(monthNumber)), monthNumber(monthNumber) {}
        
        std::string getName() const { return name; }
        void setName(std::string name) { this->name = name; }
        
        int getMonthNumber() const { return monthNumber; }
        void setMonthNumber(int monthNumber) { this->monthNumber = monthNumber; }
        
        Month& operator++() { // prefix ++
            ++monthNumber;
            if (monthNumber > 12) {
                monthNumber = 1;
            }
            name = getMonthName(monthNumber);
            return *this;
        }
        
        Month operator++(int) { // postfix ++
            Month temp(*this);
            ++(*this);
            return temp;
        }
        
        Month& operator--() { // prefix --
            --monthNumber;
            if (monthNumber < 1) {
                monthNumber = 12;
            }
            name = getMonthName(monthNumber);
            return *this;
        }
        
        Month operator--(int) { // postfix --
            Month temp(*this);
            --(*this);
            return temp;
        }
        
        friend std::ostream& operator<<(std::ostream& os, const Month& month) {
            os << month.name << " (" << month.monthNumber << ")";
            return os;
        }
        
        friend std::istream& operator>>(std::istream& is, Month& month) {
            std::string input;
            is >> input;
            month = Month(input);
            return is;
        }
        
    private:
        std::string getMonthName(int monthNumber) const {
            switch (monthNumber) {
                case 1: return "January";
                case 2: return "February";
                case 3: return "March";
                case 4: return "April";
                case 5: return "May";
                case 6: return "June";
                case 7: return "July";
                case 8: return "August";
                case 9: return "September";
                case 10: return "October";
                case 11: return "November";
                case 12: return "December";
                default: return "Invalid month";
            }
        }
        
        int getMonthNumber(std::string name) const {
            if (name == "January") return 1;
            if (name == "February") return 2;
            if (name == "March") return 3;
            if (name == "April") return 4;
            if (name == "May") return 5;
            if (name == "June") return 6;
            if (name == "July") return 7;
            if (name == "August") return 8;
            if (name == "September") return 9;
            if (name == "October") return 10;
            if (name == "November") return 11;
            if (name == "December") return 12;
            return 0;
        }
};

int main() {
    Month m1;
    int n;
    std::cout << "Enter a month(number): ";
    std::cin >> n;
    m1 = Month(n); 
    std::cout << "You entered month(letter): " << m1.getName() << std::endl;
    // m1++; // postfix ++
    //Gia sử nhập m1 =4 ;
    std::cout << "m1++: " << m1++ << std::endl; // 4
    std::cout<< "Month after m1++: " << m1 << std::endl; //5 

    // ++m1; // prefix ++
    std::cout << "Month after ++m1: " << ++m1 << std::endl; // June (6)
    // m1--; // postfix --
    std::cout << "Month m1--: " << m1-- << std::endl; //June (6)
    std::cout<< "Month after m1--" << m1 << std::endl; //May (5)

    std::cout << "Month after --m1: " << --m1 << std::endl; //April (4)

    
    return 0;
}