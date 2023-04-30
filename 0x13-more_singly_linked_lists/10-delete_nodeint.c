#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index of a listint_t list
 * @head: pointer to pointer of head of list
 * @index: index of node to be deleted
 * Return: 1 if succeeded, -1 if failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *pntr, *prev;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		pntr = (*head)->next;
		free(*head);
		*head = pntr;
		return (1);
	}

	for (pntr = *head; index && pntr->next != NULL; index--, pntr = pntr->next)
		prev = pntr;
	if (index)
		return (-1);

	prev->next = prev->next->next;
	free(pntr);
	return (1);
}
