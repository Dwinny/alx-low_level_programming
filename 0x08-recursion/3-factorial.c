#include "main.h"

/**
 * factorial - returns the factorial of numbers
 * @n: numbers used to return the factorial from
 *
 * Return:the factorial of n
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
