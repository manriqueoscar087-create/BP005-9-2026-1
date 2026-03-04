#include <stdio.h>

int main () {
int num1, num2;

printf("ingrese el primer numero: ");
scanf("%d", &num1);

printf("ingrese el segundo: ");
scanf("%d", &num2);

if (num1 > num2) {
printf("%d es mayor que %d\n", num1, num2);
}
return 0;
}
