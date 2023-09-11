#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth node of the
 *				listint_t list
 * @head: pointer to the head
 * @index: index of the node, starting at 0
 * Return: nth node or NULL if the node does not exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int r = 0;
	listint_t *temp;

	temp = head;
	while (r != index && temp != NULL)
	{
		r++;
		temp = temp->next;
	}

	if (r != index)
		return (NULL);
	return (temp);
}
