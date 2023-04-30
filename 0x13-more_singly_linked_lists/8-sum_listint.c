#include "lists.h"

/**
 * sum_listint - returns the sum of all data (n) of a listint_t
 * @head: pointer to head of list
 * Return: sum of all data (n) of list or 0 if list is empty
 */
int sum_listint(listint_t *head)
{
	int sum;
	listint_t *current;

	for (sum = 0, current = head; current != NULL; current = current->next)
		sum += current->n;

	return (sum);
}
