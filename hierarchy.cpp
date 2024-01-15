#include <iostream>
#include <cmath>
using namespace std;
// Base class for shapes
class Shape {
public:
    virtual double area() const = 0; // Pure virtual function for area calculation
};
// Derived classes for different shapes
class Circle : public Shape {
private:
    double radius;
public:
    Circle(double r) : radius(r) {}
    double area() const override {
        return M_PI * radius * radius;
    }
};
class Square : public Shape {
private:
    double side;
public:
    Square(double s) : side(s) {}
    double area() const override {
        return side * side;
    }
};
class Triangle : public Shape {
private:
    double base, height;
public:
    Triangle(double b, double h) : base(b), height(h) {}

    double area() const override {
        return 0.5 * base * height;
    }
};
int main() {
    Circle circle(5);
    Square square(4);
    Triangle triangle(3, 6);
    cout << "Area of Circle: " << circle.area() << endl;
    cout << "Area of Square: " << square.area() << endl;
    cout << "Area of Triangle: " << triangle.area() << endl;
    return 0;
}
