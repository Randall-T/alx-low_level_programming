#include "lists.h"

/**
 * free_list - frees linked list
 * @head: list_t freed
 */
void free_list(list_t *head)
{
	list_t *temp;

	while ((temp = head) != NULL)
	{
		head = head->next;
		free(temp->str);
		free(temp);
	}
}
