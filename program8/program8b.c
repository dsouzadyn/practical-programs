/*
*
*	Program to print the following pattern.
*
*	   	   A
*	  	  AB
*	 	 ABC
*		ABCD
*
*/

#include <stdio.h>

// Uncomment the line below if executing on Windows.
//#include <conio.h>

int main()
{
	/*
	*	Declare variables to store the counts.
	*/
	int i, j, k;

	/*
	*	Declare variable to hold the alphabet.
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
		*	Initialize the alphabet.
		*/
		alpha = 'A';

		for(k = 1; k <= i; k++)
		{
			printf("%c", alpha);
			alpha++;
		}
		printf("\n");
	}

	// Uncomment the line below if compiling on Windows.
	//getch();

	return 0;
}