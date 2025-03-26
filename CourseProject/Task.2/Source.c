#include <stdio.h>
void inputArray(int array[][3]) {
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			printf("Element [%i][%i]: ", i, j);
			scanf_s("%i", &array[i][j]);
		}
	}
}

void findSumOfElements(int arr1[][3], int arr2[][3], int resultArr[][3]) {
	
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			resultArr[i][j] = arr1[i][j] + arr2[i][j];
		}
	}
}

void printArray(int array[][3]) {
	printf("Novopoluchen masiv: \n");
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%i ", array[i][j]);
		}
		printf("\n");
	}
}
void main() {
	int arr1[2][3], arr2[2][3], resultArr[2][3];

	printf("Vavedete elementite na masiv 1: \n");
	inputArray(arr1);

	printf("Vavedete elementite na masiv 2: \n");
	inputArray(arr2);

	findSumOfElements(arr1, arr2, resultArr);
	printArray(resultArr);
}