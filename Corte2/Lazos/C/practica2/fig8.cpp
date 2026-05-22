#include <iostream>

int main() {
    int fila = 1;
    int columna;
    do {
        columna = 1;
        do {
            std::cout << "$";
            columna++;
        } while (columna <= fila);
        std::cout << std::endl;
        fila++;
    } while (fila <= 5);
    return 0;
}
