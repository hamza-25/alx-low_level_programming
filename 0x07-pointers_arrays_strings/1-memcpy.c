#include "main.h"

/**
 * _memcpy - function that copy memory
 * @src: character copy from
 * @dest: fill from src
 * @n: number of byte
 * Return: return dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)
	{
	dest[j] = src[j];
	}

	return (dest);
}
