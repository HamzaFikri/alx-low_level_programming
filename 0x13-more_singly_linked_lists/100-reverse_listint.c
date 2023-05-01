#include "lists.h"
/**
 * reverse_listint - Reverse a `listint_t` linked
 * @head: double pointer to head
 * Description: Limited to going through loop only once.
 * Not allowed to use `malloc` or `free` or arrays
 * Can only declare a max of 2 variables.
 * Return: pointer to first node of reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *tempNode = NULL;
	listint_t *nextNode;

	while (*head != NULL)
	{
		nextNode = (*head)->next;
		(*head)->next = tempNode;
		tempNode = *head;
		*head = nextNode;
	}
	*head = tempNode;
	return (*head);
}
