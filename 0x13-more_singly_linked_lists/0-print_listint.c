#include "lists.h"

/**
 * print_listint - a function that prints all the elements of a listint_t.
 * @h: struct
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t count;
	const listint_t *l;

	for (l = h, count = 0; l != NULL; count++, l = l->next)
		printf("%d\n", l->n);

	return (count);
}
