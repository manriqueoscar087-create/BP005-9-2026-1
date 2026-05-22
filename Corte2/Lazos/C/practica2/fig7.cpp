#include <iostream>

int main() {
    int fila = 1;
    int columna;
    do {
        columna = 1;
        do {
            std::cout << "%";
            columna++;
        } while (columna <= 6);
        std::cout << std::endl;
        fila++;
    } while (fila <= 3);
    return 0;
}
