#include "main.h"
#include <ctype.h>
#include <stdlib.h>

/**
 * times_table - printing table with number
*/

void print_times_table(int n)
{
if (n <= 15 && n >= 0)
{
int i, j, mult, pre;
for (i = 0; i <= n; i++)
{
for (j = 0; j <= n; j++)
{
mult = j * i;
if (mult <= 9)
{
printf("%d", mult);
if (j != n)
{
pre = i * (j + 1);
if (pre <= 9)
{
printf(",   ");
}
else
{
printf(",  ");
}
}
}
else if (mult <= 99)
{
printf("%d", mult);
if (j != n)
{
pre = i * (j + 1);
if (pre <= 99)
{
printf(",  ");
}
else
{
printf(", ");
}
}
}
else
{
printf("%d", mult);
if (j != n)
{
printf(", ");
}
}
}
printf("\n");
}
}
}
