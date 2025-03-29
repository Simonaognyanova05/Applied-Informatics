#include <stdio.h>

int sumOfElements(int A[10]) {
	int sum = 0;
	for (int i = 0; i < 10; i++) {
		sum += A[i];
	}

	return sum;
}

void main() {
	int A[10], result;

	printf("Input array elements: \n");
	for (int i = 0; i < 10; i++) {
		scanf_s("%i", &A[i]);
	}

	result = sumOfElements(A);
	printf("Sum: %i", result);
}