#include "lists.h"

/**
 * print_list - prints the linked list
 * @h: pointer to the list_t
 * Description: prints all the elements of list_t
 *
 * Return: Number of nodes
 */
size_t print_t(const list_t *h)
{
	size_t r = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		r++;
	}

	return (0);
}
