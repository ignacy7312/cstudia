#pragma once
#include <stdio.h>
#include <stdbool.h>

typedef struct Node {
    int head;
    struct Node * tail;
} Node_t;

Node_t * createNode(int head, Node_t * tail);
void pushBack(Node_t * root, int value);
void pushFront(Node_t ** root, int value);
bool popBack(Node_t ** root, int * buffer);
bool popFront(Node_t ** root, int * buffer);
void removeByIndex(Node_t ** root, unsigned int index);