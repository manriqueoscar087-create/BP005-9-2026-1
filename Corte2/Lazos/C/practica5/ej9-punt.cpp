#include <iostream>

int sumar(int a, int b) {
    return a + b;
}

int main(void) {
    int resultado = sumar(4, 7);
    std::cout << "Resultado = " << resultado << std::endl;
    return 0;
}
