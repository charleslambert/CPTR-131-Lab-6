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
			printf("This value already exists. We will ignore this value.\n");
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

void preOrder(TNODE *node) {
	if (node == NULL) {
		return;
	}
	printf("%d ", node->value);
	preOrder(node->leftChild);
	preOrder(node->rightChild);
}

void inOrder(TNODE *node) {
	if (node == NULL) {
		return;
	}
	inOrder(node->leftChild);
	printf("%d ", node->value);
	inOrder(node->rightChild);
}

void postOrder(TNODE *node) {
	if (node == NULL) {
		return;
	}
	postOrder(node->leftChild);
	postOrder(node->rightChild);
	printf("%d ", node->value);
}
