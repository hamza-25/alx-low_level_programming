#include "main.h"
#include <ctype.h>

/**
 * _islower - function to check if character is lowercase
 *
 * @c: checks input of function
 *
 * Return: returns 1 if 'c' is lowercase otherwise always 0 (Success)
*/

int _islower(int c)
{
if (islower(c))
{
return (1);
}
else
{
return (0);
}
_putchar('\n');
}
