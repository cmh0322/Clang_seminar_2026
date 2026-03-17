/**
 * @author  Minhyuk Choi (pianoguy0322@gmail.com)
 * @brief   Basic pointer example in C.
 */

#include <stdio.h>

int main(){
    int x = 10;
    int* ptr = &x;

    printf("%d\n", x);
    printf("%p\n", &x);

    printf("%p\n", &ptr);
    printf("%p\n", ptr);
    printf("%d\n", *ptr);
    return 0;
}