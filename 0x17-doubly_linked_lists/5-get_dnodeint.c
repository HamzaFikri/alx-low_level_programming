#include "lists.h"

/**
 * get_dnodeint_at_index - return the node at index
 * @head: pointer to a dll
 * @index: index of the node
 * Return: pointer to node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	size_t count = 0;

	while (head != NULL)
	{
		if (count == index)
			break;
		count++;
		head = head->next;
	}

	return (head);
}
