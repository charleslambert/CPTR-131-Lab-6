#include "functions.h"

int main() {
	int input = 1;
	TNODE *root = NULL;


	while(input >= 0) {

		//Ask for input if it the first input create tree with 
		//that input else insert value into tree.
		printf("What number would you like to input: ");
		if (root == NULL){
			scanf("%d", &input);
			root = create();
			root->value = input;
		}
		else {
			scanf("%d", &input);
			insert(root, input);
		}

		//Print the tree in pre, in, and post order.
		printf("\n");
		preOrder(root);
		printf("\n");
		inOrder(root);
		printf("\n");
		postOrder(root);
		printf("\n");
	}

	//Free the root.
	delete(root);
	free(root);

	printf("Thank you, Have a great day.\n"); 


	return 0;
}