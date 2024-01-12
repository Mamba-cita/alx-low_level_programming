#include "lists.h"
/**
 * add_dnodeint - function that adds a new node at
 * the beginning of a linked list
 * @head: Double pointer to the head of the linked list
 * @n: Value of new node.
 * Return: New node added. Otherwise, NULL
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode;

	newNode = malloc(sizeof(dlistint_t));
	if (!newNode)
		return (NULL);

	newNode->n = n;
	newNode->next = *head;
	newNode->prev = NULL;

	if (*head)
		(*head)->prev = newNode;
	*head = newNode;

	return (newNode);
}
