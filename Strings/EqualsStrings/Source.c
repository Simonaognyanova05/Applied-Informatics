#include <stdio.h>
#include <string.h>

void main() {
	char s1[6] = { "Simona" };
	char s2[4] = { "Magi" };

	if (strcmp(s1, s2) == 0) {
		printf("They are queals");
	}
	else {
		printf("They are not equals!");
	}
}