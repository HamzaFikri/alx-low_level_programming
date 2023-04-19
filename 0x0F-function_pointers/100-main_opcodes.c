#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 * @argc: the number of args
 * @argv: argument vector
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	char *p = (char *)main;
	int i;

	if (argc != 2)
		printf("Error\n"), exit(1);
	i = atoi(argv[1]);
	if (i < 0)
		printf("Error\n"), exit(2);

	while (i--)
		printf("%02hhx%s", *p++, i ? " " : "\n");
	return (0);
}
