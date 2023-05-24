#include "function_pointers.h"
/**
 * int_index – return the index place if comparison = true, else -1
 * @array: the array
 * @size: the size of elements in the array
 * @cmp: pointer of one of the three in main
 * Return: zero
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);
	for (a = 0; a < size; a++)
	{
		if (cmp(array[a]))
			return (a);
	}
	return (-1);
}
