#include "lists.h"

/**
 * find_listint_loop - fnd a loop in a list
 * @head: points to beginning of list
 * Return: the address where loop starts or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *temp = head, *check;

	if (!head)
		return (NULL);
	if (head == head->next)
		return (head);
	while (temp)
	{
		temp = temp->next;
		check = head;
		while (temp && check != temp)
		{
			if (check == temp->next)
				return (check);
			check = check->next;
		}
	}
	return (temp);
}
