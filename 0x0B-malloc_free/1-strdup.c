#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - Function that returns a pointer to a newly allocated
 * space in memory, which contains a copy of the string given as
 * a parameter.
 * @str: string to be copy
 * Return: return null if str = null otherwise return value of p
 */
char *_strdup(char *str)
{
	int s = 0;
	char *p, *r;

	if (!str)
		return (NULL);

	p = str;
	while (*p++)
		s++;

	r = malloc(s + 1);
	if (!r)
		return (NULL);

	p = r;
	while (*str)
		*p++ = *str++;

	*p = 0;
	return (r);
}
