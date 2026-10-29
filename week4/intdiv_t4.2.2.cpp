#include <iostream>

void divi(int n1, int n2, int& intdiv, int& rem){
    intdiv = n1 / n2;
    rem = n1 % n2;
}

int main(){
    int n1, n2;
    int div, rem;                    

    std::cout << "Enter the two numbers: ";
    std::cin >> n1 >> n2;

    divi(n1, n2, div, rem); 

    std::cout << "Intger division: " << div << std::endl;
    std::cout << "Remainder: " << rem << std::endl;
}