#include <iostream>

void rectangle_properties(double side1, double side2, double& perimeter, double& area){
    perimeter = 2 * (side1 + side2);
    area = side1 * side2;
}

int main(){
    double a, b;
    double p, ar;                    

    std::cout << "Enter the two side lengths: ";
    std::cin >> a >> b;

    rectangle_properties(a, b, p, ar); 

    std::cout << "Perimeter: " << p << std::endl;
    std::cout << "Area: " << ar << std::endl;
}