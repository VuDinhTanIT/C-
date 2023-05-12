#include <iostream>
#include "SimpleVector.h"
using namespace std;

int main()
{
    // Create a SimpleVector of integers with 5 elements.
    SimpleVector<int> sv(5);

    // Set the elements to 1, 2, 3, 4, 5.
    for (int i = 0; i < sv.size(); i++)
        sv[i] = i + 1;

    // Print the elements.
    for (int i = 0; i < sv.size(); i++)
        cout << sv[i] << " ";
    cout << endl;

    // Add an element to the end of the vector.
    sv.push_back(6);

    // Print the elements.
    for (int i = 0; i < sv.size(); i++)
        cout << sv[i] << " ";
    cout << endl;

    // Remove the last element from the vector.
    sv.pop_back();

    // Print the elements.
    for (int i = 0; i < sv.size(); i++)
        cout << sv[i] << " ";
    cout << endl;

    return 0;
}