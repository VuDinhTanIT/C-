#ifndef GRADEDACTIVITY_H
#define GRADEDACTIVITY_H

#include <iomanip>
#include <iostream>
using namespace std;

class GradedActivity
{
protected:
    char letter;
    double score;
    // void determineGrade();

public:
    GradeActivity()
    {
        letter = ' ';
        this->score = 0.0;
    }
    GradeActivity(double s)
    {
        this->score = s;
    };
    void setScore(double s)
    {
        this->score = s;
        getLetterGrade();
    };
    double getScore() const 
    {
        return this->score;
    };
    virtual char getLetterGrade() const
    {
        char letterGrade; // To hold the letter grade

        if (this->score > 89)
            letterGrade = 'A';
        else if (this->score > 79)
            letterGrade = 'B';
        else if (this->score > 69)
            letterGrade = 'C';
        else if (this->score > 59)
            letterGrade = 'D';
        else
            letterGrade = 'F';

        return letterGrade;
    }
};
#endif