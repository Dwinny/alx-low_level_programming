#include "main.h"

/**
 * set_string - makes the value of the pointers to a char
 * @s:the pointer to pointers
 * @to:the pointers char
 */

void set_string(char **s, char *to)
{
	*s = to;
}
