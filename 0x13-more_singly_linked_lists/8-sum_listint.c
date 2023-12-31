#include "lists.h"

/**
 * sum_listint - calculates d sum of all d data in a listint_t list
 * @head: first node in d list Linked
 *
 * Return: resulting sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
