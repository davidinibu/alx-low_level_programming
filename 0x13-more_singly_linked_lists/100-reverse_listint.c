#include "lists.h"

/**
 * reverse_listint - reverses a linkd list
 * @head: pointer to d first node in d list
 *
 * Return: point to d first node in a fresh list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}

	*head = prev;

	return (*head);
}
