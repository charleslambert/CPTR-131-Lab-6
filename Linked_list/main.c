#include "functions.h"

int main() {
	int input = 1;
	TNODE *root = NULL;


	while(input >= 0) {

		//Ask for input if it the first input create tree with 
		//that input else insert value into tree.
		printf("\nWhat number would you like to input: ");
		if (root == NULL){
			scanf("%d", &input);
			root = create();
			root->value = input;
		}
		else {
			scanf("%d", &input);
			insert(root, input);
		}

		if (input >= 0) { 
		//Print the tree in pre, in, and post order.
		printf("Preorder\n");
		preOrder(root);
		printf("\nInorder\n");
		inOrder(root);
		printf("\nPostorder\n");
		postOrder(root);
		printf("\n");
		}
	}

	//Free the root.
	delete(root);

	printf("Thank you, Have a great day.\n"); 


	return 0;
}