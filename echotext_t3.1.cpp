#include <iostream>
#include <string>

int main(){
    std::string string1;

    std::cin >> string1;

    while(((string1 != "STOP") && (string1 != "Stop") && (string1 != "stop"))){
        std::cout << string1 << std::endl;
        std::cin >> string1;
    }
}