#include <iostream>

int main() {
    int fila, espacios, simbolos;
    for (fila = 1; fila <= 5; fila++) {
        for (espacios = 5; espacios > fila; espacios--)
            std::cout << " ";
        for (simbolos = 1; simbolos <= 2 * fila - 1; simbolos++)
            std::cout << "*";
        std::cout << std::endl;
    }
    return 0;
}
