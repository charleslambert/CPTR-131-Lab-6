#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define EMPTY NULL

typedef struct treeNode {
	int value;
	int numberOfNodes;
	struct treeNode *rightBranch;
	struct treeNode *leftBranch;
}TNODE;

TNODE *create();
TNODE *addBranch(TNODE *node, int value);