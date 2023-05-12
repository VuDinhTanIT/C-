#include <iostream>
#include <string>
using namespace std;

double divide(int,int);

int main(){
    int n1,n2;
    double quotient;

    cout << "Enter two numbers" << endl;
    cin >> n1 >>n2;
    try
    {
        quotient = divide(n1,n2);
        cout << "The qoutient is: "<< quotient  << endl;

    }
    catch(string ms)
    {
        cout << ms << endl;
    }
    
    return 0;
}
double divide(int numerator ,int denominator){
    if(denominator == 0){
        string ms = "Division by zero.\n";
        throw ms;
    }
    return  static_cast<double>(numerator) / denominator;
}