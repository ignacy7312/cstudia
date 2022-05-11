#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

#include "list.h"
#include "comparators.h"
#include "predicate.h"

static Node_t * createNode(int head) {
	Node_t * node = (Node_t *) malloc(sizeof(node));
	node->head = head;
	node->tail = NULL;
	return node;
}

void push(Node_t * root, int value) {
	Node_t * currentNode = root;
	if (currentNode != NULL) {
		while (currentNode->tail != NULL)
			currentNode = currentNode->tail;
		currentNode->tail = createNode(value);
	}
}

void printList(Node_t * root) {
	Node_t * currentNode = root;
	while (currentNode != NULL) {
		printf("%d\n", currentNode->head);
		currentNode = currentNode->tail;
	}
}

Node_t * createList(unsigned int nodeCount, ...){

	va_list args;
	va_start(args, nodeCount);
	Node_t * root;
	Node_t * currentNode;
	for(int i = 0; i < nodeCount; i++){
		
		if (i == 0){
			currentNode = createNode(va_arg(args, int));
			root = currentNode;
		} else
			push(currentNode, va_arg(args, int));
	}

	va_end(args);
	return root;
}

void removeIf(Node_t ** root, Predicate predicate, int toCompare){
	Node_t ** oneBefore = root; //elemenet przed tym do usunięcia
	Node_t * toBeRemoved = *root; //element do usunięcia
	
	while(toBeRemoved != NULL){ //przejscie przez listę
		if (!predicate(toBeRemoved->head, toCompare)){ 
			//jeżeli kryterium porównawcze nie jest spełnione
			//przejście po kolei przez elementy listy
			oneBefore = &(*oneBefore)->tail; 
			toBeRemoved = toBeRemoved->tail; 
			continue;
		} 
		else if (predicate(toBeRemoved->head, toCompare)) {
			//jeżeli kryterium porównawcze jest spełnione
			//element przed tym do usunięcia staje się elementem następnym po tym do usunięcia
			(*oneBefore) = toBeRemoved->tail;
			free(toBeRemoved);
			break;
		} 
	}
	if(toBeRemoved == NULL)//jeżeli żaden element nie spełnia kryterium
		printf("no such element\n");

}
