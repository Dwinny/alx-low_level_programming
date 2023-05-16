#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid – the nested loop to make grid
 * @grid: the address of the two dimensional grid
 * @width: the width input
 * @height: the height input
 * Return: the pointer to the dim. array
 */
int **alloc_grid(int width, int height)
{
	int **mee;
	int c, d;

	if (width <= 0 || height <= 0)
		return (NULL);
	mee = malloc(sizeof(int *) * height);
	if (mee == NULL)
		return (NULL);
	for (c = 0; c < height; c++)
	{
		mee[c] = malloc(sizeof(int) * width);
		if (mee[c] == NULL)
		{
			for (; c >= 0; c--)
				free(mee[c]);
			free(mee);
			return (NULL);
		}
	}
	for (c = 0; c < height; c++)
	{
		for (d = 0; d < width; d++)
			mee[c][d] = 0;
	}
	return (mee);
}
