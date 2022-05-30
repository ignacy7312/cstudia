#include <stdio.h>
#include "node.h"

int main(int argc, char** argv){
    
    
    /*
    int value;
    
    Node_t * root = createNode(112, NULL);
    pushBack(root, 17);
    pushBack(root, 18);
    pushBack(root, 19);
    pushBack(root, 20);
    pushBack(root, 21);
    pushFront(&root, 16);
    printf("%d\n", countElements(root));
    printList(root);
    

    Node_t * rootEmpty = createNode(11, NULL);

    
    /*bool result;
    result = popFront(&root, &value);
    if (result)
        printf("Popped value: %d\n", value);
    result = popBack(&root, &value);
    if (result)
        printf("Popped value: %d\n", value);
    printList(root);
    

    removeByIndex(&root, 0);
    removeByIndex(&root, 3);
    removeByIndex(&rootEmpty, 5);
    removeByIndex(&rootEmpty, 4);

    printList(root);
    */
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}