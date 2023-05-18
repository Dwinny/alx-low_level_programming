#include <stdlib.h>
#include "main.h"

/**
 * *_memset - this fills up the memory with a constant byte
 * @s: the memory area to be filled
 * @b: the char to be copied
 * @n: no of times to copy b
 *
 * Return: the pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int w;

	for (w = 0; w < n; w++)
	{
		s[w] = b;
	}

	return (s);
}

/**
 * *_calloc - this allocates memory for an array
 * @nmemb: no of elements in the array
 * @size: the size of each element
 *
 * Return: the pointer to be allocated the memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *r;

	if (nmemb == 0 || size == 0)
		return (NULL);

	r = malloc(size * nmemb);

	if (r == NULL)
		return (NULL);

	_memset(r, 0, nmemb * size);

	return (r);
}
