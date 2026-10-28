#include <iostream>

int main(){
    int n1, n2, q = 0, r;

    std::cin >> n1 >> n2;

    while(n1 > n2){
        n1 = n1 - n2;
        r = n1;
        q = q + 1;
    }

    std::cout << "The quotient is: " << q << std::endl;
    std::cout << "The remainder is: " << r << std::endl;
}