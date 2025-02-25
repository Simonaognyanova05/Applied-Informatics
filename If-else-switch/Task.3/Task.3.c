#include <stdio.h>
void main(void) {
	int a;
	scanf_s("%i", &a);
	if (a < 0) {
		printf("Number is negative");
	}
	else if (a > 0) {
		printf("Number is positive");
	}
	else {
		printf("Number is 0");
	}
}