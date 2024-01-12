#include "lists.h"
/**
 * dlistint_len - unction that returns the
 * number of elements in a linked list
 * @h: Pointer to the header
 * Return: Length
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t len = 0;
	const dlistint_t *node = h;

	while (node)
	{
		len++;
		node = node->next;
	}
	return (len);
}
