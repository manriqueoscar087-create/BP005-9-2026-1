#include <stdio.h>
int sumarMatriz(int m[][3], int filas);
int main()
{
    int matriz[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    int suma;
    suma = sumarMatriz(matriz, 3);
    printf("La suma de la matriz es: %d\n", suma);
    return 0;
}
int sumarMatriz(int m[][3], int filas)
{
    int suma = 0;
    int i;
    int j;
    for(i = 0; i < filas; i++)
    {
        for(j = 0; j < 3; j++)
        {
            suma = suma + m[i][j];
        }
    }
    return suma;
}