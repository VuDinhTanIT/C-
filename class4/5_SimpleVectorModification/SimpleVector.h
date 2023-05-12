#ifndef SIMPLEVECTOR_H
#define SIMPLEVECTOR_H

#include <iostream>
#include <new> // Needed for bad_alloc exception
#include <cstdlib> // Needed for the exit function

using namespace std;

template <class T>
class SimpleVector
{
protected:
    T *aptr; // To point to the allocated array
    int arraySize; // Number of elements in the array
    void memError(); // Handles memory allocation errors
    void subError(); // Handles subscripts out of range
public:
    // Default constructor
    SimpleVector()
    {
        aptr = 0; arraySize = 0;
    }
    // Constructor declaration
    SimpleVector(int);
    // Copy constructor declaration
    SimpleVector(const SimpleVector &);
    // Destructor declaration
    ~SimpleVector();
    // Accessor to return the array size
    int size() const
    {
        return arraySize;
    }
    // Accessor to return a specific element
    T getElementAt(int position);
    // Overloaded [] operator declaration
    T &operator[](const int &);
    // push_back function declaration
    void push_back(const T &);
    // pop_back function declaration
    void pop_back();

};

// Constructor for SimpleVector class. Sets the size of the
// array and allocates memory for it.
template <class T>
SimpleVector<T>::SimpleVector(int s)
{
    arraySize = s;
    // Allocate memory for the array.
    try
    {
        aptr = new T[s];
    }
    catch (bad_alloc)
    {
        memError();
    }
    // Initialize the array.
    for (int count = 0; count < arraySize; count++)
        *(aptr + count) = 0;
}

// Copy Constructor for SimpleVector class.
template <class T>
SimpleVector<T>::SimpleVector(const SimpleVector &obj)
{
    // Copy the array size.
    arraySize = obj.arraySize;
    // Allocate memory for the array.
    aptr = new T[arraySize];
    if (aptr == 0)
        memError();
    // Copy the elements of obj's array.
    for (int count = 0; count < arraySize; count++)
        *(aptr + count) = *(obj.aptr + count);
}

// Destructor for SimpleVector class.
template <class T>
SimpleVector<T>::~SimpleVector()
{
    if (arraySize > 0)
        delete[] aptr;
}

// memError function. Displays an error message and
// terminates the program when memory allocation fails.
template <class T>
void SimpleVector<T>::memError()
{
    cout << "ERROR: Cannot allocate memory.\n";
    exit(EXIT_FAILURE);
}

// subError function. Displays an error message and
// terminates the program when a subscript is out of range.
template <class T>
void SimpleVector<T>::subError()
{
    cout << "ERROR: Subscript out of range.\n";
    exit(EXIT_FAILURE);
}

// getElementAt function. The argument is a subscript.
// This function returns the value stored at the
// subscript in the array.
template <class T>
T SimpleVector<T>::getElementAt(int sub)
{
    if (sub < 0 || sub >= arraySize)
        subError();
    return aptr[sub];
}

// Overloaded [] operator. The argument is a subscript.
// This function returns a reference to the element
// in the array indexed by the subscript.
template <class T>
T &SimpleVector<T>::operator[](const int &sub)
{
    if (sub < 0 || sub >= arraySize)
        subError();
    return aptr[sub];
}

// push_back function. Accepts as an argument a value to be
// inserted into the vector. The argument is inserted after
// the last element. (Pushed onto the back of the vector.)
template <class T>
void SimpleVector<T>::push_back(const T &value)
{
    // Create a new array with one more element than the current array.
    T *newArray = new T[arraySize + 1];
    // Copy the current array into the new array.
    for (int count = 0; count < arraySize; count++)
        *(newArray + count) = *(aptr + count);
    // Add the new element to the end of the new array.
    *(newArray + arraySize) = value;
    // Delete the current array and update the pointer to point to the new array.
    delete[] aptr;
    aptr = newArray;
    // Update the array size.
    arraySize++;
}

// pop_back function. Removes the last element from the vector.
template <class T>
void SimpleVector<T>::pop_back()
{
    // Check if the array is empty.
    if (arraySize == 0)
        return;
    // Create a new array with one less element than the current array.
    T *newArray = new T[arraySize - 1];
    // Copy all elements except the last one from the current array into the new array.
    for (int count = 0; count < arraySize - 1; count++)
        *(newArray + count) = *(aptr + count);
    // Delete the current array and update the pointer to point to the new array.
    delete[] aptr;
    aptr = newArray;
    // Update the array size.
    arraySize--;
}

#endif