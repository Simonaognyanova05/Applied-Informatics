#include <stdio.h>
void main() {
	int arr[2][3] = { {12, 243, 32}, {412, 523, 61111} };
	int min = arr[0][0];
	int max = arr[0][0];
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			if (arr[i][j] < min) {
				min = arr[i][j];
			}

			if (arr[i][j] > max) {
				max = arr[i][j];
			}
		}
	}

	printf("Min: %i; Max: %i \n", min, max);
}