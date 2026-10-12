#include <iostream>

int main(){
    double pounds, euros;
    
    std::cout << "Enter the amount of money in GBP" << std::endl;
    std::cin >> pounds;

    euros = 1.18 * pounds;

    std::cout << "The value of £" << pounds << " in Euros is €" << euros << std::endl;
}