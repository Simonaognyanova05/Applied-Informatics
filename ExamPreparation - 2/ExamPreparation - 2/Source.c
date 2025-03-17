#include <stdio.h>
void main() {
	int arr[10], sum = 0;
	for (int i = 0; i < 10; i++) {
		printf("Vavedete element [%i]: ", i);
		scanf_s("%i", &arr[i]);
	}

	int min = arr[0], max = arr[0];
	for (int i = 0; i < 10; i++) {
		if (arr[i] < min) {
			min = arr[i];
		}
		if (max < arr[i]) {
			max = arr[i];
		}
		sum += arr[i];
	}

	float arithmeticMean = sum / 10;
	printf("Min: %i, Max: %i, Sum: %i, Sredno: %.2f", min, max, sum, arithmeticMean);
}