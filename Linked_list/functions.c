#include "functions.h"

TNODE *create() {
	return calloc(1,sizeof(TNODE));
}

TNODE *addBranch(TNODE *node, int value) {
	int depth = floor(log(node->numberOfNodes)/log(2)) + 1;
	int path = node->numberOfNodes;
	TNODE *new_node = node;
	int i =0;
	for (i; i < depth; i++) {
		//Iterates down the number of levels in the tree.
		if(path % 2 == 1 && new_node->leftBranch != EMPTY) {
			//Controls when the path goes left.
			new_node = new_node->leftBranch;
			path = floor(path/2);
		}
		else if (path % 2 == 0 && new_node->rightBranch != EMPTY) {
			//Controls when the path goes right.
			new_node = new_node->rightBranch;
			path = floor(path/2);
		}
		else {
			if (path % 2 == 1) {
				//determines if the node should be made in the 
				//left or right branch.
				new_node->leftBranch = create();
				new_node->leftBranch->value = value;
				node->numberOfNodes += 1;
 				return new_node->leftBranch;
			}
			else if (path % 2 == 0) {
				new_node->rightBranch = create();
				new_node->rightBranch->value = value;
				node->numberOfNodes += 1;
				return new_node->rightBranch;
			}
		}
	}
}