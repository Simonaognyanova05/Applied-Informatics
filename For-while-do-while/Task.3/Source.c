#include <stdio.h>
void main(void) {
	int interval, sum, count;
	printf("Vavedete interval: ");
	scanf_s("%i", &interval);
	sum = 0;
	count = 0;
	while (count <= interval) {
		if (count % 2 == 0) {
			sum += count;
		}
		count++;
	}
	printf("Sumata na chetnite chisla v intervala ot 0 do %i e: %i", interval, sum);
}