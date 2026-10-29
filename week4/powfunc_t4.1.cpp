#include <iostream>

double mypow(double base, int exp){
    double result = base; 
    
    if(exp >= 0){
        for(int i = 1; i < exp; i++){
            result = result * base;
        }
        return result;
    }
    else{
        exp = -exp;
        for(int i = 1; i < exp; i++){
            result = result * base;
        }
        result = 1 / result;
        return result;
    }
}

int main(){
    double x, n, sum;

    std::cin >> x >> n;

    for(int i = 1; i < n + 1; i++){
        sum = sum + mypow(x,i);
    }
    
    std::cout << "The sum of powers is: " << sum << std::endl;
}