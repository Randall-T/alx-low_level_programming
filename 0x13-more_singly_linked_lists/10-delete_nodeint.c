#include "lists.h"

/**
 * delete_nodeint_at_index - function deletes the node at an index of the
 *				listint list
 * @head: pointer to the head
 * @index: index of node to be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int r = 0;
	listint_t *temp = *head;
	listint_t *temp2 = NULL;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	while (r < index - 1)
	{
		if (!temp || !(temp->next))
			return (-1);
		temp = temp->next;
		r++;
	}

	temp2 = temp->next;
	temp->next = temp2->next;
	free(temp2);

	return (1);
}
