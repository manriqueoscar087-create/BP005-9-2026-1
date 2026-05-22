#include <iostream>

int main() {
    int fila, columna;
    int n = 5;
    int ancho = n * 2 - 1;

    for (fila = 1; fila <= ancho; fila++) {
        int distancia = fila <= n ? n - fila : fila - n;
        for (columna = 1; columna <= ancho; columna++) {
            if (columna == distancia + 1 || columna == ancho - distancia)
                std::cout << "#";
            else
                std::cout << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}