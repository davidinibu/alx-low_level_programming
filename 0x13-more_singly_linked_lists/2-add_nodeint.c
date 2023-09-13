#include "lists.h"

/**
 * add_nodeint - add  a new node at d beginning of a link list
 * @head: pointer to d first node in d list
 * @n: to insert in that  node
 *
 * Return: pointer to d new node, NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
