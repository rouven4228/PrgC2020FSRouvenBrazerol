#include <stdio.h>

int main(void)
{
	int inputValue1 = 0;
	int inputValue2 = 0;

// enter first int
	printf("Enter an int: ");
	scanf("%d", &inputValue1);

// enter second int
	printf("Enter an int to compare: ");
	scanf("%d", &inputValue2);

// compare values
	if(inputValue1 >= inputValue2)
	{
		printf("%d is bigger or equal to %d\n", inputValue1, inputValue2);
	}
	else
	{
		printf("%d is less than %d\n", inputValue1, inputValue2);
	}

	return 0;
}
