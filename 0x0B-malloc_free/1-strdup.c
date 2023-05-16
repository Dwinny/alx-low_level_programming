#include <stdio.h>

#include <stdlib.h>

#include "main.h"

/**
** _strdup - this duplicates to new memory space location
 * @str: the char
 * Return: 0 (zero)
 */

char *_strdup(char *str)

{
	char *duplicate;

	unsigned int x n;

	x = 0;
	n = 0;

	if (str == NULL)
		return (NULL);

	while (str[len])
		n++;
	duplicate = malloc(sizeof(char) * (n + 1));

	if (duplicate == NULL)
		return (NULL);

	while ((duplicate[x] = str[x]) != '\0')
		x++;

	return (duplicate);
}
