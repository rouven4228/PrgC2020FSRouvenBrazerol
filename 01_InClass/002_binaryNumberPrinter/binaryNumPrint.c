#include <stdio.h>

/* binary number printer */


int main(void)
{
	// "programmer input"
	int decimalNumber = 13;
	
	printf("initial Decimal: %d\n", decimalNumber);
	printf("Binary Form (LSB to MSB): 0b");
	
	// some variables needed for calculation
	int divisionResult = decimalNumber;
	int remainder = 0;
	

	
	while(divisionResult > 0)
	{
		remainder = divisionResult % 2;
		printf("%d", remainder);
		divisionResult = divisionResult / 2;

	}
	printf("\n");
	return 0;

}
