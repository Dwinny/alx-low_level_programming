#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - Returns the sum of all of the parameters.
 * @n: The no of parameters passed to function.
 * @...: A variable no of parameters to calculate sum of.
 *
 * Return: If n == 0 - 0.
 *         Otherwise - sum of all parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int y, sum = 0;

	va_start(ap, n);
	for (y = 0; y < n; y++)
		sum += va_arg(ap, int);
	va_end(ap);
	return (sum);
}
