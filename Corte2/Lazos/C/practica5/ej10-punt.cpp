#include <iostream>

void analizarNumeros(int a, int b, int c, int *suma, int *mayor, int *menor) {
    if (suma == NULL || mayor == NULL || menor == NULL) {
        return;
    }
    *suma = a + b + c;
    *mayor = a;
    if (b > *mayor) *mayor = b;
    if (c > *mayor) *mayor = c;
    *menor = a;
    if (b < *menor) *menor = b;
    if (c < *menor) *menor = c;
}

int main(void) {
    int x = 8;
    int y = 3;
    int z = 15;
    int suma;
    int mayor;
    int menor;
    analizarNumeros(x, y, z, &suma, &mayor, &menor);
    std::cout << "Suma = " << suma << std::endl;
    std::cout << "Mayor = " << mayor << std::endl;
    std::cout << "Menor = " << menor << std::endl;
    return 0;
}