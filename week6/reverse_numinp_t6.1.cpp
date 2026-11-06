#include <iostream>
#include <fstream>
#include <cstdlib>
#include <vector>

int main(){
    std::ifstream infile; 
    std::vector<int> v;

    infile.open("input.txt");

    if(!infile.is_open()){
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }

    if(infile.is_open()){ 
       
        int tmp;

         while(infile >> tmp){
            v.push_back(tmp);
        }
        
        infile.close(); 

        for(int i = v.size() - 1; i >= 0; i--){
            std::cout << v[i] << std::endl;
        }

    }
    else{
        std::cout << "error opening file" << std::endl;
    }

}