#include <stdio.h>
void main(void) {
	int a, b, sum;
	scanf_s("%i", &a);
	scanf_s("%i", &b);
	if (a == 100) {
		if (b == 200) {
			sum = a + b;
	        printf("The sum of %i and %i is %i\n", a, b, sum);
		}
	}
	printf("Exact value of a is %i\n", a);
	printf("Exact value of b is %i\n", b);
}