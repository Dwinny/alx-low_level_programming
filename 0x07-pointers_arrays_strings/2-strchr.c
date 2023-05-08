#include "main.h"
/**
 * _strchr - entry points
 * @s: inputs
 * @c: inputs
 * Return: Alway 0 (Successful)
 */
char *_strchr(char *s, char c)
{
	int x = 0;

	for (; s[x] >= '\0'; x++)
	{
		if (s[x] == c)
			return (&s[x]);
	}
	return (0);
}
