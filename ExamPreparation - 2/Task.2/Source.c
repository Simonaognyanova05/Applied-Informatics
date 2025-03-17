#include <stdio.h>
void main() {
	int arr[3][3];
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			scanf_s("%i", &arr[i][j]);
		}
	}

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%i", arr[i][j]);
		}
		printf("\n");
	}

	int sumOfDiagonals = 0;
	for (int i = 0; i < 3; i++) {
		sumOfDiagonals += arr[i][i];
	}
	printf("Sum of diagonal: %i \n", sumOfDiagonals);

	int sumOfSecondDiagonal = 0;
	for (int i = 0; i < 3; i++) {
		sumOfSecondDiagonal += arr[i][2 - i];
	}
	printf("Sum of second diagonal: %i \n", sumOfSecondDiagonal);

	int max = arr[0][0];
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (max < arr[i][j]) {
				max = arr[i][j];
			}
		}
	}

	printf("Max: %i \n", max);

	for (int j = 0; j < 3; j++) {
		int temp = arr[0][j];
		arr[0][j] = arr[2][j];
		arr[2][j] = temp;
	}

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%i", arr[i][j]);
		}
		printf("\n");
	}
}