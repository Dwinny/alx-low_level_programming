#include "main.h"
/**
 * _strstr - Entry points
 * @haystack: inputs
 * @needle: inputs
 * Return: Always 0 (Successful)
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *u = haystack;
		char *v = needle;

		while (*u == *v && *v != '\0')
		{
			u++;
			v++;
		}

		if (*v == '\0')
			return (haystack);
	}

	return (0);
}
