#include <iostream>
#include <string>

int main(){
    double length_in, length_out;
    std::string unit_in, unit_out;

    std::cin >> length_in >> unit_in;

    bool valid_unit = true;

    if((unit_in == "F") || (unit_in == "f")){
        unit_out = "C";
        length_out = (((length_in - 32) * 5) / 9);
    }
    else if((unit_in == "C") || (unit_in == "c")){
        unit_out = "F";
        length_out = (((length_in * 9) / 5) + 32);
    }
    else{
        valid_unit = false;
    }

    if(valid_unit){
        std::cout << length_out << " " << unit_out << std::endl;
    }
    else{
        std::cout << "Error, unit not recognised" << std::endl;
    }
}