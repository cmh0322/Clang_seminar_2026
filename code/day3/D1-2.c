#include <stdio.h>
#include <string.h>

typedef struct review {
    int point;
    char comment[101];
} review_t;

int main() {
    while(1){
        review_t* newReview = (review_t*)malloc(sizeof(review_t));
        printf("Insert number (type -1 to exit): ");
        scanf(" %d", &newReview->point);
        if (newReview->point == -1) {
            free(newReview);
            break;
        }
        prinf("type review comment: ");
        scanf(" %s", newReview->comment);

        //... process newReview

        free(newReview);
    }

    return 0;
}