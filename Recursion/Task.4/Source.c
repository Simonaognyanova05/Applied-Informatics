#include <stdio.h>
int fibbonachiNumbers(int n) {
	if (n <= 1) {
		return n;
	}

	return fibbonachiNumbers(n - 1) + fibbonachiNumbers(n - 2);
}

void main() {
	int n, result;
	printf("Enter an intager: ");
	scanf_s("%i", &n);

	result = fibbonachiNumbers(n);
	printf("Fibbonachi(%i) = %i", n, result);
}