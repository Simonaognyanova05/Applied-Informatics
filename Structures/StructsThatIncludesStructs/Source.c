#include <stdio.h>

struct Address {
	char city[50];
	char location[50];
};
struct Person {
	char name[50];
	int ages;
	struct Address address;
};


void main() {
	struct Person p1 = { "Simona", 20, {"Sofia", "Blok 14"} };

	printf("%s, %i, %s, %s", p1.name, p1.ages, p1.address.city, p1.address.location);
}