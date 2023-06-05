#include "lists.h"
/**
 * get_nodeint_at_index - returns the node at a certain ind in a linked list
 * @head: first node in linked list
 * @index: ind of the node to return
 *
 * Return: pointer to the node we are looking for, else NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int y = 0;

	listint_t *temp = head;

	while (temp && y < index)
	{

	temp = temp->next;

	y++;
	}
	return (temp ? temp : NULL);
}
