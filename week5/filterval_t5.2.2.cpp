#include <iostream>
#include <vector>

void filter_v(const std::vector<double>& vin, double t, std::vector<double>& vout){
    for(int i = 0; i < vin.size(); i ++){
        if(vin[i] < t){
            vout.push_back(vin[i]);
        }
    }
}

int main(){
    int n, x;
    double t;
    std::vector<double> v1, v2; 

    std::cout << "How many elements do you want in your vector? " << std::endl;
    std::cin >> n;

    for(int i = 0; i < n; i++){
        std::cout << "Enter a number:" << std::endl;
        std::cin >> x;
        v1.push_back(x);
    }

    std::cout << "Enter a maximum value" << std::endl;
    std::cin >> t;

    filter_v(v1, t, v2);

    std::cout << "The values less than " << t << " are:" << std::endl;

    for(int j = 0; j < v2.size(); j++){
        std::cout << v2[j] << "\t";
    }

    std::cout << std::endl;
    
}