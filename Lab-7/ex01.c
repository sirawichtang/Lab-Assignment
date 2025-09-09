#include <stdio.h>

int main() {
	int test = 0;
    int *testPtr;

    testPtr = &test;
    printf("The address of test variable is at: %p\n", testPtr);
}