#include <stdio.h>
void main() {
	int n;

	printf("Vavedete chisloto: ");
	scanf_s("%i", &n);

	n % 2 == 0 ? printf("Chetno") : printf("Nechetno");
}