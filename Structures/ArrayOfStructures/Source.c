#include <stdio.h>

struct Book {
	char title[50];
	int year;
};

void main() {
	struct Book books[3] = { {"Harry Potter 1", 2005}, {"Harry Potter 2", 2008} , {"Harry Potter 3", 2009} }; // First way
	struct Book books1[3] = { "Harry Potter 1", 2005,"Harry Potter 2", 2008,"Harry Potter 3", 2009 }; // Second way
	struct Book books2[3] = { [1] = {"Harry Potter 1", 2005,}}; // Third way
	struct Book books3[3] = { [1].title = "Harry Potter 1" }; // Fourth way


	for (int i = 0; i < 3; i++)
	{
		printf("%s - %i \n", books1[i].title, books1[i].year);
	}
	printf("%s - %i \n", books2[1].title, books1[1].year);
	printf("%s - %i \n", books3[1].title, books3[1].year);

}