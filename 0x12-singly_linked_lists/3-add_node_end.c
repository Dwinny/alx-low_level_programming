#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node_end - adds new node at the end of linked list
 * @head: double pointer to list_t
 * @str: str to put in new node
 *
 * Return: address of the new element, else NULL if failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *temp = *head;
	unsigned int n = 0;

	while (str[n])
		n++;
	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);
	new->str = strdup(str);
	new->len = n;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (temp->next)
		temp = temp->next;
	temp->next = new;
	return (new);
}
