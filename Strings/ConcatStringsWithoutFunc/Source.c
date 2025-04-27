#include <stdio.h>

void main() {
	char s1[5] = { "Hello" };
	char s2[6] = { "Simona" };

	char s3[11];

	for (int i = 0; i < 5; i++) {
		s3[i] = s1[i];
	}

	for (int i = 0; i < 6; i++) {
		s3[i + 5] = s2[i];
	}

	for (int i = 0; i < 11; i++) {
		printf("%c", s3[i]);
	}

}