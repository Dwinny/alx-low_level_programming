#include "lists.h"
/**
 * add_nodeint_end - adds a node at the end of linked list
 * @head: pointer to the first element
 * @n: data to insert in new element
 *
 * Return: pointer to the new node, else NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *w;

	listint_t *temp = *head;

	w = malloc(sizeof(listint_t));
	if (!w)
	return (NULL);
	w->n = n;
	w->next = NULL;
	if (*head == NULL)
	{
	*head = w;
	return (w);
	}
	while (temp->next)
	temp = temp->next;
	temp->next = w;
	return (w);
}

