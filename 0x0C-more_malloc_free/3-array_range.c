#include "main.h"
#include <stdlib.h>

/**
 * array_range - get len, malloc * len
 * loop size of len to insert min++ into new arr
 * @min: min input
 * @max: max input
 * Return: pointer to new arr of ints
 */
int *array_range(int min, int max)
{
	int *pntr, i;

	if (min > max)
		return (NULL);

	pntr = malloc((max - min + 1) * sizeof(*pntr));
	if (pntr == NULL)
		return (NULL);
	for (i = 0; min <= max; i++, min++)
		pntr[i] = min;
	return (pntr);
}
