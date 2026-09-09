#include <iostream>
#include <cstdlib>
#include "main.h"

int main(){
    double a,a1,flag;
    flag = 0;
    Triangle res;
    while (flag == 0) {
        std::cout << "enter hight of triangle: ";
        std::cin >> a;
        std::cout << "enter side of triangle: ";
        std::cin >> a1;
        try {
            res.hight(a);
            res.side(a1);
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