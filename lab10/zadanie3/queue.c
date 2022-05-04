#include "queue.h"


void printQueue(Node_t * root){
    if(root != NULL){
        int index = 0;
        while(root != NULL){
            printf("KOLEJKA. ELEMENT %d, WARTOSC: %d\n", index, root->head);
            index++;
            root = root->tail;
        }
    } else {
        printf("It's empty/nonexistent\n");
    }
}

Node_t * createNode(int head, Node_t * tail){
    Node_t * node = (Node_t *) malloc(sizeof(*node));
    (*node).head = head;
    (*node).tail = tail;
    return node;
}


void push(Node_t ** root, int value){
    Node_t * currentNode = *root;
    if (currentNode == NULL){
        currentNode = createNode(value, NULL);
        *root = currentNode;
    
    } else {
        //przejście na koniec kolejki
        while(currentNode->tail != NULL){
            currentNode = currentNode->tail;
        }
        currentNode->tail = createNode(value, NULL); //stworzenie nowego elementu na samemym końcu
    }
}



bool pop(Node_t ** root, int * buffer){
    bool result = false;
    if (root != NULL && *root != NULL && buffer != NULL){
        *buffer = (*root)->head;
        Node_t * next = (*root)->tail; //drugi element kolejki dostaje swój adres
        free(*root); //root staje sie NULL
        *root = next; //root dostaje adres drugiego elementu - nowego pierwszego
        result = true;
    }
    return result;   
}

bool isEmpty(Node_t * root){
    return (root != NULL) ? false : true;
}