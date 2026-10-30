#include <iostream>
#include <vector>

int min_vector_element(const std::vector<double>& vin){
    int index = -1;

    if(vin.size() == 0){
        return index;
    }
    else{
        for(int i = 0; i < vin.size(); i++){
            if(vin[i] < vin[i + 1]){
                index = i;
            }
            else if(vin[i+1] < vin [i]){
                index = i;
            }
        }
    }
    return index;
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

    std::cout << "The index of the smallest element is: " << min_vector_element(v) << std::endl;
    
}