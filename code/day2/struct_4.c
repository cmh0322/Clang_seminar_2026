#include <stdio.h>

typedef struct item {
    int id;
    float price;
    struct item* next;
} item_t;

int main() {
    // TASK2. 각각의 원소값 초기화하기
    item_t i1 = {1, 8.3, NULL};
    item_t i2 = {2, 10.1, NULL};
    item_t i3 = {3, 17.0, NULL};

    // TASK3. 포인터 변수 HEAD, TAIL, CUR를 이용하여 연결 및 초기화하기
    i1.next = &i2;
    i2.next = &i3;
    i3.next = NULL;

    item_t *HEAD = &i1;
    item_t *TAIL = &i3;
    item_t *CUR = NULL;

    // TASK4. while문 사용하여 모든 노드의 id, price값 출력하기
    CUR = HEAD;
    while (CUR != NULL) {
        printf("ID: %d, Price: %.1f\n", CUR->id, CUR->price);
        CUR = CUR->next;
    }

    return 0;
}