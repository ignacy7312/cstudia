#include <stdio.h>
#include "queue.h"


int main(void){

    Node_t * root;
    isEmpty(root) ? printf("It's empty\n") : printf("It's not empty\n");
    push(&root, 16);
    push(&root, 17);
    push(&root, 18);
    push(&root, 19);
    push(&root, 20);
    push(&root, 21);
    printQueue(root);

    int buffer;

    pop(&root, &buffer) ? printf("popped, buffer: %d\n", buffer) : printf("not popped\n");
    pop(&root, &buffer) ? printf("popped, buffer: %d\n", buffer) : printf("not popped\n");
    pop(&root, &buffer) ? printf("popped, buffer: %d\n", buffer) : printf("not popped\n");
    pop(&root, &buffer) ? printf("popped, buffer: %d\n", buffer) : printf("not popped\n");
    pop(&root, &buffer) ? printf("popped, buffer: %d\n", buffer) : printf("not popped\n");
    printQueue(root);
    pop(&root, &buffer) ? printf("popped, buffer: %d\n", buffer) : printf("not popped\n");
    pop(&root, &buffer) ? printf("popped, buffer: %d\n", buffer) : printf("not popped\n");
    push(&root, 13);
    printQueue(root);
    isEmpty(root) ? printf("It's empty\n") : printf("It's not empty\n");
    return 0;
}