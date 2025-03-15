#include <stdio.h>
void main() {
	//First way for declaration and inizialization
	int matrix[4][5], n;
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 5; j++) {
			scanf_s("%i", &n);
			matrix[i][j] = n;
		}
	}
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 5; j++) {
			printf("%i ", matrix[i][j]);
		}
		printf("\n");
	}

	
	//Second way for declaration and inizialization
	int matrix[2][3] = { 1, 2, 3, 4, 5, 6 };
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%i ", matrix[i][j]);
		}
		printf("\n");
	}

	//Third way for declaration and inizialization
	int matrix[2][3] = { {1, 2, 3}, {4, 5, 6} };
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%i ", matrix[i][j]);
		}
		printf("\n");
	}

	//Fourth way for declaration and inizialization
	int matrix[2][3] = { {1, 2}, {4, 5} };
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%i ", matrix[i][j]);
		}
		printf("\n");
	}

	//Fivth way for inizialization and declaration
	int matrix[2][3] = { [0] [0] = 1, [0][1] = 2, [0][2] = 3}; //In this way to the and
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%i ", matrix[i][j]);
		}
		printf("\n");
	}
}