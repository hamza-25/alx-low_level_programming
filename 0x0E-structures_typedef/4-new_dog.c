#include <stdio.h>
#include "dog.h"

/**
 * *new_dog - printing the dog
 * @name: new name
 * @age: new age
 * @owner: new owner
 * description: make object of struct dog and print
 * Return: NULL
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *c_dog;
	int lname, i, lowner;

	c_dog = malloc(sizeof(*c_dog));
	if (c_dog == NULL || !(lowner) || !(name))
	{
		free(c_dog);
		return (NULL);
	}
	for (lname = 0; name[lname] != '\0'; lname++)
		;

	for (lowner = 0; name[lowner] != '\0'; lowner++)
		;
	c_dog->name = malloc((sizeof(char) * lname) + 1);
	c_dog->owner = malloc((sizeof(char) * lowner) + 1);
	if (c_dog->name == NULL || c_dog->lowner == NULL)
	{
		free(c_dog->name);
		free(c_dog->owner);
		free(c_dog);
		return (NULL);
	}
	for (i = 0; i < lname; i++)
		c_dog->name[i] = name[i];
	c_dog->name[i] = '\0';

	for (i = 0; i < lowner; i++)
		c_dog->owner[i] = name[i];
	c_dog->owner[i] = '\0';
	return (c_dog);
}
