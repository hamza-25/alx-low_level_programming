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
	int n;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * sizeof(int));
	n = sizeof(int);
	if (ptr == NULL)
		return (NULL);
	while (n--)
	{
		*ptr = 0;
		ptr++;
	}
	return (ptr);
}
