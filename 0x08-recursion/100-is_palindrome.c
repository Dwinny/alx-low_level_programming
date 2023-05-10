#include "main.h"
int check_pal(char *s, int i, int len);
int _strlen_recursion(char *s);
/**
 * is_palindrome - checks if strings is a palindrome
 * @s: string to be reversed
 *
 * Return: 1 whether it is, else 0 it is not
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_pal(s, 0, _strlen_recursion(s)));
}
/**
 * _strlen_recursion - returns the length of strings
 * @s: strings to calculate length of
 *
 * Return: length of strings
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
/**
 * check_pal - checks if the characters is recursively for palindrome
 * @s: string to be checked
 * @i: iterators
 * @len: length of strings
 *
 * Return: 1 whether palindrome, else 0
 */
int check_pal(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (check_pal(s, i + 1, len - 1));
}
