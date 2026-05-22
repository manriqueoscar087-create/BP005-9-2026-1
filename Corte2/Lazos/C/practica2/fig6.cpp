#include <iostream>

int main() {
    int fila = 1;
    int columna;
    while (fila <= 4) {
        columna = 1;
        while (columna <= 4) {
            std::cout << "X";
            columna++;
        }
        std::cout << std::endl;
        fila++;
    }
    return 0;
}
