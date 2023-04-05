#include "main.h"

/**
 * _print_rev_recursion - function that print string rev
 * @s: string to be printed rev
 * return: nothing
*/
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
