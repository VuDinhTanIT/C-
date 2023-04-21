#include <iostream>
using namespace std;

class BasicShape {
protected:
    double area;

public:
    double getArea() const { return area; }
    virtual void calcArea() = 0;
};

class Circle : public BasicShape {
private:
    long centerX;
    long centerY;
    double radius;

public:
    Circle(long cx, long cy, double r) : centerX(cx), centerY(cy), radius(r) {
        calcArea();
    }
    // Circle(long cx, long cy, double r)  {
    //     centerX = cx;
    //     centerY = cy;
    //     radius = r;
    //     calcArea();
    // }

    long getCenterX() const { return centerX; }
    long getCenterY() const { return centerY; }

    void calcArea() override {
        area = 3.14159 * radius * radius;
    }
};

class Rectangle : public BasicShape {
private:
    long width;
    long length;

public:
    Rectangle(long w, long l) : width(w), length(l) {
        calcArea();
    }

    long getWidth() const { return width; }
    long getLength() const { return length; }

    void calcArea() override {
        area = length * width;
    }
};

int main() {
    Circle c(0, 0, 8);
    Rectangle r(10, 8);

    cout << "Circle area: " << c.getArea() << "\n";
    cout << "Rectangle area: " << r.getArea() << "\n";

    return 0;
}