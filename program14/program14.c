/*
*
*	Program to add two matrices.
*
*/

#include <stdio.h>

// Uncomment the line below if executing on Windows.
//#include <conio.h>

int main()
{
	/*
	*	Declare variable to store the order.
	*/
	int n;

	/*
	*	Declare two blank matrices for input.
	*/
	int a[10][10];
	int b[10][10];

	/*
	*	Declare a blank matrix to store the answer.
	*/
	int answer[10][10];

	/*
	*	Declaure variable to store the counts.
	*/
	int i,j;

	/*
	*	Ask the user to input the order.
	*/
	printf("Enter order of the matrix: ");
	scanf("%d", &n);

	/*
	*	Ask the user to input the elements of the first matrix.
	*/
	printf("Enter elements of matrix 1: \n");
	for(i = 0; i < n; i++)
	{
		for(j = 0; j < n; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}

	/*
	*	Ask the user to input the elements of the second matrix.
	*/
	printf("Enter elements of matrix 2: \n");
	for(i = 0; i < n; i++)
	{
		for(j = 0; j < n; j++)
		{
			scanf("%d", &b[i][j]);
		}
	}
	
	/*
	*	Print both the matrices.
	*/
	printf("Martix 1:\n");
	for(i = 0; i < n; i++)
	{
		for(j = 0; j < n; j++)
		{
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}

	printf("Matrix 2:\n");
	for(i = 0; i < n; i++)
	{
		for(j = 0; j < n; j++)
		{
			printf("%d ", b[i][j]);
		}
		printf("\n");
	}

	/*
	*	Add the two matrices.
	*	Store the sum in the 'answer' matrix.
	*/
	for(i = 0; i < n; i++)
	{
		for(j = 0; j < n; j++)
		{
			answer[i][j] = a[i][j] + b[i][j];
		}
	}

	/*
	*	Print the answer.
	*/
	printf("Sum of the 2 matrices is:\n");
	for(i = 0; i < n; i++)
	{
		for(j = 0; j < n; j++)
		{
			printf("%d ", answer[i][j]);
		}
		printf("\n");
	}

	// Uncomment the line below if compiling on Windows.
	//getch();

	return 0;
}