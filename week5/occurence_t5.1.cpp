#include <iostream>

int main(){
    int n1, n2, s, count = 0;
    std::vector<int> v;

    std::cout << "Please enter n:" << std::endl;
    std::cin >> n1;

    for(int i = 0; i < n1; i++){
        std::cout << "Please enter a number:" << std::endl;
        std::cin >> n2;
        v.push_back(n2);
    }

    std::cout << "Please enter s:" << std::endl;
    std::cin >> s;

    for(int j = 0; j < v.size(); j++){
        if(v[j] == s){
            count = count + 1;
        }
    }

    std::cout << "There are " << count << " occurences of " << s << " at indices: " << std::endl;
    
    for(int k = 0; k < v.size(); k++){
        if(v[k] == s){
            std::cout << k << std::endl;
        }
    }
}