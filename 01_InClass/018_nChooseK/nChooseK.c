#include <stdio.h>
#include <stdlib.h>

long factorial(int x);
int nChooseK(int n, int k);

int main( int argc, char* argv[] )
{
	int n = 0, k = 0, waitOnValidInput = 1;
		while(waitOnValidInput)
		{
			printf("Enter n: ");
		scanf("%d", &n);
		printf("Enter k: ");
		scanf("%d", &k);
			if(n > 0 && k > 0 && n > k)
			{
				printf("nChooseK %d and %d = %ld\n", n,k, nChooseK(n,k));
					break;
			}
			else
			{
				printf("Invalid input. Try again.\n");
			}
		}
		return EXIT_SUCCESS;
	
}

int nChooseK(int n, int k)
{
	long result = 0;
	result = factorial(n)/(factorial(k) * factorial(n-k));
	printf("%ld", result);
	return result;
}

// implementation of the factorial function
long  factorial(int x) 
{
    if (x>=1)
        return x*factorial(x-1);
    else
        return 1;
}
