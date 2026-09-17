#include <iostream>
#include <cstdlib>
#include "main.h"

int main(){
    double hight,side,flag;
    flag = 0;
    Triangle res;
    while (flag == 0) {
        std::cout << "enter hight of triangle: ";
        std::cin >> hight;
        std::cout << "enter side of triangle: ";
        std::cin >> side;
        try {
            res.hight(hight);
            res.side(side);
            flag = 1;
        }
        catch (const std::range_error& tmp) {
            std::cout << "error, wrong input";
            system("cls");
        }
    }
    std::cout<<"area = "<<res.find_square()  << std::endl;
    return 0;
}