#include "main.h"

/**
 * _memset - memory
 * @s: character
 * @b: replace
 * @n: number
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
	s[i] = b;
	}

	return (s);
}
