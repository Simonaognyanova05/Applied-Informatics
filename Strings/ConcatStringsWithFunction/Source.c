#include <stdio.h>

void concat(char s1[7], char s2[6], char s3[13]) {
	for (int i = 0; i < 7; i++) {
		s3[i] = s1[i];
	}

	for (int i = 0; i < 6; i++) {
		s3[i + 7] = s2[i];
	}

	for (int i = 0; i < 13; i++) {
		printf("%c", s3[i]);
	}
}
void main() {
	char s1[7] = { "Hello, " };
	char s2[6] = { "Simona" };
	char s3[13];
	concat(s1, s2, s3);
}