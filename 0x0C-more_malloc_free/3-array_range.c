#include <stdlib.h>
#include "main.h"

/**
 * *array_range – this creates an array of ints
 * @min: the min range of values stored
 * @max: the max range of values stored and no of elements
 *
 * Return: the pointers to the new array
 */
int *array_range(int min, int max)
{
	int *r;
	int x, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	r = malloc(sizeof(int) * size);

	if (r == NULL)
		return (NULL);

	for (x = 0; min <= max; x++)
		r[x] = min++;

	return (r);
}
