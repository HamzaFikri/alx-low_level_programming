#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * argstostr - concatenate all arguments of your program with newline
 * @ac: argument count
 * @av: double pointer to array of strings passed to main
 * Return: Null if fail, else return pointer to new string
 */
char *argstostr(int ac, char **av)
{
	char *a, *r;
	int i, j, sum;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0, sum = 0; i < ac; i++)
	{
		for (j = 0; *(*(av + i) + j) != '\0'; j++, sum++)
			sum++;
	}
	sum++;

	a = malloc(sum * sizeof(char));
	if (a == NULL)
		return (NULL);

	r = a;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			*a = av[i][j];
			a++;
		}
		*a = '\n';
		a++;
	}
	return (r);
}
