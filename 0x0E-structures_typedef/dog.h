#ifndef DOG_H
#define DOG_H

/**
 * struct dog - structure definition of a dog
 * @name: character name dog
 * @age: integer age dog
 * @owner: character string owner
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
