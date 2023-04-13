#include "main.h"
#include <stdlib.h>

/**
* string_nconcat - function that concatenates two strings.
* @s1: First string.
* @s2: Second string.
* @n: Unsigned integer.
* Return: concatenated string.
**/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int ln1, ln2, i;
	char *pntr, *r;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";
	for (ln1 = 0, pntr = s1; *pntr; pntr++)
		ln1++;
	for (ln2 = 0, pntr = s2; *pntr; pntr++)
		ln2++;
	if (n > ln2)
		n = ln2;

	r = malloc((ln1 + n + 1) * sizeof(char));
	if (!r)
		return (0);

	pntr = r;
	while (*s1)
		*pntr++ = *s1++;
	i = 0;
	while (i < n)
	{
		*pntr++ = s2[i++];
	}
	*pntr = 0;
	return (r);
}
