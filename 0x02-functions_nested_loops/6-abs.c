#include "main.h"
#include <ctype.h>
#include <stdlib.h>

/**
 * Return: always 0
 *
 * @n: takes integer type input for function
 *
 * _abs - absolute value
*/

int _abs(int n)
{
if (n < 0)
{
n = (-1) * n;
}
return (n);
}
