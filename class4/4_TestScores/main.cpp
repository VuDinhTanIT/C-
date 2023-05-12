#include <iostream>
#include <string>
using namespace std;
class TestScores
{
private:
    double *scores;
    int size;

public:
    TestScores(double testScores[], int n)
    {
        size = n;
        scores = new double[size];
        for (int i = 0; i < size; i++)
        {
            if (testScores[i] < 0 || testScores[i] > 100)
            {
                string msg = "Invalid input: score is out of range";
                throw msg;
            }
            scores[i] = testScores[i];
        }
    }
    double getAverage()
    {
        double numScores = 0;
        for (int i = 0; i < size; i++)
        {
            numScores += scores[i];
        }
        return numScores / size;
    }
};
int main(){
     double arr[] = {8.00, 9.00, 9.50, 8.7, 10.0};
    int size = sizeof(arr) / sizeof(arr[0]);
     double arr2[] = {102.0, 9.00, 9.50, 8.7, 10.0};

    try {
        TestScores ts(arr, size);
        double avg = ts.getAverage();
        cout << "Average test score of arr is: " << avg << endl;
        TestScores ts2(arr2, size);
        double avg2 = ts.getAverage();
        cout << "Average test score of arr2 is: " << avg2 << endl;
    }
    catch (string msg) {
        cout << msg << endl;
    }

    return 0;
}