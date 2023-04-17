#include <stdio.h>
#include "main.h"
/**
 * init_dog - init the dog 
 * @name: name of dog
 * @age: age of dog
 * @owner: the owner
 * @d: name of object
 * description: make object of struct dog
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	struct dog d;
	d = malloc(sizepf(struct dog));
	if (d == NULL)
		return(NULL);
	d->name = name;
	d->age = age;
	d->owner = owner;
	return (d);

}
