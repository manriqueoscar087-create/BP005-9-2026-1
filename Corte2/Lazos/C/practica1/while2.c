#include<stdio.h>

int main () {
    int contador = 1;
    int numero;
    int suma = 0;

    while (contador <= 3) {
          printf("ingrese un numero: ");
          scanf("%d", &numero);

          suma = suma + numero;
          contador++;
    }

   printf("la suma es:%d\n", suma);

   return 0;
}
