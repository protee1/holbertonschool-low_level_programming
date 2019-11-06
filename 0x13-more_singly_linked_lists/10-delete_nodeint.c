#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at index of a linked list
 * @head: the pointer to the struct
 * @index: index of the node that should be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp, *pretmp = *head;
	unsigned int i = 0;

	if (pretmp == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		*head = (*head)->next;
		free(pretmp);
		return (1);
	}

	for (i = 0 ; i < index - 1 ; i++)
	{
		if (tmp != NULL)
		{
			tmp = tmp->next;
		}
	}

	if (*head == NULL || (*head)->next == NULL)
		return (-1);

	tmp = pretmp->next;
	pretmp->next = tmp->next;
	free(tmp);
	return (1);
}
