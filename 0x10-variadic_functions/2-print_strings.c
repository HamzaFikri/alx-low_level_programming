#include "variadic_functions.h"

/**
 * print_strings - print a string followed by a newline
 * @separator: string to be printed between strings
 * @n: number of strings passed to function
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	int j = n;
	char *str;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(list, n);
	while (j--)
		printf("%s%s",
				(str = va_arg(list, char *)) ? str : "(nil)",
				j ? (separator ? separator : "") : "\n");
	va_end(list);
}
