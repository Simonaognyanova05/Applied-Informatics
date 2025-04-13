#include <stdio.h>

void main() {
	int i1, i2, *p1, *p2;
	i1 = 8;
	p1 = &i1;
	i2 = *p1 / 4 + 15;
	p2 = p1;
	printf("%i, %i, %i, %i", i1, i2, *p1, *p2);
}