#include "test.h"

int main() {
	testCreate();
	testInsert();
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

void testInsert() {
	TNODE *testNode = create();
	testNode->value = 5;

	printf("Test insert\n");

	printf("Test 1\n");
	assert(insert(testNode,10)->value == 10);

	printf("Test 2\n");
	assert(insert(testNode,15)->value == 15);

	printf("Test 3\n");
	assert(insert(testNode,20)-> value == 20);

	printf("Test 4\n");
	assert(insert(testNode,20)->value == 20);

	printf("Tests Passed\n\n");
}