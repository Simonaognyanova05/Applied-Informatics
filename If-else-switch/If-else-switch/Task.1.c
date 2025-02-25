#include <stdio.h>
void main(void) {
	int a;
	printf("Number: ");
	scanf_s("%i", &a);
	if (a < 0) {
		a = -a;
		printf("Absolute value: %i\n", a);
	}
	else {
		printf("Number is positive!");
	}
}