#include "main.h"
#include <stdlib.h>
/**
 * argstostr – the main entry
 * @ac: the int inputs
 * @av: the double pointer array
 * Return: 0(zero)
 */
char *argstostr(int ac, char **av)
{
	int q, j, k, len;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (q = 0; q < ac; q++)
	{
		for (j = 0; av[q][j] != '\0'; j++)
			len++;
		len++;
	}
	str = malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	k = 0;
	for (q = 0; q < ac; q++)
	{
		for (j = 0; av[q][j] != '\0'; j++)
		{
			str[k] = av[q][j];
			k++;
		}
		str[k] = '\n';
		k++;
	}
	return (str);
}
