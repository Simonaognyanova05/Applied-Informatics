#include <stdio.h>

struct Date {
	int day;
	int mounth;
	int year;
};
void main() {
	struct Date today, tomorrow;

	printf("Input today date: ");
	scanf_s("%i", &today.day);
	printf("Input today mounth: ");
	scanf_s("%i", &today.mounth);
	printf("Input today year: ");
	scanf_s("%i", &today.year);

	tomorrow.day = today.day + 1;
	tomorrow.mounth = today.mounth;
	tomorrow.year = today.year;

	printf("Tomorrow date: %i.%i.%i", tomorrow.day, tomorrow.mounth, tomorrow.year);
}