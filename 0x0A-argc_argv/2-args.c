#include "main.h"
#include <stdio.h>

/**
 * main - prints all arguments it receives
 * @argc: number of comand line arguments
 * @argv: contains the program command line arguments
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int a = 0;

	while (a < argc)
	{
		printf("%s\n", argv[a]);
		a++;
	}
	return (0);
}
