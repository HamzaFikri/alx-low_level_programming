#include "lists.h"

/**
 * print_listint_safe - Print `listint_t` linked list including mem addresses
 * @head: head of linked list
 * Description: Go through the list only once.
 * Return: number of nodes in list. If fails, exit with status 98.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t x = 0, y;
	const listint_t *temp_h = head, *check_next;

	while (temp_h)
	{
		printf("[%p] %d\n", (void *)temp_h, temp_h->n);
		x++;
		temp_h = temp_h->next;
		check_next = head;
		y = 0;
		while (y < x)
		{
			if (temp_h == check_next)
			{
				printf("-> [%p] %d\n", (void *)temp_h, temp_h->n);
				return (x);
			}
			check_next = check_next->next;
			y++;
		}
	}
	return (x);
}
