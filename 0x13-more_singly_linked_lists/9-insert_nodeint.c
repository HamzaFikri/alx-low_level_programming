#include "lists.h"

/**
 * insert_nodeint_at_index - insert a new node at a given position
 * @head: double pointer to head
 * @idx: insert node at this index, starting count at 0
 * @n: value to store in node
 * Return: Address of new node or NULL if failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *pntr, *prev = NULL;
	int c = idx;

	if (head == NULL)
		return (NULL);

	for (pntr = *head; c && pntr != NULL; c--, pntr = pntr->next)
		prev = pntr;
	if (c)
		return (NULL);

	pntr = malloc(sizeof(listint_t));
	if (pntr == NULL)
		return (NULL);

	if (prev != NULL)
	{
		pntr->next = prev->next;
		prev->next = pntr;
	}
	else
	{
		pntr->next = NULL;
	}
	if (*head == NULL || idx == 0)
	{
		pntr->next = *head;
		*head = pntr;
	}
	pntr->n = n;
	return (pntr);
}
