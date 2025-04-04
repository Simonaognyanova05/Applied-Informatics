#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool isPrimeRecursive(int n, int divisor) {
    if (n <= 1) {
        return false; 
    }
    if (divisor > sqrt(n)) {
        return true;
    }
    if (n % divisor == 0) {
        return false; 
    }
    return isPrimeRecursive(n, divisor + 1); 
}

int main() {
    int number;
    printf("Enter a number: ");
    scanf_s("%d", &number);
    if (isPrimeRecursive(number, 2)) {
        printf("%d is prime.\n", number);
    }
    else {
        printf("%d is not prime.\n", number);
    }
    return 0;
}
