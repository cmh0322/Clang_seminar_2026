#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node* next;
} node_t;

node_t* HEAD = NULL;
node_t* TAIL = NULL;

node_t* createNode(int data) {
    node_t* newNode = (node_t*)malloc(sizeof(node_t));
    if (newNode == NULL) return NULL;

    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

void InsertNode(int data) {
    node_t* newNode = createNode(data);

    if (HEAD == NULL) {
        HEAD = newNode;
        TAIL = newNode;
    } else {
        TAIL->next = newNode;
        TAIL = newNode;
    }
}

void deleteNode() {
    if (HEAD == NULL) return;

    if (HEAD == TAIL) {
        free(HEAD);
        HEAD = NULL;
        TAIL = NULL;
    } else {
        node_t* curr = HEAD;
        while (curr->next != TAIL) {
            curr = curr->next;
        }

        free(TAIL);
        curr->next = NULL;
        TAIL = curr;
    }
}


int main() {
    InsertNode(10);
    InsertNode(20);
    InsertNode(30);

    deleteNode(); 

    return 0;
}