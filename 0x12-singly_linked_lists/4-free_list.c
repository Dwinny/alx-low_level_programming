#include <stdlib.h>
#include "lists.h"
/**
 * free_list - frees a linked a list
 * @head: list_t list be free
 */
void free_list(list_t *head)
{
	list_t *p;

	while (head)
	{
		p = head->next;
		free(head->str);
		free(head);
		head = p;
	}
}
