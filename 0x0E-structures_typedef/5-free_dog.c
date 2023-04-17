#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - free malloc
 * @d: struct of dog
 * description: make object of struct dog and print
 * Return: void
*/

void free_dog(struct dog *d)
{
	if (d)
	{
		if (d->name)
			free(d->name);
		if (d->owner)
			free(d->owner);
		free(d);
	}
}
