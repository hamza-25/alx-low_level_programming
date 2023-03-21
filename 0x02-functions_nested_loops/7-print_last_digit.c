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
last_digit = n % 10;
return (last_digit);
}
