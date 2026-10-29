#include <iostream>
#include <vector>

int main(){
    int n, x, t;
    std::vector<int> v; 

    std::cin >> n;

    for(int i = 0; i < n; i++){
        std::cin >> x;
        v.push_back(x);
    }

    std::cout << "Enter a maximum value" << std::endl;
    std::cin >> t;

    for(int j = 0; j < v.size(); j ++){
        if(v[j] < t){
            std::cout << v[j] << "\t";
        }
    }
}