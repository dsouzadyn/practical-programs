/*
*
*	Program to find percentage of marks in 3 subjects.
*	Also find if candidate has secured first, second, pass class or fail.
*
*/

#include <stdio.h>

// Uncomment the line below if executing on Windows.
//#include <conio.h>

int main()
{
	/*
	*	Declare variables to hold marks.
	*/
	float subject_1, subject_2, subject_3;
	float subject_total;

	/*
	*	Declare a variable to hold the percentage obtained.
	*/
	float percentage;

	/*
	*	Intitialise a variable with total marks.
	*/
	float total = 300;

	/*
	*	Ask user to input the marks of 3 subjects.
	*/
	printf("Enter marks for subject 1: ");
	scanf("%f", &subject_1);
	
	printf("Enter marks for subject 2: ");
	scanf("%f", &subject_2);
	
	printf("Enter marks for subject 3: ");
	scanf("%f", &subject_3);

	/*
	*	Calculate total marks obtained.
	*/
	subject_total = subject_1 + subject_2 + subject_3;

	/*
	*	Calculate percentage obtained.
	*/
	percentage = subject_total / total;

	/*
	*	Determine the class of the candidate.
	*/
	if (percentage >= 0.7)
	{
		printf("Distinction.\n");
	}
	else if (percentage >= 0.6 && percentage < 0.7)
	{
		printf("First class.\n");
	}
	else if (percentage >= 0.5 && percentage < 0.6)
	{
		printf("Second class.\n");
	}
	else if (percentage >= 0.4 && percentage < 0.5)
	{
		printf("Pass class.\n");
	}
	else
	{
		printf("Fail.\n");
	}

	// Uncomment the line below if compiling on Windows.
	//getch();

	return 0;
}