#include <stdio.h>
void main(void) {
	int n;
	scanf_s("%i", &n);
	switch (n)
	{
	case 1:
		printf("ponedelnik \n");
		break;
	case 2:
		printf("vtornik \n");
		break;
	case 3:
		printf("srqda \n");
		break;
	case 4:
		printf("chetvartak \n");
		break;
	case 5:
		printf("petak \n");
		break;
	case 6:
		printf("sabota \n");
		break;
	case 7:
		printf("nedelq \n");
		break;
	default:
		printf("Nqma takav den!");
		break;
	}
}