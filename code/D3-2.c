/**
 * @author  Minhyuk Choi (pianoguy0322@gmail.com)
 * @brief   Array and pointer size example in C.
 */

#include <stdio.h>

int main(){
    int arr[5] = {1, 2, 3, 4, 5};

    printf("%p\n", arr);
    printf("%p\n", &arr);

    printf("%d\n", sizeof(arr));
    printf("%d\n", sizeof(arr + 0));
    return 0;
}