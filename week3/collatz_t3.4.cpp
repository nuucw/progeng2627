#include <iostream>

int main(){
    int n, curmax, count = 0;

    std::cin >> n;
    curmax = n;

    while(n != 1){
        count = count + 1;

        if(n % 2 == 0){
            n = n / 2;
            std::cout << n << "\t";
            if(n > curmax){
                curmax = n;
            }
        }
        else{
            n = (3*n) + 1;
            std::cout << n << "\t";
            if(n > curmax){
                curmax = n;
            }
        }
    }

    std::cout << std::endl;
    std::cout << count << " steps" << std::endl;
    std::cout << "Maximum number is: " << curmax << std::endl;
}