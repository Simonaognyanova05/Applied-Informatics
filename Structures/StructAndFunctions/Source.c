#include <stdio.h>

struct Date {
	int day;
	int month;
	int year;
};

int getTommorowDate(struct Date tommorow) {
	tommorow.day += 1;

	return tommorow.day;
}

void main() {
	struct Date today = { 27, 04, 2024 };

	int tomorrow = getTommorowDate(today);

	printf("%i", tomorrow);
}