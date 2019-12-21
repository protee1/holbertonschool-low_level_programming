#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes the node at index of a linked list
 * @head: the pointer to the struct
 * @index: index of the node that should be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp1, *tmp2;
	dlistint_t *delenode = *head;
	unsigned int i;

	if (*head == NULL)
	{
		return (-1);
	}
	else if (index == 0)
	{
		*head = delenode->next;
		(*head)->prev = NULL;
		free(delenode);
		return (1);
	}
	else
	{
		for (i = 0; i < index; i++)
		{
			delenode = delenode->next;
			if (delenode == NULL)
			{
				return (-1);
			}
		}
		if (delenode->next == NULL)
		{
			tmp1 = delenode->prev;
			tmp1->next = NULL;
			free(delenode);
			return (1);
		}
		tmp1 = delenode->next;
		tmp2 = delenode->prev;
		free(delenode);
		tmp2->next = tmp1;
		tmp1->prev = tmp2;
		return (1);
	}
	return (1);
}
