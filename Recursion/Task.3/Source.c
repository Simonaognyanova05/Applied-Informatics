#include <stdio.h>
int raisingASquare(int a, int b) {
	if (b == 0) {
		return 1;
	}

	return a * raisingASquare(a, b - 1);
}

void main() {
	int a, b, result;
	printf("Enter a: ");
	scanf_s("%i", &a);
	printf("Enter b: ");
	scanf_s("%i", &b);

	result = raisingASquare(a, b);
	printf("%i^%i value is %i", a, b, result);
}