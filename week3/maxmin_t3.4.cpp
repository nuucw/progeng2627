#include <iostream>

int main(){
    int n, curmax, curmin;

    std::cout << "Please enter number:" << std::endl;
    std::cin >> n;

    curmax = n;
    curmin = n;

    std::cout << "Maximum so far: " << curmax << std::endl;
    std::cout << "Minimum so far: " << curmin << std::endl;

    while(n != 0){

        std::cout << "Please enter number:" << std::endl;
        std::cin >> n;

        if(n > curmax){
            curmax = n;
        }
        else if(n < curmin){
            curmin = n;
        }

        std::cout << "Maximum so far: " << curmax << std::endl;
        std::cout << "Minimum so far: " << curmin << std::endl;
    }
}