#include<iostream>
int main(void){
    int x = 10;

    std::cout << "valor de x = " << x << std::endl;
    std::cout << "direccion de x = " << (void*)&x << std::endl;
    return 0;
}