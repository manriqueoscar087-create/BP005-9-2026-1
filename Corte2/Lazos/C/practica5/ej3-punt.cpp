#include<iostream>
int main(void){
    int x = 25;
    int *p = &x;

    std::cout << "x: " << x << std::endl;
    std::cout << "*p: " << *p << std::endl;

    *p =99;

    std::cout << "x despues = " << x << std::endl;
    return 0;
}    