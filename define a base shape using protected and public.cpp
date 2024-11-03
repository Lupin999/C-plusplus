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

int main() {
   
    Shape shape;

    
    shape.setColor("Blue");

    
    std::cout << "The color of the shape is: " << shape.getColor() << std::endl;

    return 0;
}
