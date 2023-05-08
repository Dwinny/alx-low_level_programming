#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - Entry points
 * @a: inputs
 * @size: inputs
 * Return: Alway 0 (Successful)
 */
void print_diagsums(int *a, int size)
{
	int sum5, sum6, x;

	sum5 = 0;
	sum6 = 0;

	for (x = 0; x < size; x++)
	{
		sum5 = sum5 + a[x * size + x];
	}

	for (x = size - 1; x >= 0; x--)
	{
		sum6 += a[x * size + (size - x - 1)];
	}

	printf("%d, %d\n", sum5, sum6);
}
