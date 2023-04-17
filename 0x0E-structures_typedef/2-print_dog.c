#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - prints dog stats
 * @d: dog to print
 */
void print_dog(struct dog *d)
{
	if (d == 0)
		return;
	printf("Name : ");
	if (d->name == NULL)
		printf("(nil)");
	else
		printf("%s\n", d->name);
	printf("Age : %.2f\n", d->age);
	printf("Owner: ");
	if (d->owner == NULL)
	{
		printf("(nil)");
	}
	else
	{
		printf("%s", d->owner);
	}
	printf("\n");
}
