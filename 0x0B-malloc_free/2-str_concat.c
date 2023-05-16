#include "main.h"
#include <stdlib.h>
/**
 * str_concat - get ends of input and add together for size
 * @s1: it inputs 1 to concates
 * @s2: it inputs 2 to concates
 * Return: concates of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *conct;
	int y, c;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	y = c = 0;
	while (s1[y] != '\0')
		y++;
	while (s2[c] != '\0')
		c++;
	conct = malloc(sizeof(char) * (y + c + 1));
	if (conct == NULL)
		return (NULL);
	y = c = 0;
	while (s1[y] != '\0')
	{
		conct[y] = s1[y];
		y++;
	}
	while (s2[c] != '\0')
	}
		conct[y] = s2[c];
		y++, c++;
	}
	conct[y] = '\0';
	return (conct);
}
