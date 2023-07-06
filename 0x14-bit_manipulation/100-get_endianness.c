#include "main.h"

/**
 * get_endianness - check system is littile or big endianness
 * Return: always int
*/
int get_endianness(void)
{
	char *a;
	unsigned int i = 1;

	a = (char *) &i;
	if (*a == 1)
		return (1);
	return (0);
}
