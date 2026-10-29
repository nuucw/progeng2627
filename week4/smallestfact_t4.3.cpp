#include <iostream>

int smallest_factor(int n){
    for(int cf = 2; cf < n; cf++){
        if( (n % cf) == 0){
            return cf;
        }
    }
    return 0;
}

int main(){
    int n;

    std::cout << "Enter an integer greater than 1: ";
    std::cin >> n;

    if(smallest_factor(n) == 0){
        std::cout << n << " is prime" << std::endl;
    }
    else{
        std::cout << n << " is not prime, its smallest factor is " << smallest_factor(n) << std::endl;
    }
    return 0;
}