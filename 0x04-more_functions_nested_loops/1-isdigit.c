#include "main.h"
#include <ctype.h>

/**
 * _isdigit - check number is a digit
 * description: checks the number
 * @c: first parameter
 * Return: return 1 if upper otherwise 0
*/
int _isdigit(int c)
{
	if (isdigit(c))
	{
		return (1);
	}
	return (0);
}
