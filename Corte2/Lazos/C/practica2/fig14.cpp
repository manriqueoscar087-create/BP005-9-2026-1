#include <iostream>

int main() {
    int fila, columna;
    for (fila = 1; fila <= 11; fila++) {
        for (columna = 1; columna <= 11; columna++) {
            if (
                (columna == 6) ||
                (fila == 6) ||
                (fila == columna) ||
                (fila + columna == 12) ||
                (fila == 3 && (columna == 5 || columna == 7)) ||
                (fila == 9 && (columna == 5 || columna == 7)) ||
                (columna == 3 && (fila == 5 || fila == 7)) ||
                (columna == 9 && (fila == 5 || fila == 7))
            )
                std::cout << "o";
            else
                std::cout << " ";
        }
        std::cout << std::endl;
    }
    return 0;
}
