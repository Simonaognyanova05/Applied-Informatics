#include <stdio.h>
void main(void) {
	int y, b, x, k;
	printf("Vavedete b: ");
	scanf_s("%i", &b);
	printf("Vavedete k: ");
	scanf_s("%i", &k);

	x = 0;
	y = k;
	while (y <= 10) {
		printf("x = %i \n", x);
		printf("y = %i \n", y);
		x += 3;
		y = b * x + k;
	}
}