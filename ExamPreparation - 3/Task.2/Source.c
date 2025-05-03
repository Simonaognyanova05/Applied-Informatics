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

void minAndMaxPassagers(int array[2][5]) {
    int maxStation[2], minStation[2];
    int maxPassagers[2], minPassagers[2];

    for (int vlak = 0; vlak < 2; vlak++) {
        maxStation[vlak] = 0;
        minStation[vlak] = 0;
        maxPassagers[vlak] = array[vlak][0];
        minPassagers[vlak] = array[vlak][0];

        for (int gara = 1; gara < 5; gara++) {
            if (array[vlak][gara] > maxPassagers[vlak]) {
                maxPassagers[vlak] = array[vlak][gara];
                maxStation[vlak] = gara;
            }
            if (array[vlak][gara] < minPassagers[vlak]) {
                minPassagers[vlak] = array[vlak][gara];
                minStation[vlak] = gara;
            }
        }
    }

    for (int vlak = 0; vlak < 2; vlak++) {
        printf("Vlak %i:\n", vlak + 1);
        printf("Nai mnogo patnici na gara %i: %i\n", maxStation[vlak] + 1, maxPassagers[vlak]);
        printf("Nai malko patnici na gara %i: %i\n", minStation[vlak] + 1, minPassagers[vlak]);
    }
}

void main() {
    int array[2][5];
    inputArray(array);

    minAndMaxPassagers(array);
}