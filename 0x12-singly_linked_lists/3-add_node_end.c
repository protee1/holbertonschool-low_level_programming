#include "lists.h"
/**
 * add_node_end - adds a new node at the end of a linked list
 * @head: head of the linked list
 * @str: string in the struct
 *
 * Return: the address of the new element or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newnode;
	list_t *final = *head;

	newnode = malloc(sizeof(list_t));

	if (newnode == NULL)
	{
		return (NULL);
	}

	newnode->str = strdup(str);

	newnode->next = NULL;

	if (*head == NULL)
	{
		*head = newnode;
	}
	else
	{
		while (final->next != NULL)
		{
			final = final->next;
		}
		final->next = newnode;
	}
	return (newnode);
}
