#include <iostream>

void cambiar(int *p) {
    if (p == NULL) {
        return;
    }
    *p = 100;
}

int main(void) {
    int x = 5;
    std::cout << "Antes: x = " << x << std::endl;
    cambiar(&x);
    std::cout << "Despues: x = " << x << std::endl;
    return 0;
}
