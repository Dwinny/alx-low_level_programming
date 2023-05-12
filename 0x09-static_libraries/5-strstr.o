#include "main.h"
/**
 * _strstr – the entry point
 * @haystack: the input
 * @needle: the input
 * Return: Always 0 (Successful)
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *l = haystack;
		char *p = needle;

		while (*l == *p && *p != '\0')
		{
			l++;
			p++;
		}

		if (*p == '\0')
			return (haystack);
	}

	return (0);
}
