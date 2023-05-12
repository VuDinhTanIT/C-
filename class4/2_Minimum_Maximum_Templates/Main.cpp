#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
template<class T>
T minimum(T a, T b) {
    return a < b ? a : b;
}

template<class T>
T maximum(T a, T b) {
    return a > b ? a : b;
}

int main() {
    int Int1 = 12, Int2 = 13;
    std::cout << "Minimum of " << Int1 << " and " << Int2 << " is " << minimum(Int1, Int2) << std::endl;
    std::cout << "Maximum of " << Int1 << " and " << Int2 << " is " << maximum(Int1, Int2) << std::endl;

    double D1 = 3.14, D2 = 6.71;
    std::cout << "Minimum of " << D1 << " and " << D2 << " is " << minimum(D1, D2) << std::endl;
    
    string Str1 = "tan", Str2 = "binh";
    std::cout << "Minimum of " << Str1 << " and " << Str2 << " is " << minimum(Str1, Str2) << std::endl;
    std::cout << "Maximum of " << Str1 << " and " << Str2 << " is " << maximum(Str1, Str2) << std::endl;

    return 0;
}