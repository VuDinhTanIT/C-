#include <iostream>

template<typename T>
T total(int n) {
    T sum = 0;
    T value;
    for (int i = 0; i < n; i++) {
        std::cout << "Enter value " << i+1 << ": ";
        std::cin >> value;
        sum += value;
    }
    return sum;
}

int main() {
    int n = 5;
    std::cout << "Enter " << n << " integer values:\n";
    int int_total = total<int>(n);
    std::cout << "Total of integers is: " << int_total << std::endl;

    std::cout << "Enter " << n << " double values:\n";
    double double_total = total<double>(n);
    std::cout << "Total of doubles is: " << double_total << std::endl;

    std::cout << "Enter " << n << " char values:\n";
    char char_total = total<char>(n);
    std::cout << "Total of chars is: " << (int)char_total << std::endl;

    return 0;
}