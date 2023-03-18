#include "Student.h"

Student::Student(){
    this->name = "";
    this->nbCourses = 0;

}
Student::Student(string name, int nb){
    this->name = name;
    nbCourses = nb;
    this->Coursegrades = new float[nb] ;
}
Student::~Student() {
    if(this->Coursegrades != nullptr){
        delete [] this->Coursegrades;
    cout << "Destructor is running" << endl;
    }
}

string Student::getName(){
    return name;
}
void Student::setName(string name){
    this->name =name;
}

void Student::setCourseGrades(){
    for(int i = 0; i < nbCourses; i++){
        cout << "Nhap Diem mon thu" << i+1 << ":";
        cin >> this->Coursegrades[i]  ;
    }

}
float Student::getGPA(){
    float sum =0;
    for(int i = 0; i < nbCourses; i++ ){
        sum += this->Coursegrades[i];
    }
    // cout << "Diem GPA:" << sum/nbCourses << endl;
    return sum/nbCourses;
}
void Student::displayCourseGrades(){
    
    cout << "Cac diem cua student " << this->name <<" la: ";
    for(int i = 0; i < nbCourses; i++ ){
        cout << this->Coursegrades[i] << " ";
        
    }
    cout << endl;


}