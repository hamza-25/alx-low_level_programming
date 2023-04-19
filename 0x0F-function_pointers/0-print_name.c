#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - func that's accept two arg
 * @name: name to be printed
 * @f: func pointers
 * return: nothing
*/

void print_name_as_is(char *name)
{
    printf("Hello, my name is %s\n", name);
}
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
