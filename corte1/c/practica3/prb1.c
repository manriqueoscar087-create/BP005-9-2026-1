#include <stdio.h>

int sum(int x1, int x2){
    int result;
    result = x1 + x2;
    return result;
}

int resta(int x1, int x2){
    int result = x1 - x2;
    return result;
}

int mult(int x1, int x2){
    int result = x1 * x2;
    return result;
}

int main (){
    int a, b, r;
    a = 3;
    b = 5;
    r = sum(a, b);
    printf("el resultado de la suma es: %d\n", r);
    printf("\el resultado de la resta es: %d\n", resta(a,b)); 
    printf("\el resultado de la multiplicacion es: %d\n", mult(a,b));

    return 0;
}
