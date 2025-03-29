#include <stdio.h>

int getMinElement(int arr[10]) {
	int min = arr[0];
	for (int i = 0; i < 10; i++) {
		if (min > arr[i]) {
			min = arr[i];
		}
	}

	return min;
}
void main() {
	int A[10], result;

	printf("Input array elements: \n");
	for (int i = 0; i < 10; i++) {
		scanf_s("%i", &A[i]);
	}

	result = getMinElement(A);
	printf("Min element: %i", result);
}