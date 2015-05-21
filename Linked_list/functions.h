#include <stdio.h>
#include <stdlib.h>

typedef struct treeNode {
	int value;
	struct treeNode *rightChild;
	struct treeNode *leftChild;
}TNODE;

TNODE *create();
TNODE *insert(TNODE *node, int value);
void preOrder(TNODE *node);
void inOrder(TNODE *node);
void postOrder(TNODE *node);