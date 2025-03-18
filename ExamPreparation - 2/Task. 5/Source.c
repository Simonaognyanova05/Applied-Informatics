#include <stdio.h>
void main() {
	int arr1[5], arr2[5], arr3[5];

	printf("Vavedete elementite na masiv 1: \n");
	for (int i = 0; i < 5; i++) {
		scanf_s("%i", &arr1[i]);
	}

	printf("Vavedete elementite na masiv 2: \n");
	for (int i = 0; i < 5; i++) {
		scanf_s("%i", &arr2[i]);
	}

	for (int i = 0; i < 5; i++) {
		arr3[i] = arr1[i] + arr2[i];
	}

	for (int i = 0; i < 5; i++) {
		printf("%i ", arr3[i]);
	}
}