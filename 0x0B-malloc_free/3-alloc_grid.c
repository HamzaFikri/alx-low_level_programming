#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - return apointer to a 2 dimensional array of intergers
 * @width: width of the grid
 * @height: height of the grid
 * Return: the value of grid if passed, otherwise return null
 */
int **alloc_grid(int width, int height)
{
	int **g;
	int i, j;

	if (width + height < 2 || width < 1 || height < 1)
		return (NULL);

	g = malloc(height * sizeof(*g));
	if (g == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		g[i] = malloc(width * sizeof(**g));
		if (g[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(g[i]);
			free(g);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			g[i][j] = 0;
	}
	return (g);
}
