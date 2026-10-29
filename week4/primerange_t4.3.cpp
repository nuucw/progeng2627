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
    int lower, upper;

    std::cout << "Enter a lower and upper bound" << std::endl;
    std::cin >> lower >> upper;

    for(int i = lower; i < upper; i++){
        if(smallest_factor(i) == 0){
            std::cout << i << std::endl;
        }
    }
}