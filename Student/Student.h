#ifndef STUDENT
#define STUDENT
#include <iostream>
#include <string>
using namespace std;

class Student{
    private:
        string name;
        int nbCourses;
        float *Coursegrades;

    public:
        Student();
        Student(string name, int nbCourses);
        ~Student();
        string getName();
        void setName(string name);
        void setCourseGrades();
        float getGPA();
        void displayCourseGrades();



};
#endif