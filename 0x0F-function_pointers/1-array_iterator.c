#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - prints each array on a newline
 * @array: this is the array
 * @size: no of elements to print
 * @action: the pointer to print in regular or hex
 * Return: this is null
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int y;

	if (array == NULL || action == NULL)
		return;
	for (y = 0; y < size; y++)
	{
		action(array[y]);
	}
}
