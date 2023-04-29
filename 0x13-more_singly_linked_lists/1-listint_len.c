#include "lists.h"

/**
 * listint_len - find the number of elements in a linked `listint_t`
 * @h: linked list head
 * Return: number of elements in linked list
 */
size_t listint_len(const listint_t *h)
{
	int lenght = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		lenght++;
		h = h->next;
	}
	return (lenght);
}
