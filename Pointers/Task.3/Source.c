#include <stdio.h>

void changeValues(int* a, int* b) {
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

void main() {
	int a, b;
	scanf_s("%i", &a);
	scanf_s("%i", &b);

	changeValues(&a, &b);
	printf("a = %i \n", a);
	printf("b = %i \n", b);
}