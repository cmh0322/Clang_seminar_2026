#include <stdio.h>

typedef struct info{
    char* name;
    int math;
    int english;
    float average;
    info_t* next;
} info_t;

int main(){
    info_t student2 = {"Park", 80, 90, 85.0, NULL};
    info_t student1 = {"Choi", 90, 80, 85.0, &student2};

    info_t* ptr = &student1;

    printf("%p\n", ptr);
    printf("%p\n", &student1);

    printf("%s\n", (*ptr).name);
    printf("%d\n", (*ptr).math);
    printf("%d\n", (*ptr).english);
    printf("%.2f\n", (*ptr).average);

    printf("%s\n", (*((*ptr).next)).name);
    printf("%d\n", (*((*ptr).next)).math);
    printf("%d\n", (*((*ptr).next)).english);   
    printf("%.2f\n", (*((*ptr).next)).average);
}