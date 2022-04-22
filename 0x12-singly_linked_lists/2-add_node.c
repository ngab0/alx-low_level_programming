#include "lists.h"

/**
 * add_node- adds a new node to beginning of the list
 * @head: pointer to head
 * @str: string to add
 * Return: address if true, NULL if fail
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	if (head == NULL)
		return (NULL);

	/* allocate space for the new node */
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	if (str == NULL)
	{
		new->str = strdup("(nil)");
		new->len = 0;
	}
	else
	{
		new->str = strdup(str);
		new->len = _strlen(str);
	}

	new->next = *head;
	*head = new;

	return (*head);
}

/**
 * _strlen - finds the length of a given string
 * @str: given string
 *
 * Return: length of str
 */
unsigned int _strlen(const char *str)
{
	unsigned int length = 0;

	while (*str)
	{
		length++;
		str++;
	}

	return (length);
}
