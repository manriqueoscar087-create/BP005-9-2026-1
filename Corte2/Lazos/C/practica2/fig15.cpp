#include <iostream>

int main() {
    int fila = 1;
    int columna;
    int n = 7;
    int centro = (n + 1) / 2;

    do {
        columna = 1;
        do {
            if (fila == centro || columna == centro)
                std::cout << "+";
            else
                std::cout << " ";
            columna++;
        } while (columna <= n);
        std::cout << std::endl;
        fila++;
    } while (fila <= n);

    return 0;
}
