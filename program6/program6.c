/*
*
*	Program to determine type of entered character.
*	i.e. Upper case, lower case, digit or special character.
*
*/

#include <stdio.h>

// Uncomment the line below if executing on Windows.
//#include <conio.h>

int main()
{
	/*
	*	Declare a variable to hold a character.
	*/
	char c;

	/*
	*	Ask the user to input a character.
	*/
	printf("Enter a character: ");
	scanf("%c", &c);

	/*
	*	Check for the type of character.
	*/
	if (c >= 'A' && c <= 'Z')
	{
		printf("%c is an uppercase character.\n", c);
	}
	else if (c >= 'a' && c <= 'z')
	{
		printf("%c is a lowercase character.\n", c);
	}
	else if (c >= '0' && c <= '9')
	{
		printf("%c is a digit.\n", c);
	}
	else
	{
		printf("%c is a special character.\n", c);
	}
	
	// Uncomment the line below if compiling on Windows.
	//getch();

	return 0;
}