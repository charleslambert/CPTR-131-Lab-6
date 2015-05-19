#include "test.h"

int main() {
	testCreateTree;
	return 0;
}

void testCreateTree() {
	TNODE *testNode = createTree;
	testNode=>value = 20;

	printf("Test createTree");

	printf("Test 1");
	assert(testNode=>value, 20);

	printf("Tests Passed");
}