#include <stdio.h>
#include <string.h>

void printStringLenght(char string[]) {
	printf("%s \n", string);
	printf("%i \n", strlen(string));
}
void main() {
	char string[64];
	scanf_s("%s", string, 64);
	printStringLenght(string);
}