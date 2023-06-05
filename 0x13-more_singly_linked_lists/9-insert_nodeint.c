#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node in the linked list,
 * at given position
 * @head: pointer to first node in list
 * @idx: ind where the new node is added
 * @n: data to insert in new node
 *
 * Return: pointer to new node, else NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int y;

	listint_t *w;

	listint_t *temp = *head;

	w = malloc(sizeof(listint_t));
	if (!w || !head)
	return (NULL);
	w->n = n;
	w->next = NULL;
	if (idx == 0)
	{
	w->next = *head;
	*head = w;
	return (w);
	}
	for (y = 0; temp && y < idx; y++)
	{
	if (y == idx - 1)
	{
	w->next = temp->next;
	temp->next = w;
	return (w);
	}
	else
	temp = temp->next;
	}
	return (NULL);
}
