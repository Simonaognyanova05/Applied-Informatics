#include <stdio.h>
void main(void) {
	float f, c;

	scanf_s("%f", &f);
	c = (f - 32) * 1.8;

	printf("%f", c);
}