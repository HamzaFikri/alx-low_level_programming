#include "main.h"
#include <stdio.h>

/**
* print_number - finds and prints the largest prime factor.
* of the number 612852475143.
* @n: the integer to print
*
*Return: nothing
*/

void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n / 10)
	{
		print_number(n / 10);
	}
	_putchar(n % 10 + '0');
}
