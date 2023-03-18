#include <iostream>
#include <cstdlib>
#include "circle.h"

using namespace std;
Circle::Circle()
{
    radius = 1.0;
}
Circle::Circle(double radi)
{
    if (radi == 0 || radi == 0.0)
    {
        cout << "Invalid radius.\n";
        exit(EXIT_FAILURE);
    }
    else
    {
        radius = radi;
    }
}

void Circle::setRadius(double r)
{
    if (r == 0 || r == 0.0)
    {
        cout << "Invalid radius.\n";
        exit(EXIT_FAILURE);
    }
    else
    {
        radius = r;
    }
}

double Circle::getRadius()
{
    return radius;
}

double Circle::getArea()
{
    return   pi * radius * radius;
}

double Circle::getDiameter()
{
    return radius * 2;
}

double Circle::getCircumference()
{
    return 2 * pi * radius;
}
