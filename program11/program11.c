/*
*
*	Program to find an element in an array.
*
*/

#include <stdio.h>

// Uncomment the line below if executing on Windows.
//#include <conio.h>

int main()
{
	/*
	*	Declare and initialise an array.
	*/
	int ar[] = {2, 3, 4, 1, 5, 7, 6, 8};

	/*
	*	Declare variables to store the count.
	*/
	int i;

	/*
	*	Declare variable to store the element to be found.
	*/
	int elem;

	/*
	*	Declare variable to store the position at which the element is found.
	*	Initialised to -1.
	*/
	int position = -1;

	/*
	*	Ask the user to input the element to be found.
	*/
	printf("Enter element to be searched: ");
	scanf("%d", &elem);

	/*
	*	Start searching for the element.
	*/
	for(i = 0; i < 8; i++)
	{
		if(elem == ar[i])
		{
			position = i;
			break;
		}
	}

	/*
	*	Check if element is found.
	*	If so, print the position.
	*/
	if (position != -1)
	{
		printf("Element %d found at position %d\n", elem, position);
	}
	else
	{
		printf("Sorry, the element you were looking for could not be found.\n");
	}

	// Uncomment the line below if compiling on Windows.
	//getch();

	return 0;
}