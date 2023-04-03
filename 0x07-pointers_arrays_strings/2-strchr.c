#include "main.h"

/**
 * _strchr - locates a character string
 *@s: points to a character
 *@c: character
 * Return: null
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}

	return (NULL);
}
