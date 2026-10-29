#include <iostream>

double max(double n1, double n2, double n3){
    double curmax;

    if(n1 > n2){
        curmax = n1;
    }
    else if(n1 < n2){
        curmax = n2;
    }
    else if(curmax < n3){
        curmax = n3;
    }
    return curmax;
}

int main(){
    double n1, n2, n3;

    std::cin >> n1 >> n2 >> n3;

    std::cout << "The largest number is: " << max(n1,n2,n3) << std::endl;
}