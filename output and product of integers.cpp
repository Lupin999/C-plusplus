#include <iostream>

class Addition {
private:
    int a, b, c;

public:
   
    Addition() : a(22), b(30), c(50) {}

   
    void outputProduct() {
        int product = a * b * c;
        std::cout << "The product of " << a << ", " << b << ", " << c << " is: " << product << std::endl;
    }
};

int main() {
    
    Addition add;

    
    add.outputProduct();

    return 0;
}
