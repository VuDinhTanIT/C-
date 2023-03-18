#include <iostream>
#include <iomanip>
#include <string>
#include "Employee.h"
using namespace ::std;

int main()
{
    // string name, department, position;
    // int id;
    int num_employees = 3;
    // Employee persona[3];
    // for (int i = 0; i < 3; i++) {
    // 	cout << "Enter your name: ";
    // 	// getline(cin,name);
    //     cin >> name;
    // 	persona[i].setname(name);
    // 	cout << "Enter your Id number: ";
    // 	cin >> id;
    // 	persona[i].setidNumber(id);
    // 	cout << "Enter your department: ";
    // 	// getline(cin, departamento);
    //     cin >> department;
    // 	persona[i].setdepartment(department);
    // 	cout << "Enter your position: ";
    // 	// getline(cin, posicion);
    //     cin >> position;
    // 	persona[i].setposition(position);
    // }
    Employee *personal;
    int nbEmployees;
    cout << "Enter the number of employees" << endl;
    cin >> nbEmployees;
	int idNumber =  0;
	string name = "";
	string department = "";
	string position = "";
    personal = new Employee[nbEmployees];
    for (int i = 0; i < nbEmployees; i++) {
    cout << "Enter information about the employee : " << i+1 << endl;
    cin >> name >> idNumber   >> department >> position;
     personal[i] = Employee(name, idNumber, department, position);
    
    }
    // Employee persona[3] = {
    //     Employee("Susan Meyers", 47899, "Accounting", "Vice President"),
    //     Employee("Mark Jones", 39119, "IT", "Programmer"),
    //     Employee("Joy Rogers", 81774, "Manufacturing", "Engineer")};

    cout << setw(12) << "Name"
         << setw(16) << "Id Number"
         << setw(22) << "Department"
         << setw(14) << "Position" << endl;

    for (int i = 0; i < num_employees; i++)
    {
        cout << setw(12) << personal[i].getname();
        cout << setw(16) << personal[i].getidNumber();
        cout << setw(22) << personal[i].getdepartment();
        cout << setw(14) << personal[i].getposition() << endl;
    }
    cout << endl;

    // system("pause");
    return 0;
}
