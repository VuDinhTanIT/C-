#include "StudentTestScores.h"
#include <iostream>

int main(){
    StudentTestScores TanScore("Tan", 4);
    StudentTestScores BinhScore = TanScore;
    cout << BinhScore.getStudentName() << endl; // Tan
    BinhScore.setStudentName("Binh");
    BinhScore.setTestScore(10,2);
    cout << " BinhScore: " << BinhScore.getTestScore(2) << endl; // Tan
    cout << "  TanScore: " << TanScore.getTestScore(2) << endl; // Tan
    
    cout << BinhScore.getNumTestScores() << endl; // 
    
    // TanScore.getNumTestScores(); //


}