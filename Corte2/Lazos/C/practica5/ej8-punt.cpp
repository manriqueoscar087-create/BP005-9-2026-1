#include <iostream>

void intercambiar(int *a, int *b) {
    if (a == NULL || b == NULL) {
        return;
    }
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(void) {
    int x = 10;
    int y = 20;
    std::cout << "Antes: x = " << x << ", y = " << y << std::endl;
    intercambiar(&x, &y);
    std::cout << "Despues: x = " << x << ", y = " << y << std::endl;
    return 0;
}
