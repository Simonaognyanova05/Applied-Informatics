#include <stdio.h>

void inputPassagers(int array[2][6]) {
	for (int i = 0; i < 2; i++) {
		printf("Passagers in train %i \n", i + 1);
		for (int j = 0; j < 6; j++) {
			printf("Passagers in station %i: ", j + 1);
			scanf_s("%i", &array[i][j]);
		}
	}
}
int averagePassagers(int array[2][6]) {
	int sum = 0;
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 6; j++) {
			sum += array[i][j];
		}
	}

	return sum /= 12;
}

void main() {
	int array[2][6];
	inputPassagers(array);

	int average = averagePassagers(array);
	printf("Average passagers are: %i", average);
}