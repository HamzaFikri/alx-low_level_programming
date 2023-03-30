#include "main.h"


/**
 * print_number - print an integer
 * @n: first parameter
 * Return: 0
 */
void print_number(int n)
{
	unsigned int i, j, cnt;

	if (n < 0)
	{
		_putchar(45);
		i = n * -1;
	}
	else
	{
		i = n;
	}

	j = i;
	cnt = 1;

	while (j > 9)
	{
		j /= 10;
		cnt *= 10;
	}

	for (; cnt >= 1; cnt /= 10)
	{
		_putchar(((i / cnt) % 10) + 48);
	}
}
