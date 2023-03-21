#include "main.h"
#include <ctype.h>
#include <stdlib.h>

/**
 * print_last_digit - absolute value
 *
 * @n: takes integer type input for function
 *
 * Return: return last digit
*/

int print_last_digit(int n)
{
int last_digit;
if (n < 0)
{
last_digit = (-1) * (n % 10);
}
else 
{
last_digit = n % 10;
}
_putchar(last_digit + '0');
return (last_digit);
}
