#include <stdio.h>
#include "node.h"

void printList(Node_t * root){
    if (root != NULL){
        int index = 0;
        while( root != NULL){
            printf("Element nr: %d, wartosc: %d\n", index, root->head);
            index++;
            root = root->tail;
        }
    } else{
        printf("It's empty/nonexistent");
    }
}
int countElements(Node_t * root){
    int counter = 0;
    if (root != NULL){
        while(root != NULL){
            counter++;
            root = root->tail;
        }
    }
    return counter;
}


void removeByIndex(Node_t ** root, unsigned int index){
    if (root != NULL && *root != NULL && index < countElements(*root) && index >= 0){
        Node_t * currentNode = *root;
        Node_t * toBeRemoved;
        Node_t * oneBefore;
        int iterator = 0;

        if (index == 0){
            *root = (*root)->tail;
            free(currentNode);
        } 
        else if (index == 1){
            toBeRemoved = currentNode->tail;
            currentNode->tail = toBeRemoved->tail;
            free(toBeRemoved);
        }
        else if (index >= 2){
            while(iterator < index){
                //przejscie do wybranego elemenetu listy
                currentNode = currentNode->tail;
                if (iterator == index - 2) //zapisanie przedostatniego
                    oneBefore = currentNode;
                iterator++;
            }
            toBeRemoved = currentNode;
            (oneBefore->tail) = toBeRemoved->tail; //element przed tym do usunięcia wskazuje na adres po elemencie do usunięcia
            free(toBeRemoved);
        }    
            
    } else { //jezeli lista ma - elementów albo indeks się nie zgadza
        printf("It either does not exist or provided index is out of range\n");
    }
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


