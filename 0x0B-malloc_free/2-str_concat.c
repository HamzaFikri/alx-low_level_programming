#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - function that concatenates two strings
 * @s1: inicial string
 * @s2: string to be concatenated
 * Return: return the value of s
 */
char *str_concat(char *s1, char *s2)
{
	char *p, *r;
	unsigned int size1 = 0, size2 = 0;

	p = s1;
	if (s1)
		while (*p++)
			size1++;
	else
		s1 = "";

	p = s2;
	if (s2)
		while (*p++)
			size2++;
	else
		s2 = "";

	r = malloc(size1 + size2 + 1);
	if (!r)
		return (NULL);

	p = r;
	while (*s1)
		*p++ = *s1++;
	while (*s2)
		*p++ = *s2++;
	*p = 0;
	return (r);
}
