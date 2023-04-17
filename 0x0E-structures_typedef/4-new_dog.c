#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - create a new dog
 * @name: char string name
 * @age: int age
 * @owner: char string owner
 * Return: pointer to new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	int lenght;
	char *pntr;

	if (name == 0 || owner == 0)
		return (NULL);
	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);

	for (lenght = 1, pntr = name; *pntr; lenght++)
		pntr++;
	d->name = malloc(lenght);
	if (d->name == 0)
	{
		free(d);
		return (NULL);
	}

	for (lenght = 1, pntr = owner; *pntr; lenght++)
		pntr++;
	d->owner = malloc(lenght);
	if (d->owner == 0)
	{
		free(d->name);
		free(d);
		return (NULL);
	}

	for (lenght = 0; *name != 0; lenght++, name++)
		d->name[lenght] = *name;
	d->name[lenght] = 0;
	for (lenght = 0; *owner != 0; lenght++)
		d->owner[lenght] = *owner++;
	d->owner[lenght] = 0;
	d->age = age;

	return (d);
}
