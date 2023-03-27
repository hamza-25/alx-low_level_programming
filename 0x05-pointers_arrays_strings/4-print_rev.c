#include "main.h"

/**
 * print_rev - function that print str rev
 * description: string printing rev
 * @s: string to print
 * Return: always 0
*/

void print_rev(char *s)
{
	int strlen = 0;
	int i;

	while (*s != '\0')
	{
		strlen++;
		s++;
	}
	s--;
	for (i = strlen; i > 0; i--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
