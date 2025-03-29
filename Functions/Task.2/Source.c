#include <stdio.h>

int getCube(int a) {
	return a * a * a;
}

void main() {
	int a, result;
	printf("Input number: ");
	scanf_s("%i", &a);

	result = getCube(a);
	printf("Result: %i", result);
}