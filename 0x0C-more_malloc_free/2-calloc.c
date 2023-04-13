#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_calloc - create array of chars initialized it with specific char
 * description: reserve with malloc and initialized it with specific char
 * @nmemb: number of member
 * @size: number of bytes
 * Return: NULL value or pointer to the array initialized
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	char *c;
	unsigned int n;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	c = ptr;
	for (n = 0; n < (nmemb * size); n++)
	{
		c[n] = '\0';
	}
	return (ptr);
}
