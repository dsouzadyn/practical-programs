/*
*
*	Program to print number in words.
*
*/

#include <stdio.h>

// Uncomment the line below if executing on Windows.
//#include <conio.h>

int main()
{
	/*
	*	Declare variable to store number.
	*/
	char n;

	/*
	*	Ask the user to input a number.
	*/
	printf("Enter a number: ");
	scanf("%c", &n);

	/*
	*	Print the number in words.
	*/
	switch (n)
	{
		case '0': printf("ZERO\n"); break;
		case '1': printf("ONE\n"); break;
		case '2': printf("TWO\n"); break;
		case '3': printf("THREE\n"); break;
		case '4': printf("FOUR\n"); break;
		case '5': printf("FIVE\n"); break;
		case '6': printf("SIX\n"); break;
		case '7': printf("SEVEN\n"); break;
		case '8': printf("EIGHT\n"); break;
		case '9': printf("NINE\n"); break;
		default: printf("Not a number.\n"); break;
	}
	
	// Uncomment the line below if compiling on Windows.
	//getch();

	return 0;
}