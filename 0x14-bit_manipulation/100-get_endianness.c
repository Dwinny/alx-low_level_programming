#include "main.h"
/**
 * get_endianness - check if machine is little or big
 * Return: Zero is for big, one is for little
 */
int get_endianness(void)
{
	unsigned int y = 1;

	char *b = (char *) &y;

	return (*b);
}
