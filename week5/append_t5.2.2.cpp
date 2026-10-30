#include <iostream>
#include <vector>


void append_vectors(const std::vector<int>& vin1, const std::vector<int>& vin2, std::vector<int>& vout){

    for(int i = 0; i < vin1.size(); i ++){
        vout.push_back(vin1[i]);
    }
    for(int j = 0; j < vin2.size(); j ++){
        vout.push_back(vin2[j]);
    }
}

int main(){
    int n, x;
    std::vector<int> v1, v2, v3;

    std::cout << "How many elements would you like to enter in vector 1?" << std::endl;
    std::cin >> n;

    for(int i = 0; i < n; i++){
        std::cout << "Enter a number:" << std::endl;
        std::cin >> x;
        v1.push_back(x);
    }

    std::cout << "How many elements would you like to enter in vector 2?" << std::endl;
    std::cin >> n;

    for(int j = 0; j < n; j++){
        std::cout << "Enter a number:" << std::endl;
        std::cin >> x;
        v2.push_back(x);
    }

    append_vectors(v1, v2, v3);

    std::cout << "The appended vector is:" << std::endl;

    for(int k = 0; k < v3.size(); k++){
        std::cout << v3[k] << "\t";
    }

    std::cout << std::endl;
}