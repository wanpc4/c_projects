#include <stdio.h>

/*
	This code will print the value of number inserted by user and it will increment or decrement based on user's decision.
*/

//Functions declarations:
void displayNumber(int number_to_display);
int numberInput(int number);
void increase(int theChosenNumber);
void decrease(int theChosenNumber);

void displayNumber(int number_to_display)
{
	printf("The number: %d", number_to_display);
	printf("\nDo you want to make it:");
	printf("\n1) Increase.");
	printf("\n2) Decrease.");
	printf("\nChoose the number and type enter... ");
}

int numberInput(int number)
{
	int selection, result = 0;
	displayNumber(number); //To display the number
	scanf("%d", &selection);
	if(selection == 1)
	{
		increase(number);
	} 
	else if (selection == 2)
	{
		decrease(number);
	}
	else
	{
		printf("\nInvalid option! See you again...\n");
		return (1);
	}
	printf("\n");
	return (number);
}

void increase(int theChosenNumber)
{
	int i = 0;
	while (i <= theChosenNumber)
	{
		printf("%d ", i);
		i++;
	}
}

void decrease(int theChosenNumber)
{
	int j = 0;
	while (j <= theChosenNumber)
	{
		printf("%d ", theChosenNumber);
		theChosenNumber--;
	}
}

int main()
{
	//Variable declaration:
	int num;
	printf("Enter number: ");
	scanf("%d", &num);
	/*
		Call the function and put the value in it.
	*/
	numberInput(num); 
	return (0);
}