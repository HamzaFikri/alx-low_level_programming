#include "main.h"

/**
 * _pow_recursion - power of to int
 * Description: power of x to y
 * @x: the number to be raised
 * @y: the power
 * Return: -1 if y is less than 0
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);

	else
		return (x * _pow_recursion(x, y - 1));
}
