#include <stdio.h>
void main(void) {
	int a, b, c;
	printf("a: ");
	scanf_s("%i", &a);
	printf("b: ");
	scanf_s("%i", &b);
	printf("c: ");
	scanf_s("%i", &c);

	if (a > b && a > c) {
		printf("Maximum: %i", a);
	}
	else if (b > a && b > c) {
		printf("Maximum: %i", b);
	}
	else {
		printf("Maximum: %i", c);
	}
}