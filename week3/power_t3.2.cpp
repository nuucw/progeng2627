#include <iostream>

int main(){
    int x, n, result = 1;

    std::cin >> x >> n;

    if(n < 0){
        std::cout << "n must be >= 0" << std::endl;
    }
    else{
        for(int i = 0; i < n; i++){
        result = result * x;
        }
    }

    std::cout << x << "^" << n << " = " << result << std::endl;

}