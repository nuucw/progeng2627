#include <iostream>
#include <string>

void swap_text(std::string& a, std::string& b){
    std::string temp = a;
    a = b;
    b = temp;
}

int main(){
    std::string first, second;

    std::cout << "Enter the first word: ";
    std::cin >> first;
    std::cout << "Enter the second word: ";
    std::cin >> second;

    std::cout << "Before: " << first << " " << second << std::endl;

    swap_text(first, second);

    std::cout << "After:  " << first << " " << second << std::endl;
}