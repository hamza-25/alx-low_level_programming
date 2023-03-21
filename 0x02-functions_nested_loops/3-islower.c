#include "main.h"
#include <ctype.h>

/**
 * _islower - utilizes on the _putchar function to print
 * C - check is lower
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
