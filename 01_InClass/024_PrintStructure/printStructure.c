#include <stdio.h>
#include <stdlib.h>

#define MAX_NAME_LENGTH 50

struct Student
{
	char name[MAX_NAME_LENGTH];
	int age;
};

// function prototypes
void printStudentPassByValue( struct Student inputStudent);
void printStudentPassByReference( struct Student *inputStudent);


int main( int argc, char *argv[])
{

	struct Student student1; //instanciatea Student
	
	printf("Enter name: ");
	fgets(student1.name, MAX_NAME_LENGTH, stdin);
	
	printf("Enter age: ");
	scanf("%d", &student1.age); 

	printStudentPassByValue( student1 ); // pass by value
	printStudentPassByReference( &student1 ); // pass by reference

	printf("Name original Student: %s", student1.name);
	printf("\nAge original Student: %d\n", student1age);
	return EXIT_SUCCESS;
}

void printStudentPassByValue( struct Student inputStudent)
{
	printf("\nstudent information (by value):\n");
	printf("  -------------------------------\n");
	printf("Name: %s", inputStudent.name);
	printf("\nAge: %d\n", inputStudent.age);
	inputStudent.age++;
}

void printStudentPassByReference( struct Student *inputStudent)
{
	printf("\nstudent information (by reference):\n");
	printf("  -----------------------------------\n");
	printf("Name: %s", inputStudent->name);
	printf("\nAge: %d\n", inputStudent->age);
	inputStudent->age++;
}

