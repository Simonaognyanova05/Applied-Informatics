#include <stdio.h>

double calculateTime(double timeArr[3][3]) {
    double time = 0.0;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            time += timeArr[i][j];
        }
    }

    return time;
}

void main() {
    double timeArr[3][3];

    printf("Vavedete vremeto za wsyaka danna platka vav vseki ceh:\n");
    for (int i = 0; i < 3; i++) {
        printf("Danna platka %d:\n", i + 1);
        for (int j = 0; j < 3; j++) {
            printf("Ceh %d: ", j + 1);
            scanf_s("%lf", &timeArr[i][j]);
        }
    }

    double totalTime = calculateTime(timeArr);

    printf("\nObshtoto vreme, neobhodimo za proizvodstvo: %.2f chasa\n", totalTime);
}
