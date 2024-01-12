#include "lists.h"
/**
 * get_dnodeint_at_index - Function that returns the nth
 * node of a linked list
 * @head: Pointer to the head node.
 * @index: Index of the node
 * Return: The nth node, otherwise NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int x = 0;
	dlistint_t *pos = head;

	while (pos && x < index)
	{
		pos = pos->next;
		x++;
	}

	if (!pos || x != index)
		return (NULL);
	return (pos);
}
