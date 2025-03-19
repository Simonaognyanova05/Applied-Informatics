#include <stdio.h>
void main() {
	float prices[5][3];

	for (int i = 0; i < 5; i++) {
		printf("Grad %i: \n", i + 1);
		for (int j = 0; j < 3; j++) {
			printf("Prodict %i: ", j + 1);
			scanf_s("%f", &prices[i][j]);
		}
	}

	float min = prices[0][0], max = prices[0][0];
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 3; j++) {
			if (min > prices[i][j]) {
				min = prices[i][j];
			}
			if (max < prices[i][j]) {
				max = prices[i][j];
			}
		}
	}
	printf("Min: %.2f, Max: %.2f", min, max);
}
