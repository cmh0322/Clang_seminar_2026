#include <stdio.h>
#include <string.h>

typedef struct review {
    int point;
    char comment[101];
} review_t;

int main() {
    review_t reviews[1000]; // UNCOMFORTABLE
    int count = 0;

    while (count < 1000) {
        int p;
        char c[101];

        printf("Insert number (type -1 to exit): ");
        scanf(" %d", &p);
        if (p == -1) break;

        printf("리뷰 내용: ");
        scanf(" %s", c); 


        reviews[count].point = p;
        strncpy(reviews[count].comment, c, 100);
        reviews[count].comment[100] = '\0';

        count++;
    }
    return 0;
}