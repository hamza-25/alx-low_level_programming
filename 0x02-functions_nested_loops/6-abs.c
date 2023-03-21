#include "main.h"
#include <ctype.h>
#include <stdlib.h>

/**
 * _abs - absolute value
 *
 * @n: takes integer type input for function
 *
 * Return: always 0
*/

int _abs(int n)
{
if (n < 0)
{
n = (-1) * n;
}
return (n);
}
