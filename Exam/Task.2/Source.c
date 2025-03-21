#include <stdio.h>

void main() {
    int patnici[2][5]; 
    int maxGara[2], minGara[2];
    int maxPatnici[2], minPatnici[2]; 

    for (int vlak = 0; vlak < 2; vlak++) {
        printf("Vlak % i:\n", vlak + 1);
        for (int gara = 0; gara < 5; gara++) {
            printf("Broi panici na gara %i: ", gara + 1);
            scanf_s("%i", &patnici[vlak][gara]);
        }
    }

    for (int vlak = 0; vlak < 2; vlak++) {
        maxGara[vlak] = 0;
        minGara[vlak] = 0;
        maxPatnici[vlak] = patnici[vlak][0];
        minPatnici[vlak] = patnici[vlak][0];

        for (int gara = 1; gara < 5; gara++) {
            if (patnici[vlak][gara] > maxPatnici[vlak]) {
                maxPatnici[vlak] = patnici[vlak][gara];
                maxGara[vlak] = gara;
            }
            if (patnici[vlak][gara] < minPatnici[vlak]) {
                minPatnici[vlak] = patnici[vlak][gara];
                minGara[vlak] = gara;
            }
        }
    }

    for (int vlak = 0; vlak < 2; vlak++) {
        printf("Vlak %i:\n", vlak + 1);
        printf("Nai mnogo patnici na gara %i: %i\n", maxGara[vlak] + 1, maxPatnici[vlak]);
        printf("Nai malko patnici na gara %i: %i\n", minGara[vlak] + 1, minPatnici[vlak]);
    }
}
