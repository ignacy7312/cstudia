#include <stdio.h>
#include "node.h"

int main(void){


    Node_t * root = createNode(112, NULL);
    pushBack(root, 17);
    pushFront(&root, 14);
    

    int value;
    bool result;
    result = popFront(&root, &value);
    if (result)
        printf("Popped value: %d\n", value);
    result = popBack(&root, &value);
    if (result)
        printf("Popped value: %d\n", value);


    return 0;
}