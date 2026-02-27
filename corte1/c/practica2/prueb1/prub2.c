#include <stdio.h>

int sum(int x1, int x2){

int result;
result = x1 + x2;
return result;

}

void imprimir(){

printf("hola mundo\n");

}

int resta(int x1, int x2){

int result;
result = x1 - x2;
return result;

}

int main(){
int a, b, r;
a=3;
b=5;
r = sum(a,b);
printf("el resultado de la suma es: %d\n",r);
printf("el resultado de la resta: %d\n",resta(a,b));
imprimir();
return 0;
}
