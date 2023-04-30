#include "lists.h"

/**
 * free_listint - free a `listint_t` list
 * @head: head of linked list
 */
void free_listint(listint_t *head)
{
	listint_t *holdlist;

	while (head != NULL)
	{
		holdlist = head;
		head = head->next;
		free(holdlist);
	}
}
