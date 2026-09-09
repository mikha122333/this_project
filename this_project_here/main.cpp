#include <iostream>
#include <cstdlib>

int main(){
    double a,a1,s;
    std::cout << "enter hight of triangle: ";
    std::cin >> a;
    while (a <= 0) {
        system("cls");
        std::cout << "wrong input, try again: ";
        std::cin >> a;
    };
    std::cout << "enter side of triangle: ";
    std::cin >> a1;
    while (a1 <= 0) {
        system("cls");
        std::cout << "wrong input, try again: ";
        std::cin >> a1;
    }
    s=0.5*a*a1;
    std::cout<<"area = "<< s << std::endl;
    return 0;
}