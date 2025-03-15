#include <stdio.h>
void main() {
	int arr[8] = { 10000, 100, 3, 23, 1, 2000, 12, 3 };
	int min = arr[0];
	int max = arr[0];
	for (int i = 0; i < 8; i++) {
		if (arr[i] < min) {
			min = arr[i];
		}
		if (arr[i] > max) {
			max = arr[i];
		}
	}

	printf("Min: %i; Max: %i \n", min, max);
}