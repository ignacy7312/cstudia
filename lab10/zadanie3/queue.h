#pragma once
#include <stdio.h>
#include <stdbool.h>

typedef struct Node {
    int head;
    struct Node * tail;
} Node_t;

void push(Node_t ** root, int value);
bool pop(Node_t ** root, int * buffer);
bool isEmpty(Node_t * root);
void printQueue(Node_t * root);
Node_t * createNode(int head, Node_t * tail);