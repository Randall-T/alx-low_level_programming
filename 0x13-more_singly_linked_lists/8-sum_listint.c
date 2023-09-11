#include "lists.h"

/**
 * sum_listint - function that return the sum of all the data(n) of the
 *		listint_t list
 * @head: pointer to the head
 * Return: if the list is empty, return 0
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
