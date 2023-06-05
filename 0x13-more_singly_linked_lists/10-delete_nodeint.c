#include "lists.h"
/**
 * delete_nodeint_at_index - deletes a node in the linked list at certain index
 * @head: pointer to first element in list
 * @index: in of node to delete
 *
 * Return: 1 (Successful), else -1 (Failed)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	listint_t *current = NULL;
	unsigned int y = 0;

	if (*head == NULL)
	return (-1);
	if (index == 0)
	{
	*head = (*head)->next;
	free(temp);
	return (1);
	}
	while (y < index - 1)
	{
	if (!temp || !(temp->next))
	return (-1);
	temp = temp->next;
	y++;
	}
	current = temp->next;
	temp->next = current->next;
	free(current);
	return (1);
}
