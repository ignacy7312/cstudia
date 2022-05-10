#include <stdio.h>

#include "list.h"

int main() {
	// Create list
	const unsigned int nodeCount = 10;
	Node_t * root = createList(nodeCount, 2, 4, 6, 8, 10, 50, 60, 70,1,1);
	// Print created list
	printf("Created new list:\n");
	printList(root);
	
	return 0;
}