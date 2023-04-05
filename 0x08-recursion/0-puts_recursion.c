#include "main.h"

/**
 * _puts_recursion - function that print string
 * @s: string to be printed
 * return: nothing
*/
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n'); 
	}
	_putchar(*s);
	s++;
	_puts_recursion(s);
}
