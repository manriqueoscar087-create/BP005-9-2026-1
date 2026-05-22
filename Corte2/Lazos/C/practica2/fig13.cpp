#include <iostream>

int main() {
    int fila, espacios, numero;
    int n = 4;

    for (fila = 1; fila <= n; fila++) {
        for (espacios = n; espacios > fila; espacios--)
            std::cout << " ";
        for (numero = 1; numero <= fila; numero++)
            std::cout << numero;
        for (numero = fila - 1; numero >= 1; numero--)
            std::cout << numero;
        std::cout << std::endl;
    }

    return 0;
}
