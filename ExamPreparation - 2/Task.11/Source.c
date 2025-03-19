#include <stdio.h>
void main() {
	float temperatures[5][10];
	int maxCity = 0, maxDay = 0;
	for (int i = 0; i < 5; i++) {
		printf("Grad %i: \n", i + 1);
		for (int j = 0; j < 10; j++) {
			printf("Temperatura den %i: ", j + 1);
			scanf_s("%f", &temperatures[i][j]);
		}
	}

	float max = temperatures[0][0];
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 10; j++) {
			if (max < temperatures[i][j]) {
				max = temperatures[i][j];
				maxCity = i;
				maxDay = j;
			}
		}
	}

	printf("Nai-visokata temperatura e izmerena v grad %i, den %i - %.2f", maxCity + 1, maxDay + 1, max);
}