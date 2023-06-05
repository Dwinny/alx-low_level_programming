#include "lists.h"
/**
 * free_listint2 - frees linked list
 * @head: pointer to the list int_t
 */
void free_listint2(listint_t **head)
{
	listint_t *p;

	if (head == NULL)
	return;
	while (*head)
	{
	p = (*head)->next;
	free(*head);
	*head = p;
	}
	*head = NULL;
}
