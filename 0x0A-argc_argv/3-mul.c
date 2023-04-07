#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * atoi is a function that converts a string into an int
 * @argc: arguments
 * @argv: array pointing to arguments
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int a, resultat = 1;

	if (argc != 3)
	{
		printf("%s\n", "Error");
		return (1);
	}
	else
	{
		for (a = 1; a < argc; a++)
		{
			resultat *= atoi(argv[a]);
		}
		printf("%d\n", resultat);
	}
	return (0);
}
