#include <stdio.h>
void main() {
	int A[2][3], T[3][2];
	
	printf("Input matrix elements: \n");
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			scanf_s("%i", &A[i][j]);
		}
	}
	
	for (int j = 0; j < 2; j++) {
		for (int i = 0; i < 3; i++) {
			T[i][j] = A[j][i];
		}
	}

	printf("Normal Matrix: \n");
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%i ", A[i][j]);
		}
		printf("\n");
	}

	printf("T matrix: \n");
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 2; j++) {
			printf("%i ", T[i][j]);
		}
		printf("\n");
	}
}