#include<stdio.h>

int main() {
    int opcion;
    
    do {
       printf("\nMENU\n");
       printf("1. Saludar\n");
       printf("2.despedirse\n");
       printf("0. salir\n");
       printf("seleccione una opcion: ");
       scanf("%d", &opcion);

       if (opcion == 1) {
          printf("hola.\n");
       } else if (opcion == 2) {
          printf("hasta luego.\n");
       }else if (opcion == 0) {
          printf("fin del programa.\n");
       }else {
          printf("opcion invalida.\n");
       }

    } while (opcion != 0);
 
    return 0;
}
