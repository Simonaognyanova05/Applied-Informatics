#include <stdio.h>
int findFactorial(int n) {
	if (n == 0) {
		return 1;
	}

	return n * findFactorial(n - 1);
}

void main() {
	int n, result;
	printf("Enter a positive integer: ");
	scanf_s("%i", &n);
	result = findFactorial(n);
	printf("The factorial of %i is %i", n, result);
}