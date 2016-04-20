/*
*
*	Calculator program implementation using switch-case.
*
*/

#include <stdio.h>

// Uncomment the line below if executing on Windows.
//#include <conio.h>

int main()
{
	/*
	*	Declare variable for choice of operation.
	*/
	char choice;
	/*
	*	Declare variables to store the numbers to be operated on.
	*/
	float a, b;

	/*
	*	Declare variable to store the answer.
	*/
	float answer;

	/*
	*	Present the user with a menu.
	*/
	printf("===============\n");
	printf("  Enter Choice\n");
	printf("===============\n");
	printf("1. +\n");
	printf("1. -\n");
	printf("1. *\n");
	printf("1. /\n");
	printf("===============\n");

	/*
	*	Ask the user to input the operation to be performed.
	*/
	printf("Choice: ");
	scanf("%c", &choice);

	/*
	*	Ask the user to input the two numbers to be operated on.
	*/
	printf("Enter the 2 numbers: ");
	scanf("%f %f", &a, &b);

	/*
	*	Evaluate the choice and perform corresponding operation.
	*/
	switch (choice)
	{
		case '+':
		answer = a + b;
		printf("%0.2f\n", answer);
		break;
		case '-':
		answer = a - b;
		printf("%0.2f\n", answer);
		break;
		case '*':
		answer = a * b;
		printf("%0.2f\n", answer);
		break;
		case '/':
		if (b == 0)
			printf("Infinity.\n");
		else
		{
			answer = a / b;
			printf("%0.2f\n", answer);
		}
		break;
		default:
		printf("Invalid choice.\n");
		break;
	}

	// Uncomment the line below if compiling on Windows.
	//getch();

	return 0;
}