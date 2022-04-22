#include "lists.h"

/**
 * list_len- function that returns # of elements
 * of a linked list
 * @h: linked list pointer
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
