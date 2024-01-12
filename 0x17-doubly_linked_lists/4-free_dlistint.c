#include "lists.h"
/**
 * free_dlistint - Function frees a linked list
 * @head: Pointer to the head node.
 * Return: void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;

	while (head)
	{
		current = head->next;
		free(head);
		head = current;
	}
}
