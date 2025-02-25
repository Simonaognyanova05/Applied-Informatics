#include <stdio.h>
void main(void) {
	int a;
	scanf_s("%i", &a);
	if (a % 2 == 0) {
		printf("Number is even");
	}
	else {
		printf("Number is odd");
	}
}