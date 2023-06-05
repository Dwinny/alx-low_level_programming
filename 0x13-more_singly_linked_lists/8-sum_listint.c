#include "lists.h"
/**
 * sum_listint - calculates the sum of all data in  list int_t list
 * @head: first node in the linked list
 *
 * Return: result sum
 */
int sum_listint(listint_t *head)
{
	int m = 0;

	listint_t *temp = head;

	while (temp)
	{
	m += temp->n;
	temp = temp->next;
	}
	return (m);
}
