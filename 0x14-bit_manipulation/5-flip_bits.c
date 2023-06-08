#include "main.h"
/**
 * flip_bits - counts no of bits to change
 * to get one no to another
 * @n: 1st no
 * @m: 2nd no
 *
 * Return: no of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int y, count = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (y = 63; y >= 0; y--)
	{
		current = exclusive >> y;
		if (current & 1)
			count++;
	}
	return (count);
}
