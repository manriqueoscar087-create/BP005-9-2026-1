#include<stdio.h>
int main() {
 
    int i;
    int suma = 0;

    for (i = 1; i <= 10; i++) {
        suma = suma + i;
    }

    printf("la suma es: %d\n", suma);

    return 0;

}
