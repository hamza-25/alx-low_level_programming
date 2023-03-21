#include "main.h"
#include <ctype.h>

/**
 * print_sign - function to check if character is lowercase
 *
 * @c: checks input of function
 *
 * Return: returns 1 if 'c' is lowercase otherwise always 0 (Success)
*/

int print_sign(int c)
{
if (c > 0)
{
_putchar('+');
_putchar(' ');
_putchar(49);
}
else if (c < 0)
{
_putchar('-');
_putchar(' ');
_putchar(-49);
}
else
{
_putchar(48);
_putchar(' ');
_putchar(48);
}
_putchar('\n');
}
