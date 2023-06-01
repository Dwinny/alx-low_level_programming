#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node - adds a new node at beginning of the linked list
 * @head: double pointer to list_t list
 * @str: str to add in the node
 *
 * Return: address of the new element, else NULL
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *w;
	unsigned int n = 0;

	while (str[n])
		n++;
	w = malloc(sizeof(list_t));
	if (!w)
		return (NULL);
	w->str = strdup(str);
	w->len = n;
	w->next = (*head);
	(*head) = w;
	return (*head);
}
