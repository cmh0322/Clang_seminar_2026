#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
    int val;
    struct Node* next;
} node_t;   

node_t* createNode(int val){
    node_t* newNode = (node_t*)malloc(sizeof(node_t));
    newNode->val = val;
    newNode->next = NULL;
    return newNode;
}

void main(){
    int val;
    node_t* ptr = NULL;

    scanf("%d", &val);

    create_node(val);

    printf("value of the node: %d\n", ptr->val);
    printf("address of the node: %p\n", ptr);
}