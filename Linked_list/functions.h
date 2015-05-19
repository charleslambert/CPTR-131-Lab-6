#include <stdio.h>
#include <stdlib.h>

typedef struct treeNode {
	int value;
	struct treeNode *rightBranch;
	struct treeNode *leftBranch;
}TNODE;


TNODE *create();