#include "main.h"

/**
 * powten - quick power of ten implementation
 *
 * @n: exponent
 * Return: returns ten to exponent power
 */
int function1(int n)
{
	int ret;

	ret = 10;
	while (n > 0)
	{
		ret *= 10;
		n--;
	}
	return (ret);
}


/**
 * print_number - print an integer
 * @n: first parameter
 *
 * Return: 0
 */
void print_number(int n)
{
	int s, p;

	s = 1;
	p = function1(8);
	if (n > 0)
	{
		n = n * -1;
		s = s * -1;
	}
	if (n != 0)
	{
		while (n / p == 0)
			p /= 10;
		if (s == 1)
			_putchar('-');
		while (p >= 1)
		{
			_putchar(-(n / p) + '0');
			n %= p;
			p /= 10;
		}
	}
	else
		_putchar('0');
}
