#include "main.h"
/**
 * _strpbrk - Entry points
 * @s: inputs
 * @accept: inputs
 * Return: Always 0 (Successful)
 */
char *_strpbrk(char *s, char *accept)
{
		int w;

		while (*s)
		{
			for (w = 0; accept[w]; w++)
			{
			if (*s == accept[w])
			return (s);
			}
		s++;
		}

	return ('\0');
}
