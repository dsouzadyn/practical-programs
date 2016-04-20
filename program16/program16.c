/*
*
*	Program to check if string is palindrome.
*
*/

#include <stdio.h>
#include <string.h>

// Uncomment the line below if executing on Windows.
//#include <conio.h>

int main()
{
	/*
	*	Declare variable to store the string.
	*/
	char s[32];

	/*
	*	Declare a variable to store the string length.
	*/
	int length;

	/*
	*	Declare a variable to be used for checking for a palindrome.
	*	0 means a palindrome. Anything else means not a palindrome.
	*/
	int c = 0;

	/*
	*	Declare variables to store the counts.
	*/
	int i, j;

	/*
	*	Ask the user to input a string.
	*/
	printf("Enter a string: ");
	scanf("%s", s);

	/*
	*	Assign the length of the string to the 'length' variable.
	*/
	length = strlen(s);

	/*
	*	Check if the string is a palindrome or not.
	*/
	for(i = 0; i < length/2; i++)
	{
		if(s[i] != s[length-1-i])
		{
			c = -1;
			break;
		}
	}
	if (c != -1)
	{
		printf("%s is a palindrome.\n", s);
	}
	else
	{
		printf("%s is not a palindrome.\n", s);
	}

	// Uncomment the line below if compiling on Windows.
	//getch();

	return 0;
}