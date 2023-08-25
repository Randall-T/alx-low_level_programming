#include "lists.h"

/**
 * list_len - Find number of elements
 * @h: list pointer
 * Return: Number of elements
 */
size_t list_len(const list_t *h)
{
	const list_t *temp;
	unsigned int r = 0;

	temp = h;
	while (temp)
	{
		r++;
		temp = temp->next;
	}
	return (r);
}
