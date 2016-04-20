/*
*
*	Program to print the following patter.
*
*	   A
*	  ABA
*	 ABCBA
*	ABCDCBA
*
*/

#include <stdio.h>

// Uncomment the line below if executing on Windows.
//#include <conio.h>

int main()
{
	/*
	*	Declare variables to hold the counts.
	*/
	int i, j, k, l;

	/*
	*	Declare variable to hold alphabet.
	*/
	char alpha;

	/*
	*	Print the pattern.
	*/
	for(i = 1; i <= 4; i++)
	{
		for(j = i; j < 4; j++)
		{
			printf(" ");
		}

		/*
		*	Initialise the alphabet.
		*/
		alpha = 'A';
		for(k = 1; k <= i; k++)
		{
			printf("%c", alpha);
			alpha++;
		}
		
		alpha = alpha - 2;
		for(l = 1; l < i; l++)
		{
			printf("%c", alpha);
			alpha--;
		}
		printf("\n");
	}

	// Uncomment the line below if compiling on Windows.
	//getch();

	return 0;
}