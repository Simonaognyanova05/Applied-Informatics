#include <stdio.h>
void main(void) {
	int n, sum, br;
	sum = 0;
	br = 1;
	while (sum <= 15) {
		printf("Vavedete %i-to chislo: ", br);
		scanf_s("%i", &n);
		sum += n;
		br++;
	}
	printf("Sled dobavyane na %i-to chislo sumata nadhvarli 15 i e ravna na %i ", br, sum);
}