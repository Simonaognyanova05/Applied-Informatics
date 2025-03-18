#include <stdio.h>
void main() {
	int arr[10], br = 0;

	printf("Vavedete elementite na masiva: \n");
	for (int i = 0; i < 10; i++) {
		scanf_s("%i", &arr[i]);
	}

	for (int i = 0; i < 10; i++) {
		for (int j = i + 1; j < 10; j++) {
			if (arr[i] == arr[j]) {
				br = 1;
			}
		}
	}

	if (br > 0) {
		printf("Ima povtaryashti!");
	}
	else {
		printf("Nyama povtaryashti!");
	}
}