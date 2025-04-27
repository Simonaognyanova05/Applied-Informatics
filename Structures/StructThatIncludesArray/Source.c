#include <stdio.h>

struct Student {
	char name[50];
	int ages;
	double grades[4];
};
void main() {
	struct Student s1;

	printf("Name: ");
	scanf_s("%s", &s1.name, 50);
	printf("Age: ");
	scanf_s("%i", &s1.ages);
	printf("Grades: ");
	for (int i = 0; i < 4; i++) {
		scanf_s("%lf", &s1.grades[i]);
	}

	printf("Name: %s, Age: %i, Grades: %lf, %lf, %lf, %lf", s1.name, s1.ages, s1.grades[0], s1.grades[1], s1.grades[2], s1.grades[3]);
}