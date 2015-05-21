#include "functions.h"

TNODE *create() {
	return calloc(1,sizeof(TNODE));
}

TNODE *insert(TNODE *node, int value) {
	//If the node does not exist create one.
	if (node == NULL) {
		node = create();
		node->value = value;
		return node;
	}
	else {
		//Else traverse the tree.
		if (node->value == value) {
			//If the value already exists tell the user it is invalid
			//and do nothing to effect the tree.
			printf("This value already exists. We will ignore this value.\n");
			return node;
		}
		//Traverse right.
		else if (value > node->value) {
			node->rightChild = insert(node->rightChild, value);
		}
		//Traverse left.
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

int delete(TNODE *node) {
	if (node == NULL) {
		return NULL;
	}
	node->leftChild = delete(node->leftChild);
	node->rightChild = delete(node->rightChild);
	free(node);
	return NULL;
}