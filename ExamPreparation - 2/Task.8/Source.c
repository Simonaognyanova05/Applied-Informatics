#include <stdio.h>
void main() {
	int arr[3][3];

	printf("Vavedete elementite na masiva: \n");
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			scanf_s("%i", &arr[i][j]);
		}
	}

	int min = arr[0][0], max = arr[0][0];
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (arr[i][j] < min) {
				min = arr[i][j];
			}
			if (arr[i][j] > max) {
				max = arr[i][j];
			}
		}
	}

	printf("Min: %i, Max: %i", min, max);
}