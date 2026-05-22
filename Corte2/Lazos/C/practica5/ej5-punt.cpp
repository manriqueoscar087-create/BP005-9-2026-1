#include<iostream>
void cambiar(int n){
    n = 100;
    std::cout << "dentro de cambiar: n = " << n << std::endl;
}
int main(void){
    int x = 5;
    std::cout << "antes: x = " << x << std::endl;
    cambiar(x);
    std::cout << "despues: x = " << x << std::endl;
    return 0;
}