#include <iostream>
#include <fstream>
#include <cstdlib>
#include <vector>

int main(){
    std::ifstream infile; 
    std::vector<std::string> v;

    infile.open("input.txt");

    if(!infile.is_open()){
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }

    if(infile.is_open()){ 
       
        std::string s;

         while(infile >> s){
            v.push_back(s);
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