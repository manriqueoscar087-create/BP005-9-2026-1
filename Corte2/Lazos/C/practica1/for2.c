#include<stdio.h>

int main() {
    int numero = 7;
    int i;

    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", numero, i , numero * i);
    }

    return 0;
}
