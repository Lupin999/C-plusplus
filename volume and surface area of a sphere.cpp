#include <iostream>
#include <cmath>

class Cylinder {
private:
    double radius;
    double height;

public:
    Cylinder(double r, double h) : radius(r), height(h) {}

    double volume() {
        return M_PI * std::pow(radius, 2) * height;
    }

    double surfaceArea() {
        return 2 * M_PI * std::pow(radius, 2) + 2 * M_PI * radius * height;
    }
};

int main() {
    double radius, height;

    std::cout << "Enter the radius of the cylinder: ";
    std::cin >> radius;
    std::cout << "Enter the height of the cylinder: ";
    std::cin >> height;

    Cylinder cylinder(radius, height);

    std::cout << "Volume of the cylinder: " << cylinder.volume() << std::endl;
    std::cout << "Surface area of the cylinder: " << cylinder.surfaceArea() << std::endl;

    return 0;
}
