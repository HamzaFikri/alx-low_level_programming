#include "lists.h"

/**
 * add_nodeint - add a new node at the beginning of a `listint_t`
 * @head: double pointer to head node
 * @n: int value to store in new node
 * Return: Address of new element or NULL if failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *list;

	list = malloc(sizeof(listint_t));
	if (list == NULL)
		return (NULL);

	list->n = n;
	list->next = *head;
	*head = list;

	return (list);
}
