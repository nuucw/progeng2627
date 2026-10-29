#include <iostream>

int myfactorial(int in){
    int fact = 1;
    
    for(int i = 1; i < in + 1; i++){
        fact = fact * i;
    }
    return fact;
}

int main(){
    int n; 
    std::cout << "Please enter a number" << std::endl;
    std::cin >> n;
    std::cout << "The factorial of " << n << " is: " << myfactorial(n) << std::endl;
}