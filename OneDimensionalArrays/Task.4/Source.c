#include <stdio.h>
void main(void) {
	int A[5], n, searched, found = 0;
	printf("Input element for searching: ");
	scanf_s("%i", &searched);
	for (int i = 0; i < 5; i++) {
		scanf_s("%i", &n);
		A[i] = n;
		if (A[i] == searched) {
			found = A[i];
		}
	}
	if (found != 0) {
		printf("Element was found - %i.", found);
	}
	else {
		printf("Element has not found!");
	}
}