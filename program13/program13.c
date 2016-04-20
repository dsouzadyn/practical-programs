/*
*
*	Program to add diagonal elements of a matrix.
*
*/

#include <stdio.h>

// Uncomment the line below if executing on Windows.
//#include <conio.h>

int main()
{
	/*
	*	Declare variable to store order of matrix.
	*/
	int n;
	
	/*
	*	Declare empty matrix.
	*/
	int matrix[10][10];

	/*
	*	Declare variable to store sum of diagonal elements.
	*	Inititalised to 0.
	*/
	int answer = 0;

	/*
	*	Declare variables to store counts.
	*/
	int i, j;

	/*
	*	Ask the user to input the order of matrix.
	*	We assume it's a square matrix.
	*/
	printf("Enter order of matrix: ");
	scanf("%d", &n);

	/*
	*	Ask user to input the elements of the matrix.
	*/
	printf("Enter the elements:\n");
	for(i = 0; i < n; i++)
	{
		for(j = 0; j < n; j++)
		{
			scanf("%d", &matrix[i][j]);
		}
	}

	/*
	*	Add the diagonal elements.
	*/
	for(i = 0; i < n; i++)
	{
		answer += matrix[i][i];
	}

	/*
	*	Print the answer.
	*/
	printf("Sum of diagonal elements: %d\n", answer);
	
	// Uncomment the line below if compiling on Windows.
	//getch();

	return 0;
}