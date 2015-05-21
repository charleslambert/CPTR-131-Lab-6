#include "functions.h"

int main() {
	int input = 1;
	TNODE *root = NULL;
	while(input >= 0) {

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

		printf("\n");
		preOrder(root);
		printf("\n");
		inOrder(root);
		printf("\n");
		postOrder(root);
		printf("\n");
	}
	printf("Thank you\n"); 
	
	
	return 0;
}