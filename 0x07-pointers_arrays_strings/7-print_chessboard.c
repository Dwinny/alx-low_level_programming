#include "main.h"
/**
 * print_chessboard - Entry points
 * @a: arrays
 * Return: Alway 0 (Successful)
 */
void print_chessboard(char (*a)[8])
{
	int c;
	int d;

	for (c = 0; c < 8; c++)
	{
		for (d = 0; d < 8; d++)
			_putchar(a[c][d]);
		_putchar('\n');
	}
}
