#include <stdio.h>
float areaCuadrado(float lado);
float areaRectangulo(float base, float altura);
int main()
{
    float lado = 5.0;
    float base = 8.0;
    float altura = 3.0;
    printf("Area del cuadrado: %.2f\n", areaCuadrado(lado));
    printf("Area del rectangulo: %.2f\n", areaRectangulo(base, altura));
    return 0;
}
float areaCuadrado(float lado)
{
    return lado * lado;
}
float areaRectangulo(float base, float altura)
{
    return base * altura;
}
