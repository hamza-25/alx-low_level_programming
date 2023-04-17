#ifndef DOG_H
#define DOG_H

/**
 * struct dog - structure of dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * description: make an object of strct dog
*/

typedef struct dog
{

	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
