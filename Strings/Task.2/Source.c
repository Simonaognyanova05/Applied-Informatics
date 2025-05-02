#include <stdio.h>
#include <string.h>

void printString(char string[]) {
	printf("%s", string);
}

void main() {
	char string[100];
	scanf_s("%s", string, 100);

	printString(string);
}