#include <stdio.h>
int sumarArreglo(int v[], int n);
int main()
{
    int datos[5] = {4, 7, 2, 9, 5};
    int suma;
    suma = sumarArreglo(datos, 5);
    printf("La suma del arreglo es: %d\n", suma);
    return 0;
}
int sumarArreglo(int v[], int n)
{
    int suma = 0;
    int i;
    for(i = 0; i < n; i++)
    {
        suma = suma + v[i];
    }
    return suma;
}