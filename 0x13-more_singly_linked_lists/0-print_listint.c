#include "lists.h"

/**
 * print_listint - function that prints all the elements of a list-nt_t list
 * @h: pointer to the head of the list
 * Return: Number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t r = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		r++;
		h = h->next;
	}
	return (r);
}
