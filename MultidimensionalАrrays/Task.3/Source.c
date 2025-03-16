#include <stdio.h>
void main() {
	int A[2][3], B[2][3], C[2][3];

	printf("Input elements for first matrix: \n");
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			scanf_s("%i", &A[i][j]);
		}
	}

	printf("Input elements for second matrix: \n");
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			scanf_s("%i", &B[i][j]);
		}
	}

	printf("First matrix: \n");
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%i ", A[i][j]);
		}
		printf("\n");
	}

	printf("Second matrix: \n");
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%i ", B[i][j]);
		}
		printf("\n");
	}

	printf("Sum matrix: \n");
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			C[i][j] = A[i][j] + B[i][j];
			printf("%i ", C[i][j]);
		}
		printf("\n");
	}
}