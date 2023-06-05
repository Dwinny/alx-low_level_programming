#include "lists.h"
/**
 * pop_listint - deletes the head node of linked list
 * @head: pointer to the first element in linked list
 *
 * Return: the data inside the element been deleted,
 * or zero if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int m;

	if (!head || !*head)
	return (0);
	m = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;
	return (m);
}
