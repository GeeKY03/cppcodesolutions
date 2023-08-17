#include <iostream>

int main() {

    int year = 0;
    bool year4 = false;
    bool year100 = false;
    bool year400 = false;

    // std::cout<< "\n Enter the year: ";
    std::cin>>year;

    if (year%4 == 0) {
        year4 = true;
    }

    if (year%100 == 0) {
        year100 = true;
    }

    if (year%400 == 0) {
        year400 = true;
    }

    if (year4 && !year100) {
        std::cout<<"\n Leap year";
    }

    else if (year100 && year400 ) {
        std::cout<<"\n Leap Year";
    }

    else {
        std::cout<<"\n Not a leap year";
    }

}