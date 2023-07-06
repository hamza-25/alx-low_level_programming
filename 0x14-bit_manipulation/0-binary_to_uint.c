#include "main.h"

/**
 * binary_to_uint - convert binary to unsigned int
 * @b: const char binary
 * Return: return a number
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int num_uint = 0;
	unsigned int i = 1, j = 1;

	if (b == NULL)
		return (0);
	while (*b)
		b++;
	b--;
	for (; *b;)
	{
		if (*b != '1' && *b != '0')
			return (0);
		if (j != 1)
			i *= 2;
		if (*b == '1')
			num_uint += i;
		b--;
		j++;
	}
	return (num_uint);
}
