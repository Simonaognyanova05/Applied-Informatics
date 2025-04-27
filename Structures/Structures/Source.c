#include <stdio.h>

struct Date {
	char day[50];
	char month[50];
	int year;
};
void main() {

	struct Date today = { "Sunday", "April", 2025 }; // First initialization methood
	struct Date tomorrow = { .day = "Monday", .month = "April", .year = 2025}; // Second initialization methood
	struct Date birthday, important;
	birthday = (struct Date) { "09", "06", 2025 }; // Third initialization methood
	important = (struct Date){ "23", "04", 2025 }; // Fourth initialization methhod

	printf("%s - %s - %i \n", today.day, today.month, today.year);
	printf("%s - %s - %i \n", tomorrow.day, tomorrow.month, tomorrow.year);
	printf("%s - %s - %i \n", birthday.day, birthday.month, birthday.year);
	printf("%s - %s - %i \n", important.day, important.month, important.year);



}