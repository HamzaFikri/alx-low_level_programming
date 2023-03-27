#include "main.h"

/**
 * rev_string - a function that reverses a string
 * @s: input to reverse to be modified
 * Return: nothing
 */
	void rev_string(char *s)
	{
		char rv = s[0];
		int count = 0;
		int i;

		while (s[count] != '\0')
			count++;

		for (i = 0; i < count; i++)
		{
			count;
			rv = s[i];
			s[i] = s[fcounter];
			s[count] = rv;
		}
	}
