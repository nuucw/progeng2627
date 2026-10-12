#include <iostream>

int main(){
    double celsius, fahrenheit;
    
    std::cout << "Enter the temperature in Celsius" << std::endl;
    std::cin >> celsius;

    fahrenheit = (((celsius * 9) / 5) + 32);

    std::cout << "The value of " << celsius << "°C in Farenheit is " << fahrenheit << std::endl;
}