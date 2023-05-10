#include "main.h"
/**
 * _print_rev_recursion - will Print a string in reverse way.
 * @s: string that is to be printed.
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
