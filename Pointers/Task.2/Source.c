#include <stdio.h>

void main() {
	int a, *p1, **p2;
	a = 20;
	p1 = &a;
	p2 = &p1;
	printf("Stoinostta na promenlivata a = %i \n", a);
	printf("Stoinostta na adres *p1 = %i \n", *p1);
	printf("Stoinostta na adres *p2 = %i \n", **p2);
}