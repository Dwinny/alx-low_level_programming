#include "main.h"
/**
 * print_binary - prints binary equivalent of decimal no
 * @n: no to be printed in binary
 */
void print_binary(unsigned long int n)
{
	int y, count = 0;
	unsigned long int t;

	for (y = 63; y >= 0; y--)
	{
		t = n >> y;
		if (t & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}
