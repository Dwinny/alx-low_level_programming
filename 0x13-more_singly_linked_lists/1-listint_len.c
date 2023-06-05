#include "lists.h"
/**
 * listint_len - returns the no of elements in a linked lists
 * @h: linked list of type int_t to traverse
 *
 * Return: no of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t m = 0;

	while (h)
	{
	m++;
	h = h->next;
	}
	return (m);
}
