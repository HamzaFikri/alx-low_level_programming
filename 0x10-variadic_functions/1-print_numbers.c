#include "variadic_functions.h"

/**
 * print_numbers - print each number with separator, followed by a newline
 * @separator: string to be printed between numbers
 * @n: number of args passed
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	int j = n;
	va_list list;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(list, n);
	while (j--)
		printf("%d%s", va_arg(list, int), j ? (separator ? separator : "") : "\n");
	va_end(list);
}
