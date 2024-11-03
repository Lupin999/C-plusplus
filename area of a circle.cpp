#include <iostream>
#include <cmath> 
#include <string>

class Circle {
private:
    float radius;

public:
    
    Circle(float r) : radius(r) {}

    
    float area() const {
        return M_PI * radius * radius; // Area = πr²
    }

    
    float getRadius() const {
        return radius;
    }
};

int main() {
    
    Circle myCircle(5.0);

   
    std::cout << "Area of the circle: " << myCircle.area() << std::endl;
    std::cout << "Radius: " << myCircle.getRadius() << std::endl;

    return 0;
}
