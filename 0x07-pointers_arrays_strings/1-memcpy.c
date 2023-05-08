#include "main.h"
/**
 *_memcpy - function which copies memory area
 *@dest: memory where stored
 *@src: memory where copied
 *@n: no of byte
 *
 *Return: memory with copied n bytes changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int x = 0;
	int y = n;

	for (; x < y; x++)
	{
		dest[x] = src[x];
		n--;
	}
	return (dest);
}
