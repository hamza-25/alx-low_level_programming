#include "main.h"

/**
 * get_endianness - function checks endian
 * Return: 1 if little endian or 0 if big endian
*/
int get_endianness(void)
{
	unsigned int integer;
	unsigned int i;

	i = 1;
	integer = *(char *) & i;
	return (integer);
}
