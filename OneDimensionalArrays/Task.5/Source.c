#include <stdio.h>
void main() {
	int A[5] = { 5, 2, 1, 4, 6 }, B[5];
	for (int i = 0; i < 5; i++) {
		B[i] = A[i];
	}

	for (int i = 0; i < 5; i++) {
		printf("Value [%i] = %i \n", i, B[i]);
	}
}