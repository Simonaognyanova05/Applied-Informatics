#include <stdio.h>

void main() {
    int patnici[2][6]; 
    int obshtoPatnici = 0; 

    for (int vlak = 0; vlak < 2; vlak++) {
        printf("Vlak %i:\n", vlak + 1);
        for (int gara = 0; gara < 6; gara++) {
            printf("Broi patnici na gara %i: ", gara + 1);
            scanf_s("%i", &patnici[vlak][gara]);
            obshtoPatnici += patnici[vlak][gara];
        }
    }

    int sredno = obshtoPatnici / (2 * 6);

    printf("Srednoaritmetichen broi patnici: %i \n", sredno);
}
