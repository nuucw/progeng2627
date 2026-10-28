#include <iostream>

int main(){
    int n, sum = 0;
    double avg, count = 1.0;

    std::cout << "Enter a number:" << std::endl;
    std::cin >> n;

    while(n != 0){
        sum = sum + n;
        avg = sum / count;
        count = count + 1;
        std::cout << "The average so far is:" << std::endl;
        std::cout << avg << std::endl;
        std::cout << "Enter a number:" << std::endl;
        std::cin >> n;
    }


}