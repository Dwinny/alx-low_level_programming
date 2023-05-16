#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup – this duplicates to the new memory space location
 * @str: char
 * Return: 0(zero)
 */
char *_strdup(char *str)
{
	char *aaa;
	int y, i = 0;

	if (str == NULL)
		return (NULL);
	y = 0;
	while (str[y] != '\0')
		y++;
	aaa = malloc(sizeof(char) * (y + 1));
	if (aaa == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
		aaa[i] = str[i];
	return (aaa);
}
