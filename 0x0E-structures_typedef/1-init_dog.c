#include "dog.h"

/**
 * init_dog - init the dog
 * @name: name of dog
 * @age: age of dog
 * @owner: the owner
 * @d: name of object
 * description: make object of struct dog
 * Return: void
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return (NULL);
	d->name = name;
	d->age = age;
	d->owner = owner;
}
