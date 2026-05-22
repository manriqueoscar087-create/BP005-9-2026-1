#include<iostream>
int main(void){
    int x =25;
    int *p = &x;
    std::cout << "x: " << x << std::endl;
    std::cout << "&x: " << (void*)&x << std::endl;
    printf("p: %p\n", (void*)p);
    printf("*p: %d\n", *p);
    return 0;
}