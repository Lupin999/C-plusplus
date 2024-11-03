#include <iostream>
#include <string>


class Shape {
protected:
    std::string color; 

public:
    
    void setColor(const std::string& c) {
        color = c;
    }

    
    std::string getColor() const {
        return color;
    }
};


class Rectangle : public Shape {
private:
    float length; // Length of the rectangle
    float width;  // Width of the rectangle

public:
    
    Rectangle(float l, float w, const std::string& c) : length(l), width(w) {
        setColor(c); // Call base class method to set color
    }

    
    float area() const {
        return length * width;
    }
};

int main() {
    
    Rectangle rect(5.0f, 3.0f, "Red");

    
    std::cout << "Color of the rectangle: " << rect.getColor() << std::endl;
    std::cout << "Area of the rectangle: " << rect.area() << " square units" << std::endl;

    return 0;
}
