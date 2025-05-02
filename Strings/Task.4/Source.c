#include <stdio.h>
#include <string.h>

void printArray(char array[6]) {
	for (int i = 0; i < 6; i++) {
		printf("%c \n", array[i]);
	}
}

void main() {
	char array[6] = { 'H', 'E', 'L', 'L', 'O', '!' };

	printArray(array);
}