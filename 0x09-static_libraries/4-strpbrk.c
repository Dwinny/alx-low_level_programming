#include "main.h"
/**
 * _strpbrk – the entry point
 * @s:the input
 * @accept:the input
 * Return: Always 0 (Successful)
 */
char *_strpbrk(char *s, char *accept)
{
	int r;

	while (*s)
	{
		for (r = 0; accept[r]; r++)
		{
		if (*s == accept[r])
		return (s);
		}
	s++;
	}

return ('\0');
}
