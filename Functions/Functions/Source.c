#include <stdio.h>

int findSum(int a, int b) {
	return a + b;
}

void main() {
	int a, b;
	printf("Input a: ");
	scanf_s("%i", &a);

	printf("Input b: ");
	scanf_s("%i", &b);

	int sum = findSum(a, b);
	printf("Sum: %i", sum);
}