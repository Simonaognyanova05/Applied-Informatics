#include <stdio.h>

#define MAXN 100
void main() {
	int length, n;
	printf("Input array lenght (max 100): ");
	scanf_s("%i", &length);
	int arr[MAXN];
	int max = arr[0];
	if (length <= 0 || length > MAXN) {
		printf("Invalid length!");
		return;
	}
	printf("Input array values \n");
	for (int i = 0; i < length; i++) {
		scanf_s("%i", &n);
		arr[i] = n;
		if (arr[i] > max) {
			max = arr[i];
		}
	}

	printf("Max value: %i", max);
}