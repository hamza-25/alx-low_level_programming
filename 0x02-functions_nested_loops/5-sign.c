#include "main.h"
#include <ctype.h>

/**
 * print_sign - function to check if character is lowercase
 *
 * @c: checks input of function
 *
 * Return: returns 1 if 'c' is lowercase otherwise always 0 (Success)
*/

int print_sign(int n)
{
if (n > 0)
{
_putchar(43);
return (1);
}
else if (n < 0)
{
_putchar(45);
return (-1);
}
else
{
_putchar(48);
return(0);
}
_putchar('\n');
}
