#include <stdio.h>
void main() {
	int A[10];
	for (int i = 0; i < 10; i++) {
		A[i] = i * i;
		printf("A[%i] = %i \n", i, A[i]);
	}
}