#include <stdio.h>

void printInfo(char ime[], char prezime[], char familiya[]) {
	printf("\n");
	printf("Ime: %s \n", ime);
	printf("Prezime: %s \n", prezime);
	printf("Familiya: %s \n", familiya);

}
void main() {
	char ime[100], prezime[100], familiya[100];
	printf("Ime: ");
	scanf_s("%s", &ime, 99);
	printf("Prezime: ");
	scanf_s("%s", &prezime, 99);
	printf("Familiya: ");
	scanf_s("%s", &familiya, 99);
	printInfo(ime, prezime, familiya);
}