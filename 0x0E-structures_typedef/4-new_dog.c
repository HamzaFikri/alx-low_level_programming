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
	dog_t *new_dog;
	int i, lenght1, lenght2;

	lenght1 = lenght2 = i = 0;
	while (name[lenght1++] != '\0')
		;
	while (owner[lenght2++] != '\0')
		;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	new_dog->name = malloc(lenght1);
	new_dog->owner = malloc(lenght2);

	do {
		new_dog->name[i] = name[i];
	} while (name[i++] != '\0');
	i = 0;
	do {
		new_dog->owner[i] = owner[i];
	} while (owner[i++] != '\0');
	new_dog->age = age;
	return (new_dog);
}
