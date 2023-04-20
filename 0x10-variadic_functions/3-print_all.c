#include "variadic_functions.h"

/**
 * print_all - Entry Point
 * c = char, i = int, f = float, s = char * (if null print (nil))
 * @format: string of formats to use and print
 * Return: always 0
 */
void print_all(const char * const format, ...)
{
	va_list list;
	int n = 0, j = 0;
	char *sp = ", ";
	char *stnr;

	va_start(list, format);

	while (format && format[j])
		j++;

	while (format && format[n])
	{
		if (n  == (j - 1))
		{
			sp = "";
		}
		switch (format[n])
		{
		case 'c':
			printf("%c%s", va_arg(list, int), sp);
			break;
		case 'i':
			printf("%d%s", va_arg(list, int), sp);
			break;
		case 'f':
			printf("%f%s", va_arg(list, double), sp);
			break;
		case 's':
			stnr = va_arg(list, char *);
			if (stnr == NULL)
				stnr = "(nil)";
			printf("%s%s", stnr, sp);
			break;
		}
		n++;
	}
	printf("\n");
	va_end(list);
}
