/*
*
*	Program to multiply 2 matrices together.
*	I have no idea why I find this challenging. :D
*
*/

#include <stdio.h>

// Uncomment the line below if executing on Windows.
//#include <conio.h>

int main()
{
	/*
	*	Declare variables to store number of rows and columns.
	*/
	int row_1, column_1;
	int row_2, column_2;

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
	*	Declare variables to store the counts.
	*/
	int i, j, k;


	/*
	*	Ask the user to input the number of rows and columns for the 1st matrix.
	*/
	printf("Enter number of rows and columns in 1st matrix: ");
	scanf("%d %d", &row_1, &column_1);

	/*
	*	Ask the user to input the number of rows and columns for the 2nd matrix.
	*/
	printf("Enter number of rows and columns in 2nd matrx: ");
	scanf("%d %d", &row_2, &column_2);

	/*
	*	Check if multiplication is possible.
	*	If it is...JUST DO IT!!
	*/
	if (row_1 != column_2)
	{
		printf("Multiplication not possible.\n");
	}
	else
	{
		/*
		*	Ask user to input the elements of 1st matrix.
		*/
		printf("Enter elements of 1st matrix: \n");
		for(i = 0; i < row_1; i++)
		{
			for(j = 0; j < column_1; j++)
			{
				scanf("%d", &a[i][j]);
			}
		}

		/*
		*	Ask the user to input the elements of 2nd matrix.
		*/
		printf("Enter elements of 2nd matrix: \n");
		for(i = 0; i < row_2; i++)
		{
			for(j = 0; j < column_2; j++)
			{
				scanf("%d", &b[i][j]);
			}
		}

		/*
		*	Print matrix 1.
		*/
		printf("Matrix 1:\n");
		for(i = 0; i < row_1; i++)
		{
			for(j = 0; j < column_1; j++)
			{
				printf("%d ", a[i][j]);
			}
			printf("\n");
		}

		/*
		*	Print matrix 2.
		*/
		printf("Matrix 2:\n");
		for(i = 0; i < row_2; i++)
		{
			for(j = 0; j < column_2; j++)
			{
				printf("%d ", b[i][j]);
			}
			printf("\n");
		}

		/*
		*	Fill the matrix 'answer' with 0's
		* 	For initialisation.
		*/
		for(i = 0; i < 10; i++)
		{
			for(j = 0; j < 10; j++)
			{
				answer[i][j] = 0;
			}
		}
		
		/*
		*	Multiply the two matrices.
		*/
		for(i = 0; i < row_1; i++)
		{
			for(j = 0; j < column_2; j++)
			{
				for(k = 0; k < column_1; k++)
				{
					answer[i][j] += a[i][k] * b[k][j];
				}
			}
		}

		/*
		*	Print the answer.
		*/
		printf("Answer is:\n");
		for(i = 0; i < row_1; i++)
		{
			for(j = 0; j < column_2; j++)
			{
				printf("%d ", answer[i][j]);
			}
			printf("\n");
		}

	}

	// Uncomment the line below if compiling on Windows.
	//getch();

	return 0;
}