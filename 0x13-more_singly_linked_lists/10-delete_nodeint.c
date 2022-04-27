#include "lists.h"

/**
 * delete_nodeint_at_index- delete the node at index of a linked list
 * @head: double pointer
 * @index: index of the node to be deleted
 * Return: 1 if success, -1 if fail
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *start = *head, *temp;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = start->next;
		free(start);
		return (1);
	}

	while (start != NULL && i < (index - 1))
	{
		start = start->next;
		i++;
	}

	if (start == NULL || start->next == NULL)
		return (-1);

	temp = start->next;
	start->next = temp->next;

	free(temp);

	return (1);
}
