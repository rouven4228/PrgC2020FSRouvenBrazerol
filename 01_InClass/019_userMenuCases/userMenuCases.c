#include <stdio.h>
#include <stdlib.h>

typedef enum
{
	INVALID = 0,
	PRINTCODERNAME = 1,
	CALCONEPLUSONE,
	EXIT
} MenuSelection;


MenuSelection PrintUserMenu(void);

int main(int argc, char * argv[])
{
	int runMenuPrompt = 1;
	MenuSelection menuSelection = EXIT;
	
	while(runMenuPrompt)
	{
		menuSelection = PrintUserMenu();
		
		switch(menuSelection)
		{
	
		case PRINTCODERNAME:
			printf(" Rouvy B Johnson\n");
			break;
		case CALCONEPLUSONE:
			printf("1 + 1 = 2\n");
			break;
		case EXIT:
			printf("Exiting. Goodbye.\n");
			runMenuPrompt = 0;
			break;
		default:
			printf("Invalid menu selection\n");
			break;
		} // switch(menuSelection)
	}// while(runMenuPrompt)
	return EXIT_SUCCESS;
}


/*	prints the user menu and returns the selected item
 * 	Inputs: None.
 * 	Outputs: int selectedMenuItem
 *  Error behavior: returns zero for all invalid menu item selections
 */	
MenuSelection PrintUserMenu( void ) 
{
	int selectedMenuItem = 0;
	printf("\n------------------------------------\n");
	printf("* * * * Welcome to CoolCode! * * * *\n");
	printf("------------------------------------\n");
	printf("Select from the following options:\n");
	printf("1: Print Coder name\n");
	printf("2: Calculate 1+1\n");
	printf("3: Exit\n");
	printf("-> ");
	scanf("%d", &selectedMenuItem );
	

	if(	selectedMenuItem != 	PRINTCODERNAME
	&& 	selectedMenuItem !=	CALCONEPLUSONE
	&&	selectedMenuItem !=	EXIT)
	{
	selectedMenuItem = INVALID;
	}
	return selectedMenuItem;
}	
