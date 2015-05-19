#include "test.h"

int main() {
	testCreate();
	return 0;
}

void testCreate() {
	TNODE *testNode = create();
	testNode->value = 20;

	printf("Test create\n");

	printf("Test 1\n");
	assert(testNode->value == 20);

	printf("Tests Passed\n\n");
}

void testAddBranch() {
	TNODE *testNode1 = create();
	testNode1->value = 20;

	printf("Test create\n");

	printf("Test 1\n");
	assert(addBranch(testNode1,10)->value == 10);

	printf("Test 2\n");
	assert(addBranch(testNode1,15)->value == 15);

	printf("Tests Passed\n\n");
}