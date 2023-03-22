#include "main.h"
#include <ctype.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * print_to_98 - addition numbers
 * @n: start printing
 * Return: always 0
*/

void print_to_98(int n)
{
if (n <= 98)
{
for (; n <= 98; n++)
{
printf("%d, ", n);
}
}
else
{
for (; n >= 98; n--)
{
printf("%d, ", n);
}
}
}
