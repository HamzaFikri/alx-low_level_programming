#include "main.h"
#include <stdio.h>

/**
 * main - prints the number of arguments
 * @argc: arguments
 * @argv: array pointing to arguments
 * Return:always 0
 */
int main(int argc, __attribute__((unused)) char *argv[])
{
	int n;

	for (n = 0; n < argc; n++)
	{
	}
	printf("%d\n", n - 1);
	return (0);
}
