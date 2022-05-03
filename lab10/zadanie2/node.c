#include "node.h"


void removeByIndex(Node_t ** root, unsigned int index);






Node_t * createNode(int head, Node_t * tail){
    //dynamicznie utworz wezel
    //rownowaznie: (Node_t *) malloc(sizeof(Node_t))
    Node_t * node = (Node_t *) malloc(sizeof(*node));

    //inicjalizacja wezla
    (*node).head = head;
    (*node).tail = tail;

    //zwroc wezel 
    return node;
}



void pushBack(Node_t * root, int value){
    Node_t * currentNode = root;
if (currentNode != NULL){
    //przejdz na koniec listy
    while(currentNode->tail != NULL)
        currentNode = currentNode->tail;

    //dodaj nowy element na koniec listy
    currentNode->tail = createNode(value, NULL);
    }
}

void pushFront(Node_t ** root, int value){
    if (root != NULL){
        //utworz nowy wezel na poczatku listy - *root to adres poczatku listy
        Node_t * node = createNode(value, *root);
        *root = node;
    }
}



bool popBack(Node_t ** root, int * buffer){
    bool result = false;
    if (root != NULL && *root != NULL && buffer != NULL){
        Node_t * currentNode = *root;
        //jezeli lista ma jeden element, usun go
        if (currentNode->tail == NULL){
            //odczytaj wartosc
            *buffer = currentNode->head;
            //usun element
            free(currentNode);
            *root = NULL;
        
        } else { //w przeciwnym wypadku przejdz do ostatniego elementu
            while (currentNode->tail->tail != NULL)
                currentNode = currentNode->tail;
                //odczytaj wartosc ostatniego elementu
                *buffer = currentNode->tail->head;
                //usun ostatni elememt
                free(currentNode->tail);
                //ustaw koniec listy na przedostatnim elemencie
                currentNode->tail = NULL;
        }
        //sukces
        result = true;
    }
    return result;
}


bool popFront(Node_t ** root, int * buffer){
    bool result = false;
    if (root != NULL && *root != NULL && buffer != NULL){
        //odczytaj wartosc pierszego elementu
        *buffer = (*root)->head;
        //wez drugi element z listy
        Node_t * next = (*root)->tail;
        //usun pierwszy element
        free(*root);
        //ustaw poczatek listy na drugi element
        *root = next;
        //sukces
        result = true;
    }
    return result;
}