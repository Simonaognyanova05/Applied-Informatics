#include <stdio.h>

void getInfo() {
    printf("Zadanie: Da se sastavi blokova shema na algoritam i da se napishe programa za obedinqvane na 2 masiwa A[8] i B[8]. Elementite na polucheniq masiv C[12] da se sortirat i otpechatat vav vazhodyasht red. \n");
    printf("Simona Ognyanova, 471224015 \n \n");
}

void initArray(int array[], int n) {
    for (int i = 0; i < n; i++) {
        scanf_s("%i", &array[i]);
    }
}
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

void printArray(int array[]) {
    printf("Sorted array: ");
    for (int i = 0; i < 12; i++) {
        printf("%i ", array[i]);
    }
}
void main() {
    getInfo();
    int A[4], B[8], C[12];

    printf("Enter the elements of the first array: \n");
    initArray(A, 4);

    printf("Enter the elements of the second array: \n");
    initArray(B, 8);

    for (int i = 0; i < 4; i++) {
        C[i] = A[i];
    }

    for (int i = 0; i < 8; i++) {
        C[4 + i] = B[i];
    }

    sort(C, 12);
    printArray(C);
}
