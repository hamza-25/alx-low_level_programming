#include "main.h"

/**
 * _puts - function that print str
 * description: string printing
 * @str: string to print
 * Return: always 0
*/

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
