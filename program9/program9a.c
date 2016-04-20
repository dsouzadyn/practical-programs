/*
*
*	Program to print the followin pattern.
*
*		****
*	 	 ***
*	  	  **
*	   	   *
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
	*	Print the pattern.
	*/
	for(i = 1; i <= 4; i++)
	{
		for(j = 1; j < i; j++)
		{
			printf(" ");
		}
		for(k=i; k<= 4; k++)
		{
			printf("*");
		}
		printf("\n");
	}
	
	// Uncomment the line below if compiling on Windows.
	//getch();

	return 0;
}