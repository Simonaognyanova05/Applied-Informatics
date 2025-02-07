#include <stdio.h>
void main(void) 
{
	int a, b, c, result;

	printf("Enter a: \n");
	scanf_s("%i", &a);
	printf("Enter b: \n");
	scanf_s("%i", &b);
	printf("Enter c: \n");
	scanf_s("%i", &c);

	result = (a + b) * c;

	printf("%i = (%i + %i) * %i", result, a, b, c);
}