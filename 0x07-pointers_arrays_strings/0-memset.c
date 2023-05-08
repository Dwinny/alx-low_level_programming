#include "main.h"
/**
 * _memset - fill a block of memory with the value
 * @s: starting address of memories
 * @b: desired value
 * @n: no of bytes that is to be changed
 *
 * Return: changed array with value
 */
char *_memset(char *s, char b, unsigned int n)
{
	int a = 0;

	for (; n > 0; a++)
	{
		s[a] = b;
		n--;
	}
	return (s);
}
