#include "main.h"

/**
 * print_last_digit - prints the last digit of a number.
 *
 * @n: number to be treated
 *
 * Return: The last digit of number
 *
 */
int print_last_digit(int n)
{
	int lst;

	lst = n % 10;
	if (lst < 0)
	{
		lst = lst * -1;
	}
	_putchar(n + '0');
	return (lst);
}
