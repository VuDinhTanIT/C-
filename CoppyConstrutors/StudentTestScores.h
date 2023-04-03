#ifndef STUDENTTESTSCORES_H
#define STUDENTTESTSCORES_H
#include <string>
using namespace std;
const double DEFAULT_SCORE = 0.0;

class StudentTestScores
{
private:
    string studentName;
    double *testScores;
    int numTestScores;
    void createTestScoresArray(int size)
    {
        numTestScores = size;
        testScores = new double[numTestScores];
        for (int i = 0; i < numTestScores; i++)
        {
            testScores[i] = DEFAULT_SCORE;
        }
    }
    public:
        // constructor
        StudentTestScores(string name, int numScores)
        {
            studentName = name;
            createTestScoresArray(numScores);
        };
        StudentTestScores(const StudentTestScores &other)
        {
            numTestScores = other.numTestScores;
            studentName = other.studentName;
            testScores = new double[numTestScores];
            for (int i = 0; i < numTestScores; i++){
                testScores[i] = other.testScores[i];
            }
        }
        ~StudentTestScores() { delete [] testScores;}
        void setTestScore(double score, int index){
            testScores[index] = score;
        }
        void setStudentName(string name) { studentName = name;}
        string getStudentName() { return studentName; }
        int getNumTestScores() { return numTestScores;}
        double getTestScore(int index) { 
            return testScores[index];
            }
};

#endif