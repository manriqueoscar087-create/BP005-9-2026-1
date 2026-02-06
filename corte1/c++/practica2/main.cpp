#include <iostream>

using namespace std;

int main() {
    int num1, num2, suma;

    // Solicitar al usuario que ingrese dos números
    cout << "Ingrese el primer numero entero: ";
    cin >> num1;
    cout << "Ingrese el segundo numero entero: ";
    cin >> num2;

    // Realizar la suma
    suma = num1 + num2;

    // Mostrar el resultado
    cout << num1 << " + " << num2 << " = " << suma << endl;

    return 0;
}

