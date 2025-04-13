#include <stdio.h>

int getAverage(int* A, int length) {
	int max = A[0];
	for (int i = 0; i < length; i++) {
		if (max < A[i]) {
			max = A[i];
		}
	}

	return max;
}

void main() {
	int A[5] = { 2, 1, 6, 8, 10 };

	printf("%i", getAverage(&A, 5));
}