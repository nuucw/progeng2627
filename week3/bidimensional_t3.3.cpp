#include <iostream>

int main(){
    int n, i1 = 0;

    std::cin >> n;

    while(i1 < n){
        int i2 = 0;
        
        while(i2 < n){
            std::cout << "*";
            i2 = i2 + 1;
        }
        i1 = i1 + 1;
        std::cout << std::endl;
    }
}