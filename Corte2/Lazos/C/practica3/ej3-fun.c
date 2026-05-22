#include <stdio.h>
float calcularPromedio(float n1, float n2, float n3);
int main()
{
    float nota1 = 4.2;
    float nota2 = 3.8;
    float nota3 = 4.5;
    float promedio;
    promedio = calcularPromedio(nota1, nota2, nota3);
    printf("El promedio es: %.2f\n", promedio);
    return 0;
}
float calcularPromedio(float n1, float n2, float n3)
{
    float promedio;
    promedio = (n1 + n2 + n3) / 3.0;
    return promedio;
}