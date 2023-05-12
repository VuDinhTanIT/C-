// This program demonstrates Rectangle class exceptions.
#include <iostream>
#include "Rectangle.h"
using namespace std;

int main()
{
    double width;
    double length;
    bool tryAgain = true;
    // Create a Rectangle object.
    Rectangle myRectangle;

    // Get the width and length.
    cout << "Enter the rectangle's width: ";
    cin >> width;
    while (tryAgain)
    {
        try
        {
            myRectangle.setWidth(width);
            tryAgain = false;
        }
        catch (Rectangle::NegativeWidth)
        {
            cout << "Please enter a nonnegative value: ";
            cin >> width;
        }
    }

    cout << "Enter the rectangle's length: ";
    cin >> length;
    tryAgain = true;

    while (tryAgain)
    {
        try
        {
            myRectangle.setLength(length);
            tryAgain = false;
        }
        catch (Rectangle::NegativeLength)
        {
            cout << "Please enter a nonnegative value: ";
            cin >> length;
        }
    }
    // Display the area of the rectangle.
    cout << "The rectangle's area is " << myRectangle.getArea() << endl;
    cout << "End of the program.\n";
    return 0;
}