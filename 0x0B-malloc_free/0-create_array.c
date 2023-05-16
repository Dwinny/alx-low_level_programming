#include "main.h"
#include <stdlib.h>

/**
 *  create_array – this creates array of char
 *  char.
 *  @c: the char to initialize
 *  @size: the no of bytes
 *  Return: the pointer to the array or null is failure
 */
char *create_array(unsigned int size, char c)
{
	char *array = malloc(size);

	if (size == 0 || array == 0)
		return (NULL);
	while (size--)
		array[size] = c;
	return (array);
}
