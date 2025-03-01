#include <stdio.h>
void main(void) {
	int krai, br = 0; 
	printf("Vavedete kraja na intervala n = ");
	scanf_s("%i", &krai);
	for (int i = 1; i < krai; i++) {
		if (i % 6 == 0) {
			printf("%i \n", i);
			br++;
		}
	}
	printf("Chislata kratni na 6 v intervala ot 1 do %i sa %i", krai, br);
}