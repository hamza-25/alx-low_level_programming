#include "main.h"

/**
 * binary_to_uint - convert binary to uint
 * @b: binary to be converted
 * Return: uint or 0 if fails
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int num_uint = 0;
	int i = 1;

	if (b == NULL)
		return (0);
	while (*b)
		b++;
	b--;
	for (; *b;)
	{
		if (*b != '1' || *b != '0')
			return (0);
		i *= 2;
		if (*b == '1')
			num_uint += i;
	}
	return (num_uint);
}
