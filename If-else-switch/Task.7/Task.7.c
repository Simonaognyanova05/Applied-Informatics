#include <stdio.h>
void main(void) {
	char option;
	scanf_s("%c", &option);
	switch (option)
	{
	case 'H':
		printf("Home");
		break;
	case 'N':
		printf("Next");
		break;
	case 'P':
		printf("previous");
		break;
	case 'E':
		printf("Exit");
		break;
	default:
		break;
	}
}