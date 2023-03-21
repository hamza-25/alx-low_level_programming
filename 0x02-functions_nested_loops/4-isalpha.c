#include "main.h"
#include <ctype.h>

/**
 * _isalpha - function to check if character is lowercase
 *
 * @c: checks input of function
 *
 * Return: returns 1 if 'c' is lowercase otherwise always 0 (Success)
*/

int _isalpha(int c)
{
if (isalpha(c))
{
return (1);
}
else
{
return (0);
}
_putchar('\n');
}
