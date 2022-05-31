#include <stdarg.h>
#include <stdlib.h>
#include <iostream>

#include "list.h"
#include "comparators.h"
#include "parser.h"
#include "predicate.h"
#include "gtest.h"

static Node_t * createNode(int head) {
	Node_t * node = new Node_t;
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
	Node_t ** oneBefore = root;
	Node_t * toBeRemoved = *root;
	
	while(toBeRemoved != NULL){
		if (!predicate(toBeRemoved->head, toCompare)){
			oneBefore = &(*oneBefore)->tail;
			toBeRemoved = toBeRemoved->tail;
			continue;
		} 
		else if (predicate(toBeRemoved->head, toCompare)) {
			(*oneBefore) = toBeRemoved->tail;
			delete toBeRemoved;
			break;
		} 
	}
	if(toBeRemoved == NULL)
		std::cout << "no such element";

}
