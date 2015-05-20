#include "test.h"

int main() {
	testCreate();
	testAddBranch();
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
	TNODE *testNode = create();
	testNode->value = 5;
	testNode->numberOfNodes = 1;

	printf("Test addBranch\n");

	printf("Test 1\n");
	assert(addBranch(testNode,10)->value == 10);
	assert(testNode->leftBranch->value == 10);

	printf("Test 2\n");
	assert(addBranch(testNode,15)->value == 15);
	assert(testNode->rightBranch->value == 15);

	printf("Test 3\n");
	assert(addBranch(testNode,20)-> value == 20);
	assert(testNode->leftBranch->leftBranch->value == 20);

	printf("Tests Passed\n\n");
}