#include "lists.h"

/**
 * get_nodeint_at_index - returns d node at a certain index in a linkd list
 * @head: first node in d linked list
 * @index: index of d node to return
 *
 * Return: pointr to d node we are looking for, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}

	return (temp ? temp : NULL);
}
