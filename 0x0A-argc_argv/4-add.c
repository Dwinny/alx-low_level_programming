#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * checks_numbers - check – if string there are digit
 * @str: array string
 *
 * Return: Always 0 (Successful)
 */
int check_number(char *str)
{
	/*Declaring variables*/
	unsigned int count;

	count = 0;
	while (count < strlen(str)) /*count string*/

	{
		if (!isdigit(str[count])) /*checks if string there are digits*/
		{
			return (0);
		}

		count++;
	}
	return (1);
}

/**
 * main - it Prints the name of the program
 * @argc: it Counts arguments
 * @argv: the Arguments
 *
 * Return: Always 0 (Successful)
 */

int main(int argc, char *argv[])

{

	/*Declaring variables*/
	int count;
	int string_to_integer;
	int s = 0;

	count = 1;
	while (count < argc) /*it Goes through the whole array*/
	{
		if (check_num(argv[count]))

		{
			string_to_integer = atoi(argv[count]); /*ATOI- converts string to integer*/
			s += string_to_integer;
		}

		/*the Condition if one of the no contains symbols that are not digits*/
		else
		{
			printf("Error\n");
			return (1);
		}

		count++;
	}

	printf("%d\n", sum); /*then print the sum*/

	return (0);
}
