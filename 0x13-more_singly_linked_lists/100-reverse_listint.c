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
	listint_t *tempNode;
	listint_t *nextNode;

	if (*head == NULL)
		return (NULL);

	nextNode = *head;
	*head = nextNode->next;
	tempNode = (*head)->next;
	nextNode->next = NULL;
	if (*head == NULL)
	{
		*head = nextNode;
		return (nextNode);
	}

	while (tempNode != NULL)
	{
		(*head)->next = nextNode;
		nextNode = *head;
		*head = tempNode;
		tempNode = (*head)->next;
	}

	(*head)->next = nextNode;
	return (*head);
}
