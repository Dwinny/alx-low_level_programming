#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main – this prints the minimum no of coins
 * makes change for an amt of money
 * @argc: the no of arguments
 * @argv: the array of arguments
 *
 * Return: 0 (Successful), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int number, p, result;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	number = atoi(argv[1]);
	result = 0;

	if (number < 0)
	{
		printf("0\n");
		return (0);
	}

	for (p = 0; p < 5 && number >= 0; p++)
	{
		while (number >= coins[p])
		{
			result++;
			number -= coins[p];
		}
	}

	printf("%d\n", result);
	return (0);
}
