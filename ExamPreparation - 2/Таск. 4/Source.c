#include <stdio.h>
void main() {
	int arr[5], symetric = 0;
	printf("Vavedete masiva: \n");
	for (int i = 0; i < 5; i++) {
		scanf_s("%i", &arr[i]);
	}

	for (int i = 0; i < 5 / 2; i++) {
		if (arr[i] == arr[5 - 1 - i]) {
			symetric++;
		}
	}

	if (symetric > 0) {
		printf("Masivat e simetrichen");
	}
	else {
		printf("Masivat ne e simetrichen");
	}
}