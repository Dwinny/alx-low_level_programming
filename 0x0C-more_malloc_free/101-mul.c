#include "main.h"
#include <stdlib.h>
#include <stdio.h>

#define ERR_MSG "Error"

/**
 * is_digit – it checks if a string contains any non-digit char
 * @s: string for evaluation
 *
 * Return: 0 when a non-digit is found, else 1
 */
int is_digit(char *s)
{
	int y = 0;

	while (s[y])
	{
		if (s[y] < '0' || s[y] > '9')
			return (0);
		y++;
	}
	return (1);
}

/**
 * _strlen – this returns length of string
 * @s: the string to be evaluated
 *
 * Return:  length of a string
 */
int _strlen(char *s)
{
	int x = 0;

	while (s[x] != '\0')
	{
		x++;
	}
	return (x);
}

/**
 * errors – this handles the main errors
 */
void errors(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * main – the multiplies of 2 positive numbers
 * @argc: no of arguments
 * @argv: the array of arguments
 *
 * Return: always 0 (Success)
 */
int main(int argc, char *argv[])
{
	char *s1, *s2;
	int len1, len2, len, z, carry, digit1, digit2, *result, a = 0;

	s1 = argv[1], s2 = argv[2];
	if (argc != 3 || !is_digit(s1) || !is_digit(s2))
		errors();
	len1 = _strlen(s1);
	len2 = _strlen(s2);
	len = len1 + len2 + 1;
	result = malloc(sizeof(int) * len);
	if (!result)
		return (1);
	for (z = 0; z <= len1 + len2; z++)
		result[z] = 0;
	for (len1 = len1 - 1; len1 >= 0; len1--)
	{
		digit1 = s1[len1] - '0';
		carry = 0;
		for (len2 = _strlen(s2) - 1; len2 >= 0; len2--)
		{
			digit2 = s2[len2] - '0';
			carry += result[len1 + len2 + 1] + (digit1 * digit2);
			result[len1 + len2 + 1] = carry % 10;
			carry /= 10;
		}
		if (carry > 0)
			result[len1 + len2 + 1] += carry;
	}
	for (z = 0; z < len - 1; z++)
	{
		if (result[z])
			a = 1;
		if (a)
			_putchar(result[z] + '0');
	}
	if (!a)
		_putchar('0');
	_putchar('\n');
	free(result);
	return (0);
}
