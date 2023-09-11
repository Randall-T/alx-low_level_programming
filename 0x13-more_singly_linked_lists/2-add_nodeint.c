#include "lists.h"

/**
 * add_nodeint - function that adds a new node at the beginning of
 *		the listint_t list
 * @n: integer for the new node
 * @head: pointer to the head
 * Return: Address of the new elemenr, or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *add;

	add = malloc(sizeof(listint_t));

	if (add == NULL)
		return (NULL);

	add->n = n;
	add->next = *head;

	*head = add;

	return (add);
}
