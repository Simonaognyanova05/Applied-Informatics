#include <stdio.h>
void main(void) {
	int n, sum;
	scanf_s("%i", &n);
	sum = 0;
	for (int i = 1; i <= n; i++) {
		sum += i;
		printf("Sumata e: %i \n", sum);
	}
}