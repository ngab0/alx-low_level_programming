#include "lists.h"
#include <string.h>

/**
 * add_node_end- add a new node at the end of a list
 * @head: pointer to head of list
 * @str: string to be duplicated
 * Return: address of new element or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *current;
	char *s;

	if (str == NULL)
		return (NULL);
	s = strdup(str);
	if (s == NULL)
		return (NULL);
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL)
	new->str = s;
	new->len = strlen(str);
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}
	current = *head;
	while (current->next != NULL)
		current = current->next;
	current->next = new;
	return (*head);
}
