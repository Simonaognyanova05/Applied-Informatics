#include <stdio.h>
void main(void) {
	int A[6], n; 
	double sum = 0;
	for (int i = 0; i < 6; i++) {
		scanf_s("%i", &n);
		A[i] = n;
		sum += A[i];
	}

	printf("%f", sum / 6);
}