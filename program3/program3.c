/*
*
*	Program to compare to numbers.
*	Also determine if odd or even.
*
*/

#include <stdio.h>

// Uncomment the line below if executing on Windows.
//#include <conio.h>

int main()
{
	/*
	*	Declare two variables to store the numbers.
	*/
	int a,b;
	
	/*
	*	Ask the user to input two numbers.
	*/
	printf("Enter two integers: ");
	scanf("%d %d", &a, &b);

	/*
	*	Compare the numbers.
	*/
	if (a > b)
	{
		printf("%d is greater than %d\n", a, b);
	}
	else if (b > a)
	{
		printf("%d is smaller than %d\n", a, b);
	}
	else
	{
		printf("%d is equal to %d\n", a, b);
	}

	/*
	*	Check if numbers are odd or even.
	*/
	if (a % 2 == 0)
	{
		printf("%d is an even number.\n", a);
	}
	else
	{
		printf("%d is an odd number.\n", b);
	}

	if (b % 2 == 0)
	{
		printf("%d is an even number.\n", a);
	}
	else
	{
		printf("%d is an odd number.\n", b);
	}

	// Uncomment the line below if compiling on Windows.
	//getch();

	return 0;
}