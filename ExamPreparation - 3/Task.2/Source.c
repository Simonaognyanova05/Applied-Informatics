#include <stdio.h>

void inputArray(int array[2][5]) {
	for (int i = 0; i < 2; i++) {
		printf("Passagers in train %i \n", i + 1);
		for (int j = 0; j < 5; j++) {
			printf("Passagers in station %i: ", j + 1);
			scanf_s("%i", &array[i][j]);
		}
	}
}

int minPassagers(int array[2][5]) {
	int min = array[0][0], index = 0;

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 5; j++) {
			if (min > array[i][j]) {
				min = array[i][j];
			}
		}
	}

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 5; j++) {
			if (min == array[i][j]) {
				index = j + 1;
			}
		}
	}

	return index;
}

void main() {
    int array[2][5];
    inputArray(array);

	int result = minPassagers(array);
    printf("%i", result);
}