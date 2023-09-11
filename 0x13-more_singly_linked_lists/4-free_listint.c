#include "lists.h"

/**
 * free_listint - function that frees the listint_t list
 * @head: pointer to the head
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
