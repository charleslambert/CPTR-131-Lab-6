#include "functions.h"

TNODE *create() {
	return calloc(1,sizeof(TNODE));
}

TNODE *insert(TNODE *node, int value) {
	if (node == NULL) {
		node = create();
		node->value = value;
		return node;
	}
	else {
		if (node->value == value) {
			printf("This value already exists.\n We will ignore this value.\n");
			return node;
		}
		else if (value > node->value) {
			node->rightChild = insert(node->rightChild, value);
		}
		else if (value < node->value){
			node->leftChild = insert(node->leftChild, value);
		}
		return node;
	}
}

void preorder(TNODE *node) {
	if (node == NULL) {
		return;
	}
	printf("%d\n", node->value);
	preorder(node->leftChild);
	preorder(node->rightChild);
}
