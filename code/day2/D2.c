#include <stdio.h>

typedef struct info{
    char* name;
    int math;
    int english;
    float average;
} info_t;

int main(){
    info_t student1 = {"Choi", 90, 80, 85.0};
    info_t* ptr = &student1;

    printf("%p\n", ptr);
    printf("%p\n", &student1);

    printf("%s\n", (*ptr).name);
    printf("%d\n", (*ptr).math);
    printf("%d\n", (*ptr).english);
    printf("%.2f\n", (*ptr).average);
}