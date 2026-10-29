#include <iostream>
#include <cmath>

int main(){
    double x, n, sum;

    std::cin >> x >> n;

    for(int i = 1; i < n + 1; i++){
        sum = sum + std::pow(x,i);
    }
    
    std::cout << "The sum of powers is: " << sum << std::endl;
}