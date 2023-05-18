#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked – it allocates memory using malloc
 * @b: the no of bytes to be allocated
 *
 * Return: the pointer to the allocated memory
 * if malloc fails, status value is equal to 98.
 */
void *malloc_checked(unsigned int b)
{
	void *r;

	r = malloc(b);

	if (r == NULL)
		exit(98);

	return (r);
}
