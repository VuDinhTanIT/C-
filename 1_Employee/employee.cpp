#include "Employee.h"

Employee:: Employee() {
	
	idNumber =  0;
	name = "";
	department = "";
	position = "";
}
Employee::Employee(int id, string name, string department, string position) {
	
	name = name;
	idNumber = id;
	department = department;
	position = position;
	
}
Employee::Employee(int id, string name) {

	name = name;
	idNumber = id;
	department = "";
	position = "";

}
Employee::~Employee() {
}
Employee:: Employee(string name,int idNumber, string department, string position) {
   this->name = name;
   this->idNumber = idNumber;
   this->department = department;
   this->position = position;
}
void Employee::setname(string name) {
	name = name;
}
void Employee::setidNumber(int id) {
	idNumber = id;
}
void Employee::setdepartment(string department) {
	department = department;
}
void Employee::setposition(string position) {
	position = position;
}
string Employee::getname() const {
	return name;
}
int Employee::getidNumber() const {
	return idNumber;
}
string Employee::getdepartment() const {
	return department;
}
string Employee::getposition() const {
	return position;
}