#include "main.h"
#include <stdlib.h>

/**
 * *_realloc - reallocate memory size function
 * @ptr: pointer to address of old memory location
 * @old_size: unsigned int type of old memory size
 * @new_size: unsigned int type for new memory size
 * Return:  return pointer to array
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p, *cp;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (ptr != NULL && new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		p = malloc(new_size);
		if (p == NULL)
			return (NULL);
		return (p);
	}

	p = malloc(new_size);
	if (p == NULL)
		return (NULL);
	cp = ptr;
	for (i = 0; i < old_size; i++)
		p[i] = cp[i];
	free(ptr);
	return (p);
}
