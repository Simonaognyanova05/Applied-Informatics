#include <stdio.h>
int findSum(int n) {
	if (n == 0) {
		return 0;
	}

	return n + findSum(n - 1);
}

void main() {
	int n, result;
	printf("Enter a positive integer: ");
	scanf_s("%i", &n);
	result = findSum(n);
	printf("sum = %i", result);
}