#include <stdio.h>
void mostrarArea(float base, float altura);
int main()
{
    float base = 8.0;
    float altura = 3.5;
    mostrarArea(base, altura);
    return 0;
}
void mostrarArea(float base, float altura)
{
    float area;
    area = base * altura;
    printf("Base: %.2f\n", base);
    printf("Altura: %.2f\n", altura);
    printf("Area del rectangulo: %.2f\n", area);
}