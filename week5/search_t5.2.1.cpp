#include <iostream>
#include <vector>

int search_vector(int n, const std::vector<int>& vin){
    int index;

    for(int i = 0; i < vin.size(); i++){
        if(n == vin[i]){
            index = i;
        }
        else{
            index = -1;
        }
    }
    return index;
}


int main(){
    int n, x, val;
    std::vector<int> v;

    std::cout << "How many elements would you like to enter?" << std::endl;
    std::cin >> n;

    for(int i = 0; i < n; i++){
        std::cout << "Enter a number:" << std::endl;
        std::cin >> x;
        v.push_back(x);
    }

    std::cout << "What value are you searching for?" << std::endl;
    std::cin >> val;

    std::cout << "The value " << val << " is in index: " << search_vector(val,v) << std::endl;
}