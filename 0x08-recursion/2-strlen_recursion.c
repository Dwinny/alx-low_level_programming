#include "main.h"
/**
 * _strlen_recursion -It Returns the length of string.
 * @s: The string is to be measured.
 *
 * Return: This is the length of the string.
 */
int _strlen_recursion(char *s)
{
	int longit = 0;

	if (*s)
	{
		longit++;
		longit += _strlen_recursion(s + 1);
	}

	return (longit);
}
