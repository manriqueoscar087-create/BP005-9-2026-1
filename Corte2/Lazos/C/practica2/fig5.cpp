#include <iostream>

int main() {
    int fila = 5;
    int columna;
    while (fila >= 1) {
        columna = 1;
        while (columna <= fila) {
            std::cout << "+";
            columna++;
        }
        std::cout << std::endl;
        fila--;
    }
    return 0;
}
