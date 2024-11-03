#include <iostream>
#include <cmath>
#include <string>

class Rectangle {
private:
    double length;
    double width;
    std::string color;

public:
    Rectangle(double l, double w, std::string c) : length(l), width(w), color(c) {}

    double area() const {
        return length * width;
    }

    void display() const {
        std::cout << "Rectangle - Color: " << color << ", Area: " << area() << std::endl;
    }
};

class Circle {
private:
    double radius;
    std::string color;

public:
    Circle(double r, std::string c) : radius(r), color(c) {}

    double area() const {
        return M_PI * radius * radius;
    }

    void display() const {
        std::cout << "Circle - Color: " << color << ", Area: " << area() << std::endl;
    }
};

int main() {
    
    Rectangle rectangle(15, 10, "blue");
    rectangle.display();

    
    Circle circle(2, "pink");
    circle.display();

    return 0;
}
