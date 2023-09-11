#include "lists.h"

/**
 * pop_listint - function that deletes the head node of the listint_t list
 * @head: pointer to the head
 * Return: data(n) in the head node
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	if (!head || !*head)
		return (0);

	data = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (data);
}
