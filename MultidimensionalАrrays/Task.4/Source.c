#include <stdio.h>
void main() {
	float A[3], B[3];
	
	printf("Input degrees for first city: \n");
	for (int i = 0; i < 3; i++) {
		scanf_s("%f", &A[i]);
	}

	printf("Input degrees for second city: \n");
	for (int i = 0; i < 3; i++) {
		scanf_s("%f", &B[i]);
	}

	float minA = A[0], minB = B[0], maxA = A[0], maxB = B[0];
	printf("Degrees for first city: \n");
	for (int i = 0; i < 3; i++) {
		if (A[i] < minA) {
			minA = A[i];
		}
		if (A[i] > maxA) {
			maxA = A[i];
		}
		printf("%.2f ", A[i]);
	}
	printf("\n");
	printf("Minimum digree for first city: %.2f; Maximum digree for first city: %.2f \n", minA, maxA);

	printf("Degrees for second city: \n");
	for (int i = 0; i < 3; i++) {
		if (B[i] < minB) {
			minB = B[i];
		}
		if (B[i] > maxB) {
			maxB = B[i];
		}
		printf("%.2f ", B[i]);
	}
	printf("\n");
	printf("Minimum digree for second city: %.2f; Maximum digree for second city: %.2f \n", minB, maxB);
}