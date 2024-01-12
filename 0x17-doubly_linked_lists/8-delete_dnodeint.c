#include "lists.h"
/**
 * delete_dnodeint_at_index -Function that deletes the
 * node at an index index.
 * @head: Double pointer to the head node.
 * @index: Position in the linked to be deleted.
 * Return: 1 if successful, Otherwise  0 if failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int x = 0;
	dlistint_t *pos;

	if (!*head)
		return (-1);
	pos = *head;

	while (pos && x < index)
	{
		pos = pos->next;
		x++;
	}

	if (!pos || x != index)
		return (-1);
	if (pos == *head)
	{
		*head = pos->next;
		if (*head)
			(*head)->prev = NULL;
	}
	else if (pos->next)
	{
		pos->prev->next = pos->next;
		pos->next->prev = pos->prev;
	}
	else
		pos->prev->next = NULL;
	free(pos);
	return (1);
}
