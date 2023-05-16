#include <stdlib.h>
#include "main.h"
/**
 * count_word – the helper function to count the no of words in string
 * @s: strings to evaluate
 *
 * Return: no of words
 */
int count_word(char *s)
{
	int ag, c, b;

	ag = 0;
	b = 0;

	for (c = 0; s[c] != '\0'; c++)
	{
		if (s[c] == ' ')
			ag = 0;
		else if (ag == 0)
		{
			ag = 1;
			b++;
		}
	}
	return (b);
}
/**
 * **strtow – this splits a string into words
 * @str: the string to split
 *
 * Return: the pointer to an array of strings (Successful)
 * or NULL which is an error
 */
char **strtow(char *str)
{
	char **matrix, *tmp;
	int b, k = 0, len = 0, words, c = 0, start, end;

	while (*(str + len))
		len++;
	words = count_word(str);
	if (words == 0)
		return (NULL);
	matrix = (char **) malloc(sizeof(char *) * (words + 1));
	if (matrix == NULL)
		return (NULL);
	for (b = 0; b <= len; b++)
	{
		if (str[b] == ' ' || str[b] == '\0')
		{
			if (c)
			{
				end = b;
				tmp = (char *) malloc(sizeof(char) * (c + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				matrix[k] = tmp - c;
				k++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = b;
	}
	matrix[k] = NULL;
	return (matrix);
}
