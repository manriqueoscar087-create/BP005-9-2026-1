#include <iostream>

int main(void) {
    int *p = NULL;
    if (p != NULL) {
        std::cout << "Valor = " << *p << std::endl;
    } else {
        std::cout << "p no apunta a una direccion valida." << std::endl;
    }
    return 0;
}
