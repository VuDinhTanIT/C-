#include "Student.h"

int main(){
    int nbStudent =3;
    // cout << "Enter the number of students:  " << endl;
    // cin >> nbStudent;
    // Student cl[nbStudent] ;
    // for(int i = 0; i < nbStudent;i++) {
    //     cout << "Enter the name of student:  ";
        
    //     cout << "Enter the number of students:  " << endl;

    // }
    Student cl[nbStudent]= {
        Student("Nam" ,5),
        Student("Huong" ,4),
        Student("An" ,3),
        // Student("Ha" ,5),
        // Student("Nam" ,6),
    };
    for(int i=0; i<nbStudent;i++) {
        // cl[i].setName      
        cout << "---------------------------------------------" << endl;
        cout << "Nhap cac diem cua sinh vien " << cl[i].getName()<< endl;
        cl[i].setCourseGrades();
    }
    cout << "Thong tin cua cac sinh vien ";
    for(int i=0; i<nbStudent;i++) {
        // cl[i].setName
        cout << "---------------------------------------------" << endl;
        cout << "Ten sinh vien: " << cl[i].getName() << endl;
        cl[i].displayCourseGrades() ;
        cout << "Diem trung binh " <<  cl[i].getGPA() << endl;
       
    }   

}