/**
 * @author  Minhyuk Choi (pianoguy0322@gmail.com)
 * @brief   Pointer arithmetic example in C.
 */


#include <stdio.h>

int main(){
    int arr[5] = {1, 2, 3, 4, 5};
    int* ptr = arr;

    printf("%p\n", arr);
    printf("%d\n", arr);

    printf("%p\n", ptr);
    printf("%p\n", ptr + 1);

    return 0;
}