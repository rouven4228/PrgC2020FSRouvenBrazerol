#include <stdio.h>

int main(void)
{
	short largeShort = 32760;
	largeShort = largeShort + 12345;

	printf("Die Zahl ist: %d\n", largeShort);

	int numerator = 19, denominator = 5, result;
	result = numerator/denominator;

	printf("Die Zahl ist %d\n", result);

	float e = 2.718281828;
	printf("Die Zahl ist %lf\n", ++e);
	printf("Die Zahl ist %lf\n", --e);

	return 0;
}

