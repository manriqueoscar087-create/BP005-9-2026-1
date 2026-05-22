#include <iostream>

int main() {
    int fila, columna;
    for (fila = 1; fila <= 4; fila++) {
        for (columna = 1; columna <= 8; columna++)
            std::cout << "#";
        std::cout << std::endl;
    }
    return 0;
}
