#include <iostream>
#include <string>

class Car {
private:
    std::string brand;
    std::string model;
    float price;
    int mileage;

public:
   
    Car(const std::string& b, const std::string& m, float p, int mil)
        : brand(b), model(m), price(p), mileage(mil) {}

    // Member function to display car details
    void display() const {
        std::cout << "Car Brand: " << brand << std::endl;
        std::cout << "Model: " << model << std::endl;
        std::cout << "Price: $" << price << std::endl;
        std::cout << "Mileage: " << mileage << " miles" << std::endl;
    }

    
    void drive(int distance) {
        mileage += distance;
        std::cout << "Updated Mileage: " << mileage << " miles" << std::endl;
    }
};

int main() {
   
    Car myCar("Toyota", "Corolla", 20000, 5000);
    
    
    myCar.display();
    
    
    std::cout << "\nDriving the car for 150 miles..." << std::endl;
    myCar.drive(150);
    
    
    std::cout << "\nDriving the car for 300 miles..." << std::endl;
    myCar.drive(300);
    
    return 0;
}
