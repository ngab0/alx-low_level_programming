#include "lists.h"
#include <string.h>

/**
 * add_node- adds a new node to beginning of the list
 * @head: pointer to head
 * @str: string to add
 * Return: address if true, NULL if fail
 */

list_t *add_node(list_t **head, const char *str)
{
	char *dup;
	int i;
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	dup = strdup(str);
	if (dup == NULL)
	{
		free(new);
		return (NULL);
	}
	for (i = 0; str[i];)
		i++;

	new->str = dup;
	new->i = i;
	new->next = *head;
	*head = new;
	return (new);
}
