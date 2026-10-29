#include <iostream>

bool leap_year(int year){
    bool ly;

    if((year % 4) == 0){
        if((year % 100) == 0){
            if((year % 400) == 0){
                ly = true;
            }
            else{
                ly = false;
            }
        }
        else{
            ly = true;
        }
    }
    else{
        ly = false;
    }

    return ly;
}

void next_date(int d1, int m1, int y1, int& d2, int& m2, int& y2){
    int days_in_month;
    
    if(m1 == 4 || m1 == 6 || m1 == 9 || m1 == 11){
        days_in_month = 30;
    }
    else if(m1 == 2){
        if(leap_year(y1)){
            days_in_month = 29;
        }
        else{
            days_in_month = 28;
        }
    }
    else{
        days_in_month = 31;
    }

    if(d1 < days_in_month){
        d2 = d1 + 1;
        m2 = m1;
        y2 = y1;
    }
    else if(d1 == days_in_month){
        d2 = 1;
        m2 = m1 + 1;
        y2 = y1;
    }
    else if(m1 < 12){
        d2 = 1;
        m2 = m1 + 1;
        y2 = y1;
    }
    else{
        d2 = 1;
        m2 = 1;
        y2 = y1 + 1;
    }
}

int main(){
    int d, m, y;
    int nd, nm, ny;

    std::cout << "Enter a date (day month year): ";
    std::cin >> d >> m >> y;

    next_date(d, m, y, nd, nm, ny);

    std::cout << "The next day is: " << nd << "/" << nm << "/" << ny << std::endl;
    return 0;
}
