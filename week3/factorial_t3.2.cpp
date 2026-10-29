#include <iostream>

int main(){
    int x, factorial = 1;

    std::cin >> x;

    if(x == 0){
        std::cout << x << "! = " << factorial << std::endl;
    }
    else{
        for(int i = 1; i < x + 1; i++){
            factorial = factorial * i;
        }
    }

    std::cout << x << "! = " << factorial << std::endl;
}