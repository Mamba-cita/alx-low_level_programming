#include "lists.h"
/**
 * insert_dnodeint_at_index - function that inserts a
 * new node at a given position.
 * @h: Double pointer to the h node.
 * @idx: Desired index.
 * @n: Value for the new node that
 * sets the pounters to NULL.
 * Return:  the address of the new node,
 * or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h,
				     unsigned int idx, int n)
{
	unsigned int x = 0;
	dlistint_t *newNode, *pos;

	newNode = malloc(sizeof(dlistint_t));
	if (!newNode)
		return (NULL);
	newNode->n = n;
	pos = *h;

	while (pos && x < idx)
	{
		pos = pos->next;
		x++;
	}
	if (!pos && idx != 0 && idx > x + 1)
	{
		free(newNode);
		return (NULL);
	}
	if (!*h || idx == 0)
	{
		newNode->next = *h;
		if (*h)
			(*h)->prev = newNode;
		newNode->prev = NULL;
		*h = newNode;
		return (newNode);
	}
	else
	{
		newNode->next = pos;
		newNode->prev = pos->prev;
		if (pos->prev)
			pos->prev->next = newNode;
		pos->prev = newNode;
	}
	return (newNode);
}
