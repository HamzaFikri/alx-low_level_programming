#include "variadic_functions.h"

/**
 * sum_them_all - sums variable arguments
 * @n: the number of arguments
 * @...: the integers to sum
 * Return: the integer sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	va_list lst;
	int sum;

	va_start(lst, n);
	for (i = 0, sum = 0; i < n; i++)
		sum += va_arg(lst, int);

	va_end(lst);

	return (sum);
}
