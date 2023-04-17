#include <stdio.h>
#include "dog.h"

/**
 * print_dog - printing the dog
 * @d: struct of dog
 * description: make object of struct dog and print
 * Return: void
*/

void print_dog(struct dog *d)
{
	if (d)
	{
		printf("Name: %s", d->name == null ? (nil) : d->name);
		printf("Age: %d", d->age == null ? (nil) : d->age);
		printf("Owner: %s", d->owner == null ? (nil) : d->owner);
	}
	else
	{
		printf("nothing");
	}
}
