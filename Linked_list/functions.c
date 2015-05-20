#include "functions.h"

TNODE *create() {
	return calloc(1,sizeof(TNODE));
}

TNODE *insert(TNODE *node, int value) {
	if (node == EMPTY) {
		node = create();
		node->value = value;
		return node;
	}
	else {
		if (node->value == value) {
			printf("This value already exists.\n We will ignore this value.\n");
			return node;
		}
		if(node->value < value) {
			insert(node->rightChild, value);
		}
		else {
			insert(node->leftChild, value);
		}		
	}
}