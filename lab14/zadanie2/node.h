#pragma once
#include <stdio.h>
#include <stdlib.h>
#include "gtest.h"

typedef struct Node {
    int head;
    struct Node * tail;
} Node_t;




Node_t * createNode(int head, Node_t * tail);
void pushBack(Node_t * root, int value);
void pushFront(Node_t ** root, int value);
bool popBack(Node_t ** root, int * buffer);
bool popFront(Node_t ** root, int * buffer);
void printList(Node_t * root);
void removeByIndex(Node_t ** root, unsigned int index);
int countElements(Node_t * root);