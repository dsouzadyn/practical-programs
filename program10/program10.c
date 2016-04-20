/*
*
*	Program to find maximum and minimum in array.	
*
*/

#include <stdio.h>

// Uncomment the line below if executing on Windows.
//#include <conio.h>

int main()
{
	/*
	*	Declare variable to store the counts.
	*/
	int i, j;

	/*
	*	Declare and initialize an array.
	*/
	int ar[] = {3, 0, -1, 2, 5, 99};

	/*
	*	Declare variables to store max and min value.
	*/
	int max, min;

	/*
	*	Initialise both to the first element of the array;
	*/
	max = ar[0];
	min = ar[0];

	/*
	*	Find the maximum value in the array.
	*/
	for(i = 1; i < 6; i++)
	{
		if (ar[i] > max)
		{
			max = ar[i];
		}
	}

	/*
	*	Find the minimum value in the array.
	*/
	for(j = 1; j < 6; j++)
	{
		if(ar[j] < min)
		{
			min = ar[j];
		}
	}

	/*
	*	Print the maximum value.
	*/
	printf("Maximum: %d\n", max);

	/*
	*	Print the minimum value.
	*/
	printf("Minimum: %d\n", min);

	// Uncomment the line below if compiling on Windows.
	//getch();

	return 0;
}