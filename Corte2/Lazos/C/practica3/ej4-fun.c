#include <stdio.h>
int esAprobado(float nota);
int main()
{
    float nota = 3.7;
    int resultado;
    resultado = esAprobado(nota);
    if(resultado == 1)
    {
        printf("La nota %.2f es aprobatoria.\n", nota);
    }
    else
    {
        printf("La nota %.2f no es aprobatoria.\n", nota);
    }
    return 0;
}
int esAprobado(float nota)
{
    if(nota >= 3.0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}