#include <stdio.h>
void main() {
	//First way for declaration and inicialization
	int arr[5], n;
	
	for (int i = 0; i < 5; i++) {
		scanf_s("%i", &n);
		arr[i] = n;
	}

	for (int i = 0; i < 5; i++) {
		printf("%i", arr[i]);
	}

	//Second way for declaration and inicialization
	int arr[5] = { 1, 2, 3, 4, 5 };
	for (int i = 0; i < 5; i++) {
		printf("%i", arr[i]);
	}

	//Third way for declaration and inicialization
	int arr[] = { 1, 2, 3, 4, 5 };
	for (int i = 0; i < 5; i++) {
		printf("%i", arr[i]);
	}

	//Fourth way for declaration and inicialization
	int x = 34;
	int arr[5] = { x + 1, x + 5, 8, 3 * x + 5, x };
	for (int i = 0; i < 5; i++) {
		printf("%i ", arr[i]);
	}
}