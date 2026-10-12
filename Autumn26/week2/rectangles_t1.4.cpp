#include <iostream>

int main(){
    double length, height, perimeter, area;
    
    std::cout << "Enter the length of the rectangle" << std::endl;
    std::cin >> length;

    std::cout << "Enter the height of the rectangle" << std::endl;
    std::cin >> height;

    perimeter = 2 * (length + height);
    area = length * height;

    std::cout << "The perimeter of the rectangle is: " << perimeter << std::endl;
    std::cout << "The area of the rectangle is: " << area << std::endl;
}