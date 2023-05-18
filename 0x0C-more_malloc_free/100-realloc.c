#include <stdlib.h>
#include "main.h"

/**
 * *_realloc – this reallocates a memory block using malloc and free
 * @ptr: the pointer to the memory previously allocated by malloc
 * @old_size: the size of the allocated memory for r
 * @new_size: the new size of the new memory block
 *
 * Return: pointer to the newly allocated memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ptr1;
	char *old_ptr;
	unsigned int w;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (!ptr)
		return (malloc(new_size));

	ptr1 = malloc(new_size);
	if (!ptr1)
		return (NULL);

	old_ptr = ptr;

	if (new_size < old_size)
	{
		for (w = 0; w < new_size; w++)
			ptr1[w] = old_ptr[w];
	}

	if (new_size > old_size)
	{
		for (w = 0; w < old_size; w++)
			ptr1[w] = old_ptr[w];
	}

	free(ptr);
	return (ptr1);
}
