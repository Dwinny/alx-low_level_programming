#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - Prints strings, then followed by new line.
 * @separator: The string to be printed btw strings.
 * @n: The no of strings passed to the function.
 * @...: A var no of strings to be printed.
 *
 * Description: If separator is NULL, it is not printed.
 *              If one of the strings if NULL, (nil) is printed instead.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	char *str;
	unsigned int x;

	va_start(strings, n);
	for (x = 0; x < n; x++)
	{
		str = va_arg(strings, char *);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		if (x != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(strings);
}
