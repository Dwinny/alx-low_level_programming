#include "main.h"
/**
 * set_bit - sets a bit at given index to one
 * @n: pointer to no to be changed
 * @index: index of bit set to zero
 *
 * Return: 1 if successful, -1 if failed
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = ((1UL << index) | *n);
	return (1);
}
