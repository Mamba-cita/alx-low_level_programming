#include "lists.h"
/**
 * sum_dlistint - Function returns the sum of
 * all the data (n) of a linked list
 * @head: Pointer to the head node
 * Return: Sum
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (!head)
		return (0);
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
