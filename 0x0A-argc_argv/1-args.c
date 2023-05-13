#include <stdio.h>
#include "main.h"

/**
 * main -  it prints number of arguments passed to the program
 * @argc: the no of arguments
 * @argv: the array of arguments
 *
 * Return: Always 0 (Successful)
 */

int main(int argc, char *argv[])
{
(void) argv; /*Ignore argv*/
	printf("%d\n", argc - 1);

	return (0);
}
