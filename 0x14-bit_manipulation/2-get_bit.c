#include "main.h"
/**
 * get_bit - returns the value of bit at ind in decimal no
 * @n: no to be searched
 * @index: ind of bit
 *
 * Return: value of  bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int b;

	if (index > 63)
		return (-1);
	b = (n >> index) & 1;
	return (b);
}
