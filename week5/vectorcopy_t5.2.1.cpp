#include <iostream>
#include <vector>

double sum_vector(std::vector<double> vin){

    double sum = 0;

    for(int i = 0; i < vin.size(); i++){
        sum = sum + vin[i];
    }

    return sum;

}

int main(){
    int n;
    double x;
    std::vector<double> v;

    std::cout << "How many elements would you like to enter?" << std::endl;
    std::cin >> n;

    for(int i = 0; i < n; i++){
        std::cout << "Enter a number:" << std::endl;
        std::cin >> x;
        v.push_back(x);
    }

    std::cout << "The sum is: " << sum_vector(v) << std::endl;

}