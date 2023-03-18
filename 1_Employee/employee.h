#pragma once
#include<iostream>
using namespace::std;

class Employee {
private:
	string name,
		   department,
		   position;

	int idNumber;

public:

	Employee();
	Employee(int, string, string, string);
	Employee(int, string);
	~Employee();
    Employee(std::string name,int idNumber, std::string department, std::string position);
	void setname(string);
	void setidNumber(int);
	void setdepartment(string);
	void setposition(string);
	string getname() const;
	int getidNumber() const;
	string getdepartment() const;
	string getposition() const;
};