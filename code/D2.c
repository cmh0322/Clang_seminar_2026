/**
 * @author  Minhyuk Choi (pianoguy0322@gmail.com)
 * @brief   Pointer swap example in C.
 */

#include <stdio.h>

void swap(int x, int y){
    int temp = x;
    x = y;
    y = temp;
}

void swap(int* x, int* y){
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main(){
    int a = 1;
    int b = 2;
    swap(a, b);
    printf("a: %d, b: %d\n", a, b);

    swap(&a, &b);
    printf("a: %d, b: %d\n", a, b);

    return 0;
}