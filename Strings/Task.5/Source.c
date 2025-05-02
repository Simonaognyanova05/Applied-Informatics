#include <stdio.h>

void concatStrings(char string1[5], char string2[6], char string3[11]) {
	for (int i = 0; i < 5; i++) {
		string3[i] = string1[i];
	}

	for (int i = 0; i < 6; i++) {
		string3[i + 5] = string2[i];
	}

	for (int i = 0; i < 11; i++) {
		printf("%c", string3[i]);
	}
}

void main() {
	char s1[5] = { 'T', 'e', 's', 't', ' ' };
	char s2[6] = { 'w', 'o', 'r', 'k', 's', '.' };
	char s3[11];

	concatStrings(s1, s2, s3);
}