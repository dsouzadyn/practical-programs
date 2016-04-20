/*
*
*	Program to determine precentage profit or loss.
*	Cost price an selling price is given.
*
*/

#include <stdio.h>

// Uncomment the line below if executing on Windows.
//#include <conio.h>

int main()
{
	/*
	*	Declare variables to store the selling and cost price.
	*/
	float selling_price, cost_price;

	/*
	*	Declare variables for storing profit and loss.
	*/
	float profit, loss;
	
	/*
	*	Declare variables for storing profit and loss percentage.
	*/
	float profit_pr, loss_pr;

	/*
	*	Ask the user to enter the cost price.
	*/
	printf("Enter cost price: ");
	scanf("%f", &cost_price);

	/*
	*	Ask the user to enter the selling price.
	*/
	printf("Enter selling price: ");
	scanf("%f", &selling_price);

	/*
	*	Check for profit and loss
	*/
	if (selling_price > cost_price)
	{
		/*
		*	Calculate profit.
		*/
		profit = selling_price - cost_price;
		
		/*
		*	Calculate profit percentage.
		*/
		profit_pr = ( profit / cost_price ) * 100;

		/*
		*	Print them.
		*/
		printf("Profit: %0.2f Profit Precentage: %0.2f\n", profit, profit_pr);
	}
	else
	{
		/*
		*	Calculate loss.
		*/
		loss = cost_price - selling_price;

		/*
		*	Calculate loss percentage.
		*/
		loss_pr = ( loss / cost_price ) * 100;

		/*
		*	Print them.
		*/
		printf("Loss: %0.2f Loss Percentage: %0.2f\n", loss, loss_pr);
	}

	// Uncomment the line below if compiling on Windows.
	//getch();

	return 0;
}