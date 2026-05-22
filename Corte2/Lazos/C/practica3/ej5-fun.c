#include <stdio.h>
int potencia(int base, int exponente);
int main()
{
    int base = 2;
    int exponente = 4;
    int resultado;
    resultado = potencia(base, exponente);
    printf(" %d elevado a %d es %d\n", base, exponente, resultado);
    return 0;
}
int potencia(int base, int exponente)
{
    int resultado = 1;
    int i;
    for(i = 0; i < exponente; i++)
    {
        resultado = resultado * base;
    }
    return resultado;
}
