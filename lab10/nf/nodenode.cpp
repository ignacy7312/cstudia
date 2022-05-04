#include <iostream>

typedef struct Node {
    int head;
    struct Node * tail;
} Node_t;

int main(void){

    Node_t * root;


    std::cout << root->tail;
    std::cout << (*root).tail;

    return 0;
}