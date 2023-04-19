#include <stdlib.h>
#include "_FUNCTION_POINTERS_H"

/**
 * print_name - func that's accept two arg
 * @name: name to be printed
 * @f: func pointers
 * return: nothing
*/
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
