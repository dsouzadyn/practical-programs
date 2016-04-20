/*
*
*	Program to sort array of numbers in ascending and descending order.
*
*/

#include <stdio.h>

// Uncomment the line below if executing on Windows.
//#include <conio.h>

int main()
{
	/*
	*	Declare array of numbers to be sorted.
	*/
	int ar[] = { 2, 1, 4, 0, 6, 3};
	
	/*
	*	Declare variables to store the counts.
	*/
	int i, j;

	/*
	*	Declare a temporary variable to store value while swapping.
	*/
	int temp;

	/*
	*	Print the array before sorting
	*/
	printf("Array before sorting: \n");
	for(i = 0; i < 6; i++)
	{
		printf("%d\n", ar[i]);
	}

	/*
	*	Sort the array in ascending order.
	*/
	for(i = 0; i < 6; i++)
	{
		for(j = i+1; j < 6; j++)
		{
			if(ar[j] < ar[i])
			{
				temp = ar[i];
				ar[i] = ar[j];
				ar[j] = temp;
			}
		}
	}

	/*
	*	Print the sorted array.
	*/
	printf("Array sorted in ascending order: \n");
	for(i = 0; i < 6; i++)
	{
		printf("%d\n", ar[i]);
	}

	/*
	*	Sort the array in descending order.
	*/
	for(i = 0; i < 6; i++)
	{
		for(j = i + 1; j < 6; j++)
		{
			if(ar[j] > ar[i])
			{
				temp = ar[i];
				ar[i] = ar[j];
				ar[j] = temp;
			}
		}
	}

	/*
	*	Print the sorted array.
	*/
	printf("Array sorted in descending order: \n");
	for(i = 0; i < 6; i++)
	{
		printf("%d\n", ar[i]);
	}

	// Uncomment the line below if compiling on Windows.
	//getch();

	return 0;
}