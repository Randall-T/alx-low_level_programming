#include "lists.h"

/**
 * add_node_end - append new node
 * @head: address node of list
 * @str: address string
 * Return: new node address
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp;
	list_t *temp2 = *head;
	unsigned int len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len])
		len++;

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);

	temp->str = strdup(str);
	if (temp->str == NULL)
	{
		free(temp);
		return (NULL);
	}

	temp->len = len;
	temp->next = NULL;

	if (*head == NULL)
	{
		*head = temp;
		return (temp);
	}

	while (temp2->next)
		temp2 = temp2->next;

	temp2->next = temp;

	return (temp);
}
