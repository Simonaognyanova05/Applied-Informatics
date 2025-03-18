#include <stdio.h>
void main() {
	int arr[4][6], T[6][4];
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 6; j++) {
			scanf_s("%i", &arr[i][j]);
		}
	}

	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < 4; j++) {
			T[i][j] = arr[j][i];
		}
	}

	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < 4; j++) {
			printf("%i ", T[i][j]);
		}
		printf("\n");
	}
}