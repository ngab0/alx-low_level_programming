#include <stdio.h>
#include "lists.h"

/**
 * print_list- Print all the elements of a list
 * @h: pointer to the linked list
 * Return: number of nodes of the linked list
 */

size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		i++;
		h = h->next;
	}
	return (i);
}
