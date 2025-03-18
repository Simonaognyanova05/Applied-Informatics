#include <stdio.h>
void main() {
	int arr[20], sum = 0;

	printf("Vavedete chisla v intervala 0-100: \n");
	for (int i = 0; i < 20; i++) {
		scanf_s("%i", &arr[i]);
		sum += arr[i];
	}

	float srednaStoinost = sum / 20;
	printf("Sredna stoinost: %.2f \n", srednaStoinost);

	printf("Elementite, po-golemi ot srednata stoinost: \n");
	for (int i = 0; i < 20; i++) {
		if (arr[i] > srednaStoinost) {
			printf("%i ", arr[i]);
		}
	}
}