#include "lists.h"
/**
 * add_dnodeint_end - function that adds a new node
 * at the end of a linked list
 * @head: Double pointer to the head of the linked list
 * @n: Value of new node.
 * Return: New node added at the end. Otherwise, NULL
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNode, *endNode;

	newNode = malloc(sizeof(dlistint_t));
	if (!newNode)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;

	if (!*head)
	{
		newNode->prev = NULL;
		*head = newNode;
		return (newNode);
	}

	endNode = *head;
	while (endNode->next)
		endNode = endNode->next;

	endNode->next = newNode;
	newNode->prev = endNode;

	return (newNode);
}
