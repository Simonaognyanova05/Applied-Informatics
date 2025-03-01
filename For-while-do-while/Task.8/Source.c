#include <stdio.h>
void main(void) {
	char command;

	scanf_s("%c", &command);

	switch (command)
	{
	case 'A':
		printf("Absolutna stoinost");
		break;
	case 'S':
		printf("Sin");
		break;
	case 'C':
		printf("Cos");
		break;
	case 'I':
		break;
	default:
		printf("Nyama takav variant!");
     	break;
	}
}