#include "main.h"

/**
 * _atoi – it converts string into an integer.
 *
 * @s: the strings to be used.
 *
 * Return:it returns integer.
 */

int _atoi(char *s)
{
	int sign = 1, w = 0;
	unsigned int res = 0;

	while (!(s[w] <= '9' && s[w] >= '0') && s[w] != '\0')
	{
		if (s[w] == '-')
			sign *= -1;
		w++;
	}
	while (s[w] <= '9' && (s[w] >= '0' && s[w] != '\0'))
	{
		res = (res * 10) + (s[w] - '0');
		w++;
	}
	res *= sign;
	return (res);
}
