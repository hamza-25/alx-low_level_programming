#include "main.h"
#include <ctype.h>

/**
 * _isupper - check upper case
 * description: checks the upper letters
 * @c: first parameter
 * Return: return 1 if upper otherwise 0
*/
int _isupper(int c)
{
	if (isupper(c))
	{
		return (1);
	}
	return (0);
}
