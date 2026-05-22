#include <stdio.h>
int factorial(int n);
int main()
{
    int numero = 5;
    int resultado;
    resultado = factorial(numero);
    printf("El factorial de %d es %d\n", numero, resultado);
    return 0;
}
int factorial(int n)
{
    if(n == 0)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1);
    }
}