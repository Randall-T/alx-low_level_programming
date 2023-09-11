#include "lists.h"

/**
 * add_nodeint_end - function that adds a new node at the end
 *			of the listint_t list
 * @n: integer for the new node
 * @head: pointer to the head
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp;
	listint_t *temp2 = *head;

	temp = malloc(sizeof(listint_t));

	if (temp == NULL)
		return (NULL);

	temp->n = n;
	temp->next = NULL;

	if (*head == NULL)
	{
		*head = temp;
	}
	else
	{
		temp2 = *head;

		while (temp2->next != NULL)

			temp2 = temp2->next;
		temp2->next = temp;
	}
	return (temp);
}
