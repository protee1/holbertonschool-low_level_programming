#include "lists.h"
/**
 * list_len - the function that return the number of elements
 * in a linked list.
 * @h: the pointer that points to the struct.
 *
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	int numb_elem;

	numb_elem = 0;

	while (numb_elem != '\0')
	{
		numb_elem = numb_elem->next;
		numb_elem++;
	}
	return (numb_elem);
}
