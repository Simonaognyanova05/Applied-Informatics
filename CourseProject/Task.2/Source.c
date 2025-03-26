#include <stdio.h>
void main() {
	int arr1[2][3], arr2[2][3], resultArr[2][3];

	printf("Vavedete elementite na masiv 1: \n");
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			printf("Element [%i][%i]: ", i, j);
			scanf_s("%i", &arr1[i][j]);
		}
	}

	printf("Vavedete elementite na masiv 2: \n");
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			printf("Element [%i][%i]: ", i, j);
			scanf_s("%i", &arr2[i][j]);
		}
	}

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			resultArr[i][j] = arr1[i][j] + arr2[i][j];
		}
	}
	printf("Novopoluchen masiv: \n");
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%i ", resultArr[i][j]);
		}
		printf("\n");
	}
}