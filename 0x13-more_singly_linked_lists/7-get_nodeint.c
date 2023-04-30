#include "lists.h"

/**
 * get_nodeint_at_index - Get the nth node of a `listint_t` linked
 * @head: pointer to head node
 * @index: index to find in linked list, starting at 0
 * Return: pointer to node or NULL if failed
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current;
	unsigned int x, y;

	current = head;

	for (y = 0; head != NULL; y++)
		head = head->next;

	if (index > y)
		return (NULL);

	for (x = 0; x < index; x++)
	{
		if (current == NULL)
			return (NULL);
		current = current->next;
	}
	return (current);
}
