#include <iostream>

int main(){
    int lower, upper, guess, attempts = 0;
    char answer;

    std::cout << "Enter the lower bound:" << std::endl;
    std::cin >> lower;

    std::cout << "Enter the upper bound:" << std::endl;
    std::cin >> upper;

    while(lower <= upper){
        attempts = attempts + 1;

        guess = lower + ((upper - lower) / 2);

        std::cout << "Is your number " << guess << "? (l,h,c)" << std::endl;
        std::cin >> answer;

        if(answer == 'c'){
            std::cout << "Found your number in " << attempts << " attempts" << std::endl;
            break;
        }
        else if(answer == 'l'){
            upper = guess - 1;
        }
        else if(answer == 'h'){
            lower = guess + 1;
        }
        else{
            std::cout << "Invalid input" << std::endl;
            attempts = attempts - 1;
        }
    }
}