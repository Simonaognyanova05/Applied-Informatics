#include <stdio.h>

void sort(int a[], int n)
{
    int i, j, temp;
    for (i = 0; i < n - 1; ++i)
    {
        for (j = i + 1; j < n; ++j)
        {
            if (a[i] > a[j]) {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }       
    }
}
void main() {
    printf("Zadanie: Da se sastavi blokova shema na algoritam i da se napishe programa za obedinqvane na 2 masiwa A[8] i B[8]. Elementite na polucheniq masiv C[12] da se sortirat i otpechatat vav vazhodyasht red. \n");
    printf("Simona Ognyanova, 471224015 \n \n");
    int A[4], B[8], C[12];

    printf("Enter the elements of the first array: \n");
    for (int i = 0; i < 4; i++) {
        scanf_s("%i", &A[i]);
    }

    printf("Enter the elements of the second array: \n");
    for (int i = 0; i < 8; i++) {
        scanf_s("%i", &B[i]);
    }

    for (int i = 0; i < 4; i++) {
        C[i] = A[i];
    }

    for (int i = 0; i < 8; i++) {
        C[4 + i] = B[i];
    }

    sort(C, 12);

    for (int i = 0; i < 12; i++) {
        printf("%i ", C[i]);
    }
}
