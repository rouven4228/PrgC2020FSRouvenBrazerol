#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define MAX_INPUT_LENGTH 50


int main( int argc, char *argv[])
{
	char inputString[MAX_INPUT_LENGTH];
	char *pCurrentChar = NULL;	
	int countVowels = 0, countConsonants =0;

	printf("\n\nCount the number of vowels and consonants in your string: \n");
	printf(    "---------------------------------------------------------\n");
	printf("Input a string(max. %d): ",MAX_INPUT_LENGTH);
	
	fgets( inputString, MAX_INPUT_LENGTH, stdin);

	pCurrentChar = inputString;	//set pointer to first element

	while( *pCurrentChar != '\0' )
	{
		printf("0x%x\n", *pCurrentChar);
		
		char temp = toupper(*pCurrentChar);
		if( temp == 'A' || temp == 'E' || temp == 'i' || temp == 'O' || temp == 'U')
		{
			countVowels++;
		}
		else
		{
			// 1. ignore whitespace
			if(!isspace(temp) )
			{
				countConsonants++;
			}
		}
		pCurrentChar++; // increase pointer to advance to next element in array
	}
	printf("Number of vowels: %d, Number of Consonants: %d\n", countVowels, countConsonants); 	

	return EXIT_SUCCESS;
}
