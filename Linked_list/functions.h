#include <stdio.h>
#include <stdlib.h>

#define EMPTY NULL

typedef struct treeNode {
	int value;
	struct treeNode *rightChild;
	struct treeNode *leftChild;
}TNODE;

TNODE *create();
TNODE *insert(TNODE *node, int value);
void preorder(TNODE *node);