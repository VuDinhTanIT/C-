#ifndef CIRCLEH
#define CIRCLEH
 
#include <iostream>
#include <cstdlib>
 
using namespace std;
 
class Circle
{
      public:
             Circle();
             
             Circle(double radi);
             
             void setRadius(double r);
             
             double getRadius();
             
             double getArea();
             
             double getDiameter();
             
             double getCircumference();
             
             
      private:
              double radius;
             static constexpr const  double pi = 3.14159;     
};
 
#endif