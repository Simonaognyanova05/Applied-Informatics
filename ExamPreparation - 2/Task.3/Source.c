#include <stdio.h>
void main() {
	int arr[8], hasNegative = 0;
	for (int i = 0; i < 8; i++) {
		printf("Vavedete element [%i]: ", i);
		scanf_s("%i", &arr[i]);
	}

	printf("Chetni elementi: \n");
	for (int i = 0; i < 8; i++) {
		if (arr[i] % 2 == 0) {
			printf("%i ", arr[i]);
		}

		if (arr[i] < 0) {
			hasNegative = 1;
		}
	}

	printf("\n");
	if (hasNegative == 0) {
		printf("Nyama otricatelni chisla");
	}
	else {
		printf("Ima otricatelni chisla");
	}
}