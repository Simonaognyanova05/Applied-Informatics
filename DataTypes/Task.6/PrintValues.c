#include <stdio.h>
void main(void) {
	int a1;
	float a2;
	double a3;
	char a4;

	scanf_s("%i", &a1);
	scanf_s("%f", &a2);
	scanf_s("%lf", &a3);
	scanf_s("%c", &a4, 1);

	printf("%i \n", a1);
	printf("%f \n", a2);
	printf("%lf \n", a3);
	printf("%c \n", a4);

}