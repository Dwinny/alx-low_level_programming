#include "main.h"
#include <stdlib.h>
/**
 * argstostr – the entry
 * @ac: the int
 * @av: the double pointer
 * Return:0
 */
char *argstostr(int ac, char **av)
{
	int s, p, r = 0, l = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (s = 0; s < ac; s++)
	{
		for (p = 0; av[s][p]; p++)
			l++;
	}
	l += ac;
	str = malloc(sizeof(char) * l + 1);
	if (str == NULL)
		return (NULL);
	for (s = 0; s < ac; s++)
	{
	for (p = 0; av[s][p]; p++)
	{
		str[r] = av[s][p];
		r++;
	}
	if (str[r] == '\0')
	{
		str[r++] = '\n';
	}
	}
	return (str);
}
