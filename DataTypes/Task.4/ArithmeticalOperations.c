#include <stdio.h>
void main(void) {
	int a, b, c, d;
	a = 25;
	b = 5;
	c = 10;
	d = 7;

	printf("%i \n", a % b);
	printf("%i \n", a % c);
	printf("%i \n", a % d);
	printf("%i \n", (a / d) * d);
}