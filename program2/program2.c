/*
*
*	Program to find area of rectangle, circle and triangle.
*
*/

#include <stdio.h>

// Uncomment the line below if executing on Windows.
//#include <conio.h>

int main()
{
	/*
	*	Declare variables for storing areas of each type.
	*/
	float area_rect, area_circ, area_tria;

	/*
	*	Declare necessary data to be given by user.
	*/
	float radius, length, breadth, base, height;

	/*
	*	Ask user to input the radius.
	*/
	printf("Enter radius of circle: ");
	scanf("%f", &radius);

	/*
	*	Ask user to input the length and breadth.
	*/
	printf("Enter length and breadth of rectangle: ");
	scanf("%f %f", &length, &breadth);

	/*
	*	Ask user to input the base and height.
	*/
	printf("Enter base and height of triangle: ");
	scanf("%f %f", &base, &height);

	/*
	*	Compute all the areas.
	*/
	area_rect = length * breadth;
	area_circ = 3.14 * radius * radius;
	area_tria = 0.5 * base * height;

	/*
	*	Print all the answers,
	*	Rounding all answers upto 2 decimal places.
	*/
	printf("Area of rectangle: %0.2f\n", area_rect);
	printf("Area of circle: %0.2f\n", area_circ);
	printf("Area of triangle: %0.2f\n", area_tria);

	// Uncomment the line below if compiling on Windows.
	//getch();

	return 0;
}