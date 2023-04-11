#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *create_array - create array of chars
 * @c: char
 * @size: size of array
 * return: nuul value or array init
*/

char *create_array(unsigned int size, char c)
{
	char *mem = malloc(size);
	if (size == 0 )
		return (0);
	if (mem == 0)
		return(0);
	while (size--)
		n[size] = c;
	return (mem);
}
