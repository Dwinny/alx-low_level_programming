#include "lists.h"
/**
 * print_listint - prints all the element of  linked list
 * @h: linked list of type int_t to print
 *
 * Return: no of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t m = 0;

	while (h)
	{
	printf("%d\n", h->n);
	m++;
	h = h->next;
	}
	return (m);
}
