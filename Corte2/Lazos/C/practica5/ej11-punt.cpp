#include <iostream>

int main(void) {
    int datos[3] = {10, 20, 30};
    int *p = datos;
    std::cout << "datos[0] = " << datos[0] << std::endl;
    std::cout << "*p = " << *p << std::endl;
    std::cout << "*(p + 1) = " << *(p + 1) << std::endl;
    std::cout << "*(p + 2) = " << *(p + 2) << std::endl;
    return 0;
}
