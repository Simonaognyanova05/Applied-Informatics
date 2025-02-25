#include <stdio.h>
void main(void) {
	int a, b, sum;
	scanf_s("Value of a: %i", &a);
	scanf_s("Value of b: %i", &b);
	if (a == 100) {
		if (b == 200) {
			sum = a + b;
		}
	}
	printf("The sum of %i and %i is %i", a, b, sum);
	printf("Exact value of a is %i", a);
	printf("Exact value of b is %i", b);
}