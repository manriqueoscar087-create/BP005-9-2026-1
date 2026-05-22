#include <iostream>

int main() {
    int fila, columna;
    for (fila = 1; fila <= 5; fila++) {
        for (columna = 1; columna <= 8; columna++) {
            if ((fila + columna) % 2 == 0)
                std::cout << "*";
            else
                std::cout << "o";
        }
        std::cout << std::endl;
    }
    return 0;
}
