#include <stdio.h>
#include "main.h"

/**
 * main – It prints the name of the program
 * @argc: the no of arguments
 * @argv: the array of arguments
 *
 * Return: Always 0 (Successful)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
