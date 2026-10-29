#include <iostream>

int main(){
    int n;

    std::cin >> n;

    for(int i = 1; i < n + 1; i++){
        int mult = 1;

        for(int j = 1; j < n + 1; j++){
            mult = i * j;
            std::cout << mult << "\t";
        }
        std::cout << std::endl;
        
    }
}