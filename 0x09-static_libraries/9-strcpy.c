#include "main.h"

/**
 * char *_strcpy – it is a function that copies the string pointed by src
 * @dest:it copies to
 * @src: it copies from
 * Return: strings
 */
char *_strcpy(char *dest, char *src)
{
	int a = 0;
	int y = 0;

	while (*(src + a) != '\0')
	{
		a++;
	}
	for ( ; y < a ; y++)
	{
		dest[y] = src[y];
	}
	dest[a] = '\0';
	return (dest);
}
