#include <iostream>
#include <algorithm>
#include "..\5_SimpleVectorModification\SimpleVector.h"

template <class T>
class SortableVector : public SimpleVector<T> {
public:
    // Constructor that takes a size argument
    SortableVector(int size) : SimpleVector<T>(size) {}

    // Constructor that takes a size argument and a value to initialize the elements
    SortableVector(int size, const T& value) : SimpleVector<T>(size, value) {}

    // Destructor
    ~SortableVector() {}

    // Function to get a pointer to the beginning of the vector
    T* begin() {
        return this->aptr;
    }

    // Function to get a pointer to the end of the vector
    T* end() {
        return this->aptr + this->arraySize;
    }

    // Function to sort the vector in ascending order
    void sort() {
        std::sort(begin(), end());
    }
};

// Driver program to test the SortableVector class template
int main() {
    // Create a SortableVector of integers with size 5
    SortableVector<int> v(5);

    // Initialize the vector with some values
    v[0] = 5;
    v[1] = 3;
    v[2] = 1;
    v[3] = 4;
    v[4] = 2;

    // Print the unsorted vector
    std::cout << "Unsorted vector: ";
    for (int i = 0; i < v.size(); i++) {
        std::cout << v[i] << " ";
    }
    std::cout << std::endl;

    // Sort the vector
    v.sort();

    // Print the sorted vector
    std::cout << "Sorted vector: ";
    for (int i = 0; i < v.size(); i++) {
        std::cout << v[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}