#include <stdio.h>
#include <stdlib.h>

/*
	This code takes an argument from user. If that's number, the code will tell each number if it is even number or not.
	For example,

	user> ./even_odd "2345"
		2: Even number
		3: Odd number
		4: Even number
		5: Odd number

	user> ./even_odd "haha"
		This is not a number.

	user> ./even_odd ""
		Empty value!
*/

/*
	Even or odd number decider
*/
void even_odd(char number_char)
{
	int number = atoi(&number_char); //Convert char to integer


	if (number % 2 == 0)
	{
		printf("%d: Even number\n", number);
	}
	else
	{
		printf("%d: Odd number\n", number);
	}
}

int main(int argc, char *argv[])
{
	char *str = argv[1]; //This is going to take an argument after the executable file.
	int count = 0;

	if (*str == '\0')
	{
		printf("Empty value!\n");
		return (1);
	}

	while (str[count] != '\0')
	{
		if (str[count] >= '0' && str[count] <= '9')
		{
			even_odd(str[count]); //Even or odd
		}
		else
		{
			printf("This is not a number.\n");
			return (1);
		}
		count++;
	}
	return (0);
}

//*Reminder: This code only take single number, not the number with pairs such as 24, 100, or more.