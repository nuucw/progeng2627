#include <iostream>
#include <cmath>

int main(){
    double weight, height, height_sq, bmi;

    std::cout << "Enter your weight in kg" << std::endl;
    std::cin >> weight;

    std::cout << "Enter your height in metres" << std::endl;
    std::cin >> height;

    height_sq = height * height;
    bmi = std::round((weight * 10.0) / height_sq) / 10.0;

    std::cout << "Your BMI is " << bmi << std::endl;
}