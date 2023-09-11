#include "lists.h"

/**
 * add_node - adds a node at the beginning
 * @head: double list pointer
 * @str: new node string
 *
 * Return: address on new element, or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	size_t len = 0;

	if (str == NULL)
		return (0);

	while (str[len] != '\0')
		len++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = len;
	new->next = (*head);
	(*head) = new;

	return (*head);
}
