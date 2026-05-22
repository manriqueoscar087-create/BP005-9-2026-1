#include <iostream>

int main() {
    int fila, espacios, simbolos;
    fila = 5;

    while (fila >= 1) {
        espacios = 5 - fila;
        while (espacios > 0) {
            std::cout << " ";
            espacios--;
        }
        simbolos = 2 * fila - 1;
        while (simbolos > 0) {
            std::cout << "@";
            simbolos--;
        }
        std::cout << std::endl;
        fila--;
    }

    fila = 2;
    while (fila <= 5) {
        espacios = 5 - fila;
        while (espacios > 0) {
            std::cout << " ";
            espacios--;
        }
        simbolos = 2 * fila - 1;
        while (simbolos > 0) {
            std::cout << "@";
            simbolos--;
        }
        std::cout << std::endl;
        fila++;
    }

    return 0;
}
