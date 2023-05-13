#include <stdio.h>
#include "main.h"

/**
 * main - it prints all the arguments it receives
 * @argc: the no of arguments
 * @argv: the array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int u;

	for (u = 0; u < argc; u++)
	{
		printf("%s\n", argv[u]);
	}

	return (0);
}
