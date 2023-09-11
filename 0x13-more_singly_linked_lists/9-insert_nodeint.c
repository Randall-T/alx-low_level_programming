#include "lists.h"

/**
 * insert_nodeint_at_index - function that inserts a new node at given position
 * @head: pointer to the head
 * @idx: index of the list where the new node is added
 * @n: data to insert
 * Return: address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int r;
	listint_t *temp;
	listint_t *temp2 = *head;

	temp = malloc(sizeof(listint_t));

	if (!temp || !head)
		return (NULL);

	temp->n = n;
	temp->next = NULL;

	if (idx == 0)
	{
		temp->next = *head;
		*head = temp;
		return (temp);
	}
	for (r = 0; temp2 && r < idx; r++)
	{
		if (x == idx - 1)
		{
			new->next = temp2->next;
			temp2->next = temp;
			return (temp);
		}
		else
			temp2 = temp2->next;
	}

	return (NULL);
}
