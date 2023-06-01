#include <stdlib.h>
#include "lists.h"
/**
 * list_len - returns no of elements in linked list
 * @h: pointer to the list_t list
 *
 * Return: no of elements in h
 */
size_t list_len(const list_t *h)
{
	size_t b = 0;

	while (h)
	{
		b++;
		h = h->next;
	}
	return (b);
}
