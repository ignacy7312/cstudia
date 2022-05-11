#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

#include "list.h"

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

	Node_t * root = NULL; //jezeli zero argumentow to zwroci sie NULL, a nie losowy wskaznik
	Node_t * currentNode;
	

	va_list args;
	va_start(args, nodeCount);//dostęp do listy argumentów
	for(int i = 0; i < nodeCount; i++){
		
		if (i == 0){
			currentNode = createNode(va_arg(args, int));
			root = currentNode;
		} else
			push(currentNode, va_arg(args, int));
	}

	va_end(args); //kończy iterowanie po liście argumentów
	return root;
}

