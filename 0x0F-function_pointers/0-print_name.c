#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - func that's accept two arg
 * @name: name to be printed
 * @f: func pointers
 * return: void
*/

void print_name(char *name, void (*f)(char *))
{

	if (name && f)
		f(name);
}
